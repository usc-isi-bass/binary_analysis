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
	char str[501];
	int i,j,k,length,n,s;
	gets(str);
    length=strlen(str);
	for(i=2;i<=length;i++)
		for(j=0;j<length;j++)
		{
			k=0;
	  	    for(n=0;n<i;n++)
			{
				if(str[j+n]==str[j+i-n-1])
			     	k++;
			    if(k==i)
				{	for(s=j;s<=j+n;s++)
						printf("%c",str[s]);
						printf("\n");
				}
			}
		}
	return 0;
}