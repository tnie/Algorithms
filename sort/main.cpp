#include <vector>
#include <iostream>
#include "BubbleSort/Bubble.h"
#include "Common/Common.h"

using namespace std;

int main()
{
  int src[9]={5,9,3,1,2,8,4,7,6};
  int count = sizeof(src)/sizeof(int);
  cout << "The num of Array is: " << count << endl;
  
  cout << "Befor: " << endl;
  Print(src,count);
  
  //Bubble_Sort(src, count,false);
  Bubble_Sort_1(src, count,false);
  cout << "After: " << endl;
  Print(src,count);
  return 0;
}
