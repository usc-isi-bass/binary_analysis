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
	int n;// ??
	scanf("%d",&n);
    int pan[300000]={0},num[300000]={0},s=n*(n-1)/2;
	int a,b,i;
	for(i=1;;i++)
	{
		scanf("%d %d",&a,&b);
		if(a==0&&b==0) break;
		else
		{
			if(pan[a]==0)//??1:????
			{
				pan[a]=1;s=s-a;
			}
			if(pan[b]==0)
				num[b]++;
		}
	}
	if(num[s]==n-1&&pan[s]==0) printf("%d",s);
	else printf("NOT FOUND");
	return 0;
}