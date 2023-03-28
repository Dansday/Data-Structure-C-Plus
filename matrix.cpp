#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 int matrix[4][4]={{5,10,1,11},{4,7,67,-9},{9,0,45,3},{6,-7,5,80}};
 int i,j;
 for (i=0; i<4; i++)
 {
  for (j=0; j<4; j++)
  {
   cout<<matrix [i][j]<<"   ";
  }
  cout<<endl;
 }
 return 0;
}
