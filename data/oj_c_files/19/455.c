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
	int j,al,bl,cl;
	char c[1000]={""},a[100]={""},b[100]={""};
	char *p,*q;
	gets(c);
	gets(a);
	gets(b);
	al=strlen(a);
	bl=strlen(b);
	cl=strlen(c);
	for(p=c;p<c+cl;)
	{
		q=p;
		for(;*q!=' '&&*q!='\0';q++)
			;
		if((q-p)!=al)
		{
			for(;p<q;p++)
				printf("%c",*p);
			if(q!=c+cl)
				printf(" "),p++;
		}
		else
		{
			for(j=0,q=p;j<al;q++,j++)
				if(*q!=a[j])
					break;
			if(j==al)
			{
				if(q!=c+cl)
					printf("%s ",b);
				else
					printf("%s",b);
				p=p+al+1;
			}
			else
				for(;p<=q;p++)
					printf("%c",*p);
		}
	}
}
