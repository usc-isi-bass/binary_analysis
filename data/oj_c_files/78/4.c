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

void main ()
{
	int a=20,b=40,c=10,d=50;
	char t[4]={'z','q','s','l'};
	printf("%c %d\n%c %d\n%c %d\n%c %d",t[3],d,t[1],b,t[0],a,t[2],c);
}
