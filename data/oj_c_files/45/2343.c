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
	char a[50],b[50];
	int i,j,k,n=0,m,res=-1;
	scanf("%s %s",b,a);
	j=strlen(a);
	k=strlen(b);
	for(n=0;n<j;n++)
	{
		m=0;
		while((m<k)&&(b[m]==a[m+n]))m++;
	    if(m==k)
		{
			res=n;
			break;
		}
	}
	if(res!=-1)printf("%d",res);
}