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
	int i,j,k=1,flag=1;
	int a[16]={0};
	int c[100]={0};
	while(flag)
	{
		for(i=1;i<16;i++)
		{
		scanf("%d",&a[i]);
		if(a[i]==-1){flag=0;break;}
		if(a[i]==0){k++;break;}
		for(j=i-1;j>0;j--)
			{
				if(a[i]==2*a[j]||2*a[i]==a[j])c[k]++;
			}
		}
	}
	for(i=1;k>0&&i<k;i++)printf("%d\n",c[i]);
	return 0;
}