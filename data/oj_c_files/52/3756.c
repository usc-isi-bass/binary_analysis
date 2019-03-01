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
int n,m,i,j,*p,*t,a[100],temp;
cin>>n>>m;                                  //??????????? 
for(i=0,p=a;i<n;i++,p++)
  cin>>*p;                                 //???????? 
p=a+n-m-1;                                 //??????? 
for(i=n-m-1;i>=0;i--,p--)
{
  for(t=a+i+1,j=i+1;j<i+m+1;j++,t++)       //??????? 
    {
       temp=*(t-1);
       *(t-1)=*t;
       *t=temp;                         
    }
}
for(i=0;i<n;i++)                            //??????? 
{
  cout<<*(a+i);
  if(i!=n-1)
    cout<<' ';
} 
return 0; 
}
