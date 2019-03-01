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
 int a;
 char b='3';
 char c='5';
 char d='7';
 char e='n';

 scanf("%d", &a);
 if(a%3==0 && a%5==0 && a%7==0)
	 printf("%s","3 5 7");
 else if(a%3==0 && a%5==0)
	 printf("%s","3 5");
 else if(a%5==0 && a%7==0)
	 printf("%s", "5 7");
 else if(a%3==0 && a%7==0)
	 printf("%s", "3 7");
 else if(a%3==0)
	 printf("%c",b);
 else if(a%5==0)
	 printf("%c",c);
 else if(a%7==0)
	 printf("%c",d);
 else
	 printf("%c",e);
 
 return 0;

}