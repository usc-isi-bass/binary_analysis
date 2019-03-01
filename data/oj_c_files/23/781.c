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
{int i,t=0,m,n,a=0;
	char str[100];
	gets(str);
for(i=99;i>=0;i--)
{ if(str[i]=='\0')
{    t=1;
   m=i-1;
   continue;
}
 if(t==1)
 { 
    if(str[i]==' ')
	{a=1;
		for(n=i+1;n<=m;n++)
	printf("%c",str[n]);
    printf(" ");
	m=i-1;
	}
    if(i==0&&a==1)
	for(n=0;n<=m;n++)
		printf("%c",str[n]);

	}
 
}
if(a==0)
for(n=0;n<=m;n++)
 printf("%c",str[n]);
printf("\n");
}