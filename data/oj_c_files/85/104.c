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

int main(int argc, char* argv[])
{
	int m=0,n,i,j,l;
	char a[21];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		m=0;
		gets(a);
		l=strlen(a);
		for(j=0;a[j]!='\0';j++)
		{ 
			if((j==0&&(a[j]>='a'&&a[j]<='z'||a[j]>='A'&&a[j]<='Z'||a[j]=='_'))||(j!=0&&(a[j]>='a'&&a[j]<='z'||a[j]>='A'&&a[j]<='Z'||a[j]=='_'||a[j]>=48&&a[j]<=57)))
			{
			       m++;
			}
		}
		if(m!=l)
			printf("no\n");
		if(m==l)
			printf("yes\n");
	}
	return 0;
}

