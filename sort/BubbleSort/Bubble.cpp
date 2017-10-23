#include "Bubble.h"
#include <iostream>
#include "../Common/Common.h"
#include <assert.h>
using std::cout;
using std::endl;

/*要求排序结果是从小到大*/
// 先把小的移到左边
int Bubble_Sort(int* src, const int count)
{
  int times = 0;
  for(int j=0;j<count-1;++j)
  {
    // 从右向左 <-- 依次比较相邻两个元素，小的往左移
    // 循环一轮，最小的数到达最左侧
    for (int i=count-1; i>j; --i)
    { // swap if need
      ++ times;
      if (src[i-1] > src[i])
        Swap(src[i-1], src[i]); // TODO:警惕数组越界
    }
    Print(src, count);
  } 
  cout << "时间复杂度 times is: " << times << endl;
  assert(times == count*(count-1)/2);
  return 0;
}

// 先把大的移到右边
int Bubble_Sort_1(int* src, const int count)
{
  int times = 0;
  for(int j=count-1; j>0; --j)
  {
    // 从左向右 --> 依次比较相邻两个元素，小的往左移
    // 循环一轮，最小的数到达最左侧
    for (int i=0; i<j; ++i)
    { // swap if need
      ++ times;
      if (src[i] > src[i+1])
        Swap(src[i], src[i+1]); // TODO:警惕数组越界
    }
    Print(src, count);
  }
  cout << "时间复杂度 times is: " << times << endl;
  assert(times == count*(count-1)/2);
  return 0;
}
 
