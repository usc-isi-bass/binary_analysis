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
  int a[5][5];
  int b[5];
  int c[5];
  int i,j,t;
  t=0;
  for(i=0;i<5;i++)
  {
   for(j=0;j<5;j++)
   { 
     cin >> a[i][j];
   }
  }
  for(i=0;i<5;i++)
  {
    b[i]=a[i][0];
  }
  for(j=0;j<5;j++)
  {
    c[j]=a[0][j];
  }
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      if(a[i][j]>b[i])
      {
       b[i]=a[i][j];
      }
      if(a[i][j]<c[j])
      {
        c[j]=a[i][j];
      }
    }
  }
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      if(b[i]==c[j])
      {
        cout << i+1 << " " << j+1 << " ";
        cout << b[i] << endl;
        t++;
      }
    }
  }
  if(t==0)
  {
   cout << "not found" << endl;
  }
  cin.get();cin.get();cin.get();
  return 0;
}
      
  