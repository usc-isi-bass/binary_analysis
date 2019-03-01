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

int series(int a[])
{
	char s[1000];
	gets(s);
	int len=strlen(s),temp=0,num=0,i,p=0;
	for(i=0;i<len;i++)
	{
		if(s[i]==',')
		{
			a[num++]=temp;
			temp=0;
		}
		else
			temp=temp*10+s[i]-'0';
	}
	a[num++]=temp;
	return(num);
}
int find_second(int a[],int num)
{
	int max,sec,i;
	max=0,sec=0;
	for(i=0;i<num;i++)
	{
		if(a[i]>max)
		{
			sec=max;
			max=a[i];
		}
		else if(a[i]>sec&&a[i]<max)
			sec=a[i];
	}
	if(max==sec) return 0;
	else
		return(sec);
}


void main()
{
	int n,a[100],sec;
	n=series(a);
	sec=find_second(a,n);
	if(sec)
	printf("%d\n",sec);
	else
		printf("No\n");
}