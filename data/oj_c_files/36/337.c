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
int flag(char x[100],char y[100]);
char stro[100],strt[100];
int f;
scanf("%s%s",stro,strt);
f=flag(stro,strt);
if(f==0)
printf("YES");
else
printf("NO");
}

int flag(char x[100],char y[100])
{
	int i,j,c,m,n;
	m=strlen(x);
	n=strlen(y);
	if(m!=n)
		c=1;
	else
	{
		for(i=0,c=m;i<m;i++)
			for(j=0;j<n;j++)
				if(x[i]==y[j])
				{
					x[i]=0;
					y[j]=0;
					c--;
					break;
				}
				}
	return(c);
}
