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
	int i,j,la,lb,min;
	char t;
	char a[100],b[100];
	scanf("%s %s",a,b);
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<la;i++)
	{
		min=i;
		for(j=i+1;j<la;j++)
			if(a[j]<a[min]) min=j;
		t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
	for(i=0;i<lb;i++)
	{
		min=i;
		for(j=i+1;j<lb;j++)
			if(b[j]<b[min]) min=j;
		t=b[i];
		b[i]=b[min];
		b[min]=t;
	}
	if(strcmp(a,b)==0) printf("YES");
	else printf("NO");
}
