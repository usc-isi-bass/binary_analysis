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

void sort(char str[])
{
	int i,j;
	char swap;
	for (i=0;i<=strlen(str)-2;i++)
		for (j=0;j<=strlen(str)-2-i;j++)
			if (str[j]>str[j+1])
			{
				swap=str[j];
				str[j]=str[j+1];
				str[j+1]=swap;
			}
}
void main()
{
	char a[50],b[50];
	int flag,i;

	scanf("%s%s",&a,&b);
	sort(a);
	sort(b);
	flag=1;
	for (i=0;i<=strlen(a);i++)
		if (a[i]!=b[i])
		{
			flag=0;
			break;
		}
	if (flag) printf("YES");
	else printf("NO");
}