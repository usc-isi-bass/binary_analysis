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

int i,n,p,k;
char a[100],s[100][30];
void main()
{
	gets(a);
	n=strlen(a);
	p=0;
	k=0;
	for(i=0;i<n;i++)
	{	
		if(a[i]!=' ')
			s[k][p++]=a[i];
		else
		{
			s[k][p]=0;
			p=0;
			k++;
		}
	}
	for(i=k;i>0;i--)
		printf("%s ",s[i]);
	printf("%s\n",s[0]);
}
