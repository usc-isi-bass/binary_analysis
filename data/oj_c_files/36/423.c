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

void array(char a[])
{
	int l,i,j,max;
	char aa;
	l=strlen(a);
	for(i=0;i<l;i++)
	{max=i;
	 for(j=i+1;j<l;j++)
		 if(a[j]>a[max]) max=j;
	 aa=a[i];
	 a[i]=a[max];
	 a[max]=aa;
	}
}
void main()
{
	char a[100],b[100];
	scanf("%s%s",a,b);
	array(a);
	array(b);
	if(strcmp(a,b)==0) printf("YES");
	else printf("NO");
}