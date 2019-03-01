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
char *pi;
int i,m;
pi=(char*)malloc(sizeof(char)*101);
gets(pi);
m=strlen(pi);
for (i=0;i<m-1;i++)
{
	printf("%c",*(pi+i)+*(pi+i+1));
}
printf("%c",*(pi+m-1)+*(pi));
free(pi);

return 0;
}