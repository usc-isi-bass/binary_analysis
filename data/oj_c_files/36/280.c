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
	char a[100],b[50];
	int i,j=0,k;
	gets(a);
	for(i=0;a[i]!=' ';i++);
	
	if(strlen(a)==2*i+1)
	{
		for(i=i+1;i<strlen(a);i++,j++)
		b[j]=a[i];
	
	    for(i=0;i<strlen(a)/2;i++)
		{
			for(j=0;j<strlen(a)/2;j++)
			{
				if(b[j]==a[i])
					b[j]=a[i]=2;
			}
		}
		k=strlen(a);
		for(i=0;i<strlen(a)/2&&b[i]==a[i];i++);
		if(i==strlen(a)/2)
			printf("YES");
		else
            printf("NO");
			
	}

	else
		printf("NO");
}