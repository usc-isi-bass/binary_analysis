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
	char a[100],b[100];
	char g,h;
	int i,n1,n2;
	gets(a);
	gets(b);
	n1=strlen(a);
	n2=strlen(b);


	for(i=0;i<n1;i++)
	{
		g=a[i];
		if(g<97)
		{
			g=g+32;
			a[i]=g;
		}
	}
	for(i=0;i<n2;i++)
	{
		h=b[i];
		if(h<97)
		{
			h=h+32;
			b[i]=h;
		}
	}
	if(strcmp(a,b)==0)
		printf("=");
	else if(strcmp(a,b)<0)
		printf("<");
	else if(strcmp(a,b)>0)
		printf(">");
}
