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

void f(char str[15],char substr[4]);
void main()
{
	char str[15],substr[4];
	while (scanf("%s%s",str,substr)!=EOF) 
	{
	f(str,substr);
	}
}
void f(char str[15],char substr[4])
{
	int i,j,k,l;
	char a;
	l=strlen(str);
	a=str[0];
	for(i=1;i<l;i++)
	   if(str[i]>a) a=str[i];
	for(i=0;i<l;i++)
	   if(str[i]==a) break;
	for(j=l+3;j>i+3;j--) str[j]=str[j-3];
	for(j=i+1,k=0;k<3;j++,k++) str[j]=substr[k];
	printf("%s\n",str);
}