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
	int qiumax(int s[1005],int n);
	int a[1005]={0},b[1005]={0},i=0;
	char c;
	do
	{
		i++;
		scanf("%d",&a[i]);
		c=getchar();
	}
	while(c!='\n');
	int num=i;
	for(i=1;i<=num;i++)
	{scanf("%d",&b[i]);c=getchar();}
	int cnt[1002]={0},j,maxb=qiumax(b,num);
	for(i=1;i<=num;i++)
	{
		for(j=a[i];j<b[i];j++)
			cnt[j]++;
	}
	int maxpeople=qiumax(cnt,maxb-1);
	printf("%d %d",num,maxpeople);
	return 0;
}

int qiumax(int s[1005],int n)
{
	int i,max=0;
	for(i=0;i<=n;i++)
	{
		if(s[i]>max)
			max=s[i];
	}
	return max;
}


