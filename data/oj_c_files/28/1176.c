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
	int i,s=0,k=1,flag=0;
	char str[10000];
	gets(str);
	for (i=0;i<=strlen(str)-1;i++)
	{
		if (str[i]!=' ') {s++;flag=0;}
		if (str[i]==' ' && flag==0) {printf("%d,",s);s=0;flag=1;}
	}
	printf("%d",s);
}