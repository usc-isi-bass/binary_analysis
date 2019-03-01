#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
 int max[2]={0};
 int n,number;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cin>>number;
  if(number>max[0])
  {
   max[1]=max[0];
   max[0]=number;
  }
  else if(number>max[1])
  {
   max[1]=number;
  }
 }
 cout<<max[0]<<endl<<max[1]<<endl;
 return 0;
} 