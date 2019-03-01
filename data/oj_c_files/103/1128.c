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
	int i,m,sum;
	char a[1000];
	gets(a);
    for(i=0;a[i]!='\0';i++)
    {
    	if(a[i]>='a' && a[i]<='z')a[i]=a[i]-'a'+'A';
    }

    for(i=0;a[i]!='\0';i++)
    {
    	sum=0;
    	for(m=i;a[m]==a[i];m++)
    	{
    		sum++;
    	}
    	i=m-1;
    	printf("(%c,%d)",a[i],sum);
    }
}