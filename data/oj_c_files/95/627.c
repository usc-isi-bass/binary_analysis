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

char change(char a)
{
	if(a>='a'&&a<='z')
		a=a-'a'+'A';
	return a;
}
int main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    int a1=strlen(a);
    int a2=strlen(b);
    int i=0;
    while(i<a1&&i<a2)
    {
    	a[i]=change(a[i]);
    	b[i]=change(b[i]);
    	if(a[i]<b[i])
    	{
    		printf("<\n");
    		break;
    	}
    	if(a[i]>b[i])
    	{
    		printf(">\n");
    		break;
    	}
    	i++;
    }
    if(i==a1&&i!=a2)    		printf("<\n");
    if(i==a2&&i!=a1)    		printf(">\n");
    if(i==a1&&i==a2)     		printf("=\n");
    return 0;
}