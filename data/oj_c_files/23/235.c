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
	int i,j,t,n=0,m=0,k=0;char a[100],b[100][100];
	gets(a);
	t=strlen(a);
	for(i=0;i<t;i++)
	{
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		{
			j=k;
			b[j][n]=a[i];
			n++;
			m=1;
		}
		else if(m==1)
		{
			k++;
			b[j][n]='\0';
			n=0;
			m=0; 
		}
	}
	b[j][n]=0;
    printf("%s",b[j]);
	for(i=j-1;i>=0;i--)
    printf(" %s",b[i]);
}