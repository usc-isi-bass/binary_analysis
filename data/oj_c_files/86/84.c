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
	int n,i,a[100],b[100],j,t,m;
	scanf("%d",&m);
	for(int l=0;l<m;l++)
	{
	scanf("%d",&n);
		for(i=0; i<n; i++)
		{
			scanf("%d",&a[i]);
		}
		a[i]=60;
		i=0;
		t=0;
		for(j=1;j<=70;j++)
		{
			b[j]=t+1;
			t=b[j];
			if(b[j]==a[i])
			{
				i++;
				for(int k=0;k<3; k++)
					b[++j]=t;
			}
		}
		printf("%d\n", b[60]);
	}
	return 0;
}