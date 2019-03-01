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
	int n,i,j,l,flag;
	scanf("%d",&n);
	getchar();
	char a[100];
	for(i=0;i<n;i++)
	{
		flag=1;
		gets(a);
		l=strlen(a);
		if(!(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')))
			flag=0;
		else
		{
			for(j=1;j<l;j++)
			{
			    if(!(a[j]=='_'||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9')))
				{
					flag=0;
					break;
				}
				else
					flag=1;
			}
		}
		if(flag==0) printf("0\n");
		else printf("1\n");
	}
}











