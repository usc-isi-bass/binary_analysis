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

int num[200]={0};
int len=0;
int plusbig()
{
	int i;
	for (i=0;i<len;i++)num[i]+=num[i];
	for (i=0;i<len-1;i++) 
	{
		
		if(num[i]>=10) 
		{
			num[i+1]++;	
			num[i]=num[i]%10;
		}
	}
	if(num[len-1]>=10)
	{
		num[len-1]=num[len-1]%10;
		num[len]=1;
		len++;
	}
	return 0;
}
int main()
{
	int i,n;
	cin>>n;
	len=1;
	num[0]=1;
	for(i=0;i<n;i++) plusbig();
	for(i=len-1;i>=0;i--)cout<<num[i]; 
	return 0;
}