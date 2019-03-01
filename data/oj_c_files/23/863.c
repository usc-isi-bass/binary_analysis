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
	int j=0,k=0;
	char a,b[50][15]={'\0'};
	while((a=getchar())!='\n')
	{
		if(a!=' ') b[j][k++]=a;
		else{ b[j][++k]='\0'; j++; k=0; }
	}
	for(k=j;k>=0;k--) { printf("%s",b[k]); if(k!=0) putchar(' '); }
}

