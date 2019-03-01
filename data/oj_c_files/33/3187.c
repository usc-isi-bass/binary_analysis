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
	int n,i,j,k,len,sum=0;
	char a[300],b[300];
scanf("%d",&n);
for(j=0;j<n;j++)
{
scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
		  {
	if(a[i]=='A')
		a[i]='T' ;
	else if(a[i]=='T')
		a[i]='A' ;
		else if(a[i]=='C')
		a[i]='G' ;
			else if(a[i]=='G')
		a[i]='C' ;
		}
		printf("%s\n",a);
}
	return 0;
}