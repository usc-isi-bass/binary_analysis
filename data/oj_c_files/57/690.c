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
	int n,c,i;
	char a[50][50];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		c=strlen(a[i]);
		if (a[i][c-1]=='r')
			a[i][c-2]='\0';
		else if(a[i][c-1]=='y')
			a[i][c-2]='\0';
		else a[i][c-3]='\0';
		printf("%s\n",a[i]);
	}


}