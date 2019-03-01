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

void main()
{
	int i,j,k,a[16],s,q;
	do
	{
    scanf("%d",&q);
	a[0]=q;
	if(q==-1) break;
	for(i=1;i<=15;i++)
		{
			scanf("%d",&a[i]);
			if (a[i]==0) break;
		}
	s=0;
	for(j=0;j<i;j++)
		{
			for(k=0;k<i;k++)
			{
				if(a[j]==2*a[k]) s=s+1;
				else s=s;
			}
		}
		printf("%d\n",s);
	}
	while(q!=-1);
}
