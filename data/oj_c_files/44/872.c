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

void inv(char str[])
{
	int l,m,i;
	char c;
	l=strlen(str);
	for(i=0;i<l/2;i++)
	{
		
		if(str[i]=='-') {l++;continue;}
		c=*(str+i);
		*(str+i)=*(str+l-1-i);
		*(str+l-1-i)=c;
	}
	m=atoi(str);
	printf("%d\n",m);
}
void main()
{
	int i;
	char a[6][9];
	for(i=0;i<6;i++)
		scanf("%s",a+i);
	for(i=0;i<6;i++)
		inv(*(a+i));
}