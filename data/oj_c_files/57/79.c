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
	int n,i;
	char a[50][21];
	scanf("%d\n",&n);
    for(i=0;i<n;i++) 
	{
		gets(a[i]);
		int l=strlen(a[i]);
		if(a[i][l-1]=='r'||a[i][l-1]=='y') 
		{
			a[i][l-2]='\0';
			a[i][l-1]='\0';
		}
		else
		{
			a[i][l-2]='\0';
			a[i][l-1]='\0';
			a[i][l-3]='\0';
		}
	}
	int j;
	for(j=0;j<n;j++)  puts(a[j]);
		
}