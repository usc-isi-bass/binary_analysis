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
	int a=1000;
	int c[10000];
	int i;
	int k=0;
	scanf("%d",&n);
	for(int w=0;w<10000;w++)
		c[w]=0;
	int b=n;
	while(a!=0||b!=0)
	{
		c[b]++;
		scanf("%d%d",&a,&b);
	}
	for(int l=0;l<n;l++)
	{
			if(c[l]==n-1)
			{
				printf("%d",l);
				k=1;
				break;
			}
	}
	if(k==0)
		printf("NOT FOUND");
	return 0;
	}
