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
	int i,l,k=0,j;
	char *p,*a;
	a=calloc(10000,sizeof(char));
	p=a;
	gets(p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(*(p+i)==' '&&k==0) {k=1;}
		else if(*(p+i)==' '&&k==1) {for (j=i;j<l-1;j++) *(p+j)=*(p+j+1);*(p+l-1)=0;i--;l--;}
		  else k=0;
	}
	puts(p);
}