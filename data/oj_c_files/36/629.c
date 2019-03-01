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
	char a[100],b[100];
	int i,l1,l2,j;
	int m=0;
	scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
		printf("NO");
	else
	{
		for(i=0;i<l1;i++)
			for(j=0;j<l1;j++)
			{
				if(a[i]==b[j])
				{
					b[j]='\0';
					m=1;
					break;
				}
				else
					m=0;
			}
		if(m)
			printf("YES");
		else
			printf("NO");
	}
	
}