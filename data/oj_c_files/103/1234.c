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
	char a[1002];
	gets(a);
	int suma,i;
    suma=strlen(a);
    for(i=0;i<suma;i++)
    {
    	if(a[i]>='a' && a[i]<='z')
    	{
    		a[i]=a[i]-'a'+'A';
    	}
    }
    char b ;
    b=a[0];
    int c=0;
    for(i=0;i<suma;i++)
    {
    	if(a[i]==b)
    	{
    		c++;
    	} 
    	else
    	{
    		printf("(%c,%d)",b,c);
    		b=a[i];
    		c=1;
    	}
    }
    printf("(%c,%d)",b,c);
} 