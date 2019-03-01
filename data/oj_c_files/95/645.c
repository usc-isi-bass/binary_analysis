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
	char a[100];
	char b[100];
	int i,j,al,bl,k,q;
	gets(a);
		gets(b);
	al=strlen(a);bl=strlen(b);	
	for(i=0;i<al;i++)
		if(a[i]>='a'&&a[i]<='z')
			a[i]-=32;
	for(j=0;j<bl;j++)
			if(b[j]>='a'&&b[j]<='z')
				b[j]-=32;
	
	if (al<bl)k=bl;
	else k=al;
			for(q=0;q<k;q++)
			{	
				if(a[q]<b[q])
				{printf("<");break;}
			    if(a[q]>b[q])
				{printf(">");break;}
		
			}
			if(q==k)printf("=");
			return 0;
			
}
