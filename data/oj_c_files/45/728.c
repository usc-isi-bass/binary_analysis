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
{    int a,b,i,j;

     char s[50],t[50],m[102];
	scanf("%s",s);
	getchar();
     scanf("%s",t);
	 a=strlen(s);
	 b=strlen(t);
for(i=0;i<=b-a;i++)
{
	for(j=i;j<=i+a-1;j++)
	{if(t[j]!=s[j-i])
	break;
	}
	if(j==i+a)
	{printf("%d",i);
	break;
	}
	else continue;
}
return 0;
}
