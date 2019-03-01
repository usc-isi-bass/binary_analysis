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
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j,p=0,q;
    int num[1000];
	for(i=0;i<n;i++)
	{
         int num1;
         scanf("%d",&num1);
         num[i]=num1;
	}
    for(q=0;q<n;q++)
	{
		for(j=q+1;j<n;j++)
		{
			if((num[q] + num[j])==k)
			{
				p++;
				break;
			}
		}
	if(p>0)break;
     }

	if(p==0)
	{
		printf("no");
	}else{
	printf("yes");
		}
return 0;
}
