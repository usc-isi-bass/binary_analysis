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

int mycompare(const void *c1,const void *c2)
{
	char *p1=(char*)c1,*p2=(char*)c2;
	return (*p1-*p2);
}
int main()
{
	char a[NUM]={0},b[NUM]={0};
	scanf("%s%s",a,b);
	qsort(a,strlen(a),sizeof(char),mycompare);
	qsort(b,strlen(b),sizeof(char),mycompare);
	if(strcmp(a,b)!=0)
		printf("NO");
	else	
		printf("YES");
	return 0;
}