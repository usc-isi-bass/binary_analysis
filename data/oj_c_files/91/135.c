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
	char str[101], fri[101]={'\0'}, *pca, *pcb;
	int n, i;
	gets(str);
	n=strlen(str);
	if(n>=2 && n<=100)
	{
		for(pca=str, pcb=str+1, i=0; pca<(str+n-1); pca++, pcb++, i++)
			fri[i]=*pca + *pcb;
		fri[n-1]=str[0]+str[n-1];
		printf("%s\n",fri);
	}
}