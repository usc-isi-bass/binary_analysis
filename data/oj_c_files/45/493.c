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
	int i,j,n,l,k;
	char s[100];char a[100];
		scanf("%s%s",a,s);
	n=strlen(s);l=strlen(a);
    for(j=0;j<n;j++)
{	
                   if(s[j]==a[0])
	         { k=j;
		printf("%d\n",k);
	          break;}
	}
		
	
	}
