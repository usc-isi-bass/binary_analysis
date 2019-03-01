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
{
	int n,i,j=0,k,B;
	char a[200],b[200];
	gets(a);
	int A=B=strlen(a);
	for(i=A-1;i>=0;i--)	
	{
		if(a[i]==' ')	B--;
		else break;
	}
	for(i=0;i<B;i++)
	{
		if(a[i]!=' ')
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			b[j]=' ';
			j++;
			for(k=i;k<B-1;k++)	if(a[k+1]!=' ')	break;
			i=k;
		}
	}
	for(i=0;i<j;i++) printf("%c",b[i]);
}