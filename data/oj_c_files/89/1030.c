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

main()
{
	int a[10000]={0},b[10000]={0},n,x,y,k=0,i;
	scanf("%d",&n);
	scanf("%d%d",&x,&y);
	while(x!=0||y!=0)
	{
		a[x]++;
		b[y]++;
		scanf("%d%d",&x,&y);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0&&b[i]==(n-1))
		{
			k++;
			printf("%d\n",i);
		}
	}
	if(k==0)
		printf("NOT FOUND\n");
	return 0;
}