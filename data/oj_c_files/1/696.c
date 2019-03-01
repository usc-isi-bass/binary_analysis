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

int times;
int move(int a,int num)//a??????
{int i;
	if(num==1)
		times++;
   for(i=2;i<=num;i++)
	   if(num%i==0&&i>=a)
		   move(i,num/i);
   return times;
}
int main()
{
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
	cin>>a[i];
int b[n];//??????
for(i=0;i<n;i++)
	{times=0;
	b[i]=move(1,a[i]);}
for(i=0;i<n;i++)
	cout<<b[i]<<endl;
return 0;
}