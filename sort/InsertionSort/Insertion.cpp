#include "Insertion.h"
#include <iostream>
#include "../Common/Common.h"
#include <assert.h>
using std::cout;
using std::endl;

/*要求排序结果是从小到大*/
int Insertion_Sort(int* src, const int count)
{
  int times = 0;
  for(int j=0;j<count-1;++j)
  {
    int toInsert = src[j+1];
    int i;
    for(i=j; i>=0; --i)
    {
      ++times;
      if(toInsert > src[i])    
        break;
    }
    // i+1 -> j 依次后移 , j+1 移到 i+1
    for(int k=j;k>i;--k)
    {
      ++times;
      src[k+1] = src[k];
    }
    //src[k] = toInsert;
    src[i+1] = toInsert;
    Print(src, count);
  }
  cout << "时间复杂度 times is: " << times << endl;
  //assert(times <= count*(count-1)/2); // 内层嵌了两次循环，肯定会超过
  assert(times <= count*(count-1)); 
  return 0;
}

// 将内层的两个循环合一
int Insertion_Sort_1(int* src, const int count)
{
  int times = 0;
  for(int j=0;j<count-1;++j)
  {
    int toInsert = src[j+1];
    int i;
    for(i=j; i>=0; --i)
    {
      ++times;
      if(toInsert > src[i])    
        break;
      //Swap(src[i], src[i+1]); // 并不需要交换
      src[i+1] = src[i];
    }
    src[i+1] = toInsert;
    /*// i+1 -> j 依次后移 , j+1 移到 i+1
    for(int k=j;k>i;--k)
    {
      ++times;
      src[k+1] = src[k];
    }
    //src[k] = toInsert;
    src[i+1] = toInsert;*/
    Print(src, count);
  }
  cout << "时间复杂度 times is: " << times << endl;
  assert(times <= count*(count-1)/2);
  return 0;
}
 
