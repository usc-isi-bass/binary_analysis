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
	static char a[100],b[100];
	int i,j,k=1;
	scanf("%s%s",a,b);
	for(i=0;a[i]!=0;i++)
	{
		for(j=0;b[j]!=0;j++)
		if(b[j]==a[i])
		{
			b[j]=1;
			break;
			}
		if(b[j]==0)
		{k=0;break;}
		}
	for(j=0;b[j]!=0;j++)
		if(b[j]!=1)
		k=0;
	if(k)
	printf("YES");
	else printf("NO");
}