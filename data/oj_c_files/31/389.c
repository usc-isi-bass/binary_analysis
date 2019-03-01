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
    char stu[10000][100],tem[100]={'e','n','d'};
    int i,j;
	for (i=0;i<10000;i++)
	{
		gets(stu[i]);
	
		if (strcmp(stu[i],tem)==0)break;
	}
	for(j=i-1;j>=0;--j)
	printf("%s\n",stu[j]);
}