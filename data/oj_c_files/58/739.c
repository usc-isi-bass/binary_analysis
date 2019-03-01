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
	int n,i,j,len,sign;
	scanf("%d",&n);
	getchar();
	char a[81];
    for(i=1;i<=n;i++)
	{
		gets(a);
		len=strlen(a);
		sign=1;
		if(a[0]!=95&&isalpha(a[0])==0)sign=0;	
        for(j=1;j<len;j++)
		{	if(isalnum(a[j])==0&&a[j]!=95)sign=0;}
		printf("%d\n",sign);
	}
	return 0;
}
