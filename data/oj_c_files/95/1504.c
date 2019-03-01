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

int main ()
{
	char a[80],b[80];
	gets(a);
	gets(b);
	int i,j,k,n;
	int len=strlen(a);
	for(i=0;i<len;i++)
	{
        if('a'<=a[i]&&a[i]<='z')
			j=a[i]-'a';
		else if ('A'<=a[i]&&a[i]<='Z')
			j=a[i]-'A';
		else j=0;
        if('a'<=b[i]&&b[i]<='z')
			k=b[i]-'a';
		else if ('A'<=b[i]&&b[i]<='Z')
			k=b[i]-'A';
		else k=0;
		if(j>k)
		{	
			printf(">");
		    n=0;
			break;
		}
		else if(j<k)
		{
			printf("<");
			n=0;
			break;
		}
		else n++;
	}
	if(n!=0)
		printf("=");
	return 0;
}
