#include "Shell.h"
#include <iostream>
#include "../Common/Common.h"
#include <assert.h>
using std::cout;
using std::endl;

/*要求排序结果是从小到大*/

// 由 Insertion_Sort_1() 改进而来
int Shell_Sort_1(int* src, const int count)
{
  int times = 0;
  for(  int step = count/2; step >=1; step /= 2)
  {
    for(int i=0;i<count-step;++i)
    {
      int toInsert = src[i+step];
      int j;
      for(j=i; j>=0; j -= step)
      {
        ++times;
        if(toInsert > src[j])    
          break;
        //Swap(src[j], src[j+step]);
        src[j+step] = src[j];
      }
      src[j+step] = toInsert;
      Print(src, count);
    }
  }
  cout << "时间复杂度 times is: " << times << endl;
  assert(times <= count*(count-1)/2);
  return 0;
}
 
