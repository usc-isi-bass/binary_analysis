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
int n;
int flag=1;
cin>>n;
int result[109];
memset(result,0,sizeof(result));
result[1]=1;
while(n>0)
{
n--;
for(int i=1;i<=100;i++)
   result[i]=result[i]*2;
for(int i=1;i<=100;i++)
   if(result[i]>=10)
      {
      result[i]=result[i]-10;
	  result[i+1]++;
	  }
}
for(int i=99;i>=1;i--)
   {
    if(result[i]>1e-6)
       flag=0;
    if(flag==0)
       cout<<result[i];
   }   
return 0; 
}