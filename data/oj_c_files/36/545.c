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

int f(char a[],char b[])
{
	int l1,l2,i,j;
	char q;
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
		return(0);
	for(i=0;i<=l1;i++)
	{for(j=i;j<=l2;j++)
	{if(b[j]==a[i])
	{q=b[j];
		b[j]=b[i];
		b[i]=q;break;}
	}
	if(a[i]!=b[i])
		return(0);
	}
	return(1);
}
void main()
{
	char str[20],str1[20];
	int c;
	scanf("%s%s",str,str1);
	c=f(str,str1);
	if(c==1)
		printf("YES");
	else printf("NO");
}
