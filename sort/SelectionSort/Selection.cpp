#include "Selection.h"
#include <iostream>
#include "../Common/Common.h"
#include <assert.h>
using std::cout;
using std::endl;

// 先排小的
int Selection_Sort(int* src, const int count)
{
  int times = 0;
  for( int j=0; j< count-1; ++j)
  {
    int min = src[j];
    int minLoc = j;
    for(int i=j+1; i<count; ++i)
    {
      ++ times;
      if (src[i] < min)
      {
        min = src[i];
        minLoc = i;
      }
    }
    if (minLoc != j)
      Swap(src[minLoc], src[j]);
    Print(src, count);
  }
 
  cout << "时间复杂度 times is: " << times << endl;
  assert(times == count*(count-1)/2);
  return 0;
}
// 先排大的
int Selection_Sort_1(int* src, const int count)
{
  int times = 0;
  for( int j=count-1; j>0; --j)
  {
    int max = src[j];
    int maxLoc = j;
    for(int i=0; i<j; ++i)
    {
      ++ times;
      if (src[i] > max)
      {
        max = src[i];
        maxLoc = i;
      }
    }
    if (maxLoc != j)
      Swap(src[maxLoc], src[j]);
    Print(src, count);
  }
 
  cout << "时间复杂度 times is: " << times << endl;
  assert(times == count*(count-1)/2);
  return 0;
}
