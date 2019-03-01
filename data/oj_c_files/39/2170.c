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
	int n, i;
	scanf("%d", &n);
	int sum[100]={0}, total=0;
	char name[100][20];
    for(i=0;i<n;i++)
	{
		int a, b;
		char p, q;
		int l;
		scanf("%s%d%d %c %c%d", &name[i], &a, &b, &p, &q, &l);
		if(a>80&&l!=0)
		{
			sum[i]+=8000;
		}
		if(a>85&&b>80)
		{
			sum[i]+=4000;
		}
		if(a>90)
		{
			sum[i]+=2000;
		}
		if(a>85&&q=='Y')
		{
			sum[i]+=1000;
		}
		if(b>80&&p=='Y')
		{
			sum[i]+=850;
		}
		total+=sum[i];
	}
	int max=0, k;
	for(i=0;i<n;i++)
	{
		if(sum[i]>max)
		{
			max=sum[i];
			k=i;
		}
	}
	printf("%s\n", name[k]);
	printf("%d\n", sum[k]);
	printf("%d\n", total);
	return 0;
}