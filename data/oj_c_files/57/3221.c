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
	int n,i,j,k; char s[15];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",s);
		k=strlen(s);
		if(s[k-1]=='r')k=k-3;
		if(s[k-1]=='y')k=k-3;
		if(s[k-1]=='g')k=k-4;
		for(j=0;j<=k;j++)
		printf("%c",s[j]);
		printf("\n");
	}
}