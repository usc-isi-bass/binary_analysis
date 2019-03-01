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
	char c[100];
	int i,t;
	for(i=0;i<100;i++)
	{scanf("%c",&c[i]);
	if(c[i-1]==' '&&c[i]==' ') i--;
	if(c[i]=='\n') break;}
	for(t=0;t<i;t++)
		printf("%c",c[t]);
	return 0;
}