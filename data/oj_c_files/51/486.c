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
	char a[600];
	int ans[600]={0},mm=0;
	scanf("%d",&n);
	scanf("%s",&a);
	int i;
	i=0;
	int l=strlen(a);
	while (i+n<=l)
	{
		int j;
		ans[i]=1;
		for (j=i+1;j+n<=l;j++)
		{
			int ff=1;
			int k;
			for (k=0;k<n;k++)
			{
				if (a[i+k]!=a[j+k])
				{
					ff=0;break;
				}
			}
			if (ff) ans[i]++;
		}
		if (ans[i]>mm) mm=ans[i];
		i++;
	}
	if (mm>1)
	{
	printf("%d\n",mm);
	for (i=0;i+n<=l;i++)
	{
		if (ans[i]==mm)
		{
			int k;
			for (k=i;k<i+n;k++) printf("%c",a[k]);
			printf("\n");
		}
	}
	}
	else printf("NO");
	
	return 0;
}