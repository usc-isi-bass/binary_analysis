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
	int n,i,j,k;
	char a[1000][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
		for(j=0;j<strlen(a[i]);j++)
		{
			if((a[i][j]<'0'||a[i][j]>'z'||(a[i][j]<'a'&&a[i][j]>'Z')||(a[i][j]<'A'&&a[i][j]>'9'))&&a[i][j]!='_')
			{  k=0;break;}
			else if(a[i][0]>='0'&&a[i][0]<='9')
			{
				k=0;break;}
			k=1;
		}
		if(k) printf("yes\n");
		else printf("no\n");
	}
}