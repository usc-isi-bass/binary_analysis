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

void main()
{
    char ch1[100],ch2[100];
    unsigned int i,j,s,k=0,chang;
	gets(ch1);
    s=strlen(ch1);
	for(i=0;i<s;i++)
	{
		if (ch1[i]==' ') 
		{
		chang=i-k;
		 for (j=0;j<chang;j++)
		 {  ch2[s-chang-k+j]=ch1[k+j];
		 if (j==chang-1) ch2[s-chang-k-1]=' ';}
		k=i+1;
		}
		
	}
         chang=i-k;
		 for (j=0;j<chang;j++)
		 ch2[s-chang-k+j]=ch1[k+j];
		 
		 ch2[s]='\0';
		
    puts(ch2);
}
