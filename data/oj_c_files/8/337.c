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
  int m1,n1;
  cin  >> m1 >> n1;
  int m=m1,n=n1;
  int a[m];
  int b[n];
  int i,j,k;
  for(i=0;i<m;i++)
  {
   cin>> a[i];
  }       
  for(i=0;i<n;i++)
  {
    cin >> b[i];
  }
  for(i=0;i<m-1;i++)
  {
   for(j=0;j<m-1-i;j++)
   {
     if(a[j]>a[j+1])
     {
       k=a[j];a[j]=a[j+1];a[j+1]=k;
     }
   }
  } 
  for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-1-i;j++)
   {
     if(b[j]>b[j+1])
     {
       k=b[j];b[j]=b[j+1];b[j+1]=k;
     }
   }
  } 
  for(i=0;i<m;i++)
  {
    cout << a[i] << " ";
  }
  for(i=0;i<n-1;i++)
  {
   cout << b[i] << " ";
  }
  cout << b[n-1] << endl;
  cin.get();cin.get();cin.get();
  return 0;
}
