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

//***********************************************
//*  ? ? ?:5.3                               *
//*  ?    ?:???                            *
//*  ????:10.25                             *
//*  ????:????                          *
//*********************************************** 
int main()
{
    int n,m;
    cin>>n>>m;
    int p[n];
    for(int i=0;i<n;i++)
    {
      cin>>p[i];
    }
    for(int j=0;j<m;j++)
    {
      int t;
      t=p[n-m+j];
      for(int k=n-m+j;k>j;k--)
      {
        p[k]=p[k-1];
      }
      p[j]=t;
    }
    for(int k=0;k<n-1;k++)
    {
       cout<<p[k]<<" ";
    }
    cout<<p[n-1];
    return 0;
}        
