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
	char a[100],*p,*q,*w;
	int n,i,j,k=0; 
	gets(a);
	n=strlen(a);
	w=a;
	p=&a[n-1];
	q=p;
	for(i=0;i<n;i++)
	{
		if(*(q-i)!=' '&&(q-i)>=w) 
		{
			k++;
			p--;
		}
		else 
		{
			for(j=0;j<k;j++) 
				printf("%c",*(p+j+1));
			printf(" ");
			k=0;
			p--;
		}
        if((q-i)==w) 
           for(j=0;j<k;j++)
			   printf("%c",*(p+j+1));
	}
	return 0;
}