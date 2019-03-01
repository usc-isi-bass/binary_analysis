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

int main( )
{    int i,j;
char c[35],*p;
	 gets(c); //?????
	 for(p=c;*p!=0;p++)
	 { if (*p>=48&&*p<=57)           //????????
	 {  for (j=0;1;j++)
	 { if ((*(p+j))>=48&&(*(p+j)<=57))
	{ cout<<*(p+j);}
	 else {cout<<endl; break;}     //?????????????
		 }    
	 p=p+j-1;}
	 }
	return 0;}