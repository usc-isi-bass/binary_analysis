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
	char s1[255], s2[255];
	int a, b, l1, l2, sum[255]={0}, l=0;
	scanf("%s %s", s1, s2);
	l1=strlen(s1);
	l2=strlen(s2);
	while(l1>0||l2>0)
	{
		a=(l1>0)?s1[--l1]-'0':0;
		b=(l2>0)?s2[--l2]-'0':0;
		sum[l]+=a+b;
		sum[l+1]=sum[l]/10;
		sum[l++]%=10;
	}
	while(sum[l]==0&&l>0)
	{
		l--;
	}
	for(;l>=0;l--)
	{
		printf("%d", sum[l]);
	}
	printf("\n");
	return 0;
}