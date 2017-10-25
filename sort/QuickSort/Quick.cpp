#include "Quick.h"
#include <iostream>
#include "../Common/Common.h"
#include <assert.h>
using std::cout;
using std::endl;

static int times = 0;
static int times1 = 0;
static int times2 = 0;

/*要求排序结果是从小到大*/
// 使用额外空间
int Quick_Sort(int* src, const int count, const int level)
{
  if(count <= 1)
    return 0;
  int pivot = src[0];
  int less[count], greater[count];
  int j = 0, k = 0;
  for(int i=1;i<count;++i)
  {
    ++times;
    if(src[i] < pivot)
    {
      less[j] = src[i];
      ++j;
    }
    else if(src[i] > pivot)
    {
      greater[k] = src[i];
      ++k;
    }
    else // 如果存在多个相等的
      ; 
  }
  Quick_Sort(less, j, level+1);
  Quick_Sort(greater, k, level +1);
  int i = 0;
  for(i=0; i< j; ++i)
    src[i] = less[i];
  src[i] = pivot;
  i++;
  for( int j=0; j<k; ++j)
    src[i+j] = greater[j];
  Print(src, count);
  
  if(level == 0)
  {
    cout << "时间复杂度 times is: " << times << endl;
    assert(times <= count*(count-1)/2);
  }
  return 0;
}

// 
int Quick_Sort_1(int* src, const int count, const int level)
{
  if (count <=1)
    return 0;
  int pivot = src[0];  
  int storeIndex = 1; // >= pivot 的元素索引。storeIndx - i 之间的数全都 >= pivot
  for(int i = 1; i <count; ++i)
  {
    ++times1;
    if(src[i] < pivot)
      Swap(src[i], src[storeIndex++]);
  }
  Swap(src[0], src[storeIndex-1]); 
  Print(src, count);
  Quick_Sort_1(src, storeIndex-1, level+1);
  Quick_Sort_1(src + storeIndex, count -storeIndex, level+1);

  if(level == 0)
  {
    cout << "时间复杂度 times is: " << times1 << endl;
    assert(times1 <= count*(count-1)/2);
  }
  return 0;
}
 
int Quick_Sort_2(int* src, const int count, const int level)
{
  if (count <=1)
    return 0;
  int pivot = src[0];  
  int i = 1, j = count-1;
  do
  {
    ++times2;
    while(src[i] < pivot) ++i;
    while(src[j] > pivot) --j;
    if(i<j)
      Swap(src[i++], src[j--]);
    Print(src, count);
  } while (i<j);
  if(src[i] < pivot) // i==j 时
    ++i;
  Swap(src[0], src[i-1]); 
  Print(src, count);
  Quick_Sort_2(src, i-1, level+1);
  Quick_Sort_2(src + i, count -i, level+1);

  if(level == 0)
  {
    cout << "时间复杂度 times is: " << times2 << endl;
    assert(times2 <= count*(count-1)/2);
  }
  return 0;
}
