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

int huiwen(char a[],int m,int n)
{
	int i;
	while(m<n)
	{
		if(a[m]!=a[n]) {return 0;break;}
		else {m++;n--;}
	}
	if(m>=n) return 1;
}
void print(char a[],int m,int n)
{
	int i;
	for(i=m;i<=n;i++)
		printf("%c",a[i]);
	printf("\n");
}
int main ()
{
	char a[500];
	int i,j,k,l;
	gets(a);
	l=strlen(a);
	for(i=2;i<=l;i++)
	{
		for(j=0;j<=l-i;j++)
		{
			if(huiwen(a,j,j+i-1)==1)
				print(a,j,j+i-1);
		}
	}
}
