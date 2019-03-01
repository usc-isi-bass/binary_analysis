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
	int i=0,j;
	char (*p)[100];char a[100][100];
	char *daitihuan;
	char *tihuanwei;
	p=a;
	while (scanf("%s",p+i)!=EOF)
		i++;
	i--;
	daitihuan=(char *)malloc(10000*sizeof(char));
	tihuanwei=(char *)malloc(10000*sizeof(char));
	tihuanwei=p+i;
	daitihuan=p+i-1;
	for(j=0;j<i-1;j++)
		if(strcmp(p+j,daitihuan)==0)strcpy(p+j,tihuanwei);
		for(j=0;j<i-1;j++)
			printf("%s%s",p+j,j==i-2?"":" ");
}