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
{int n,num,a[500]={0},i,j=0,k; //i,j,k????? 
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>num;
  if(num%2==1)
    {a[j]=num;
     j++;}                //????????????? ?j??????? 
  } 
 for(i=0;i<j-1;i++)
  for(k=0;k<j-1-i;k++)
   if(a[k]>a[k+1])
   {num=a[k+1];
    a[k+1]=a[k];
    a[k]=num;}           //????? 
 for(i=0;i<j-1;i++)
  cout<<a[i]<<",";
 cout<<a[j-1];
 return 0;
}
