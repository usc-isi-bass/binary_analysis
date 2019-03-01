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
	char *c;
	int n,i,s=0,p=0;
	c=(char*)malloc(30*sizeof(char));
	gets (c);
	n=strlen (c);
	for (i=0;i<n;i++)
	if (*(c+i)>=48&&*(c+i)<=57)  { s=s*10+(*(c+i)-48); p=1;}
    else if (p) {printf ("%d\n",s); s=0;p=0;}
	 if (p) printf ("%d\n",s);  
}