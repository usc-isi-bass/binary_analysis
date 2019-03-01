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
	char a[100];
	int i,j,n,word=0;
	gets(a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!=' ')word++;
        if(a[i]==' ')
	    {
			for(j=0;j<word;j++)
				printf("%c",a[i+j+1]);
			word=0;
			if(i!=0)printf(" ");
	    }
		if(i==0)
			for(j=0;j<word;j++)
				printf("%c",a[j]);
	}
}