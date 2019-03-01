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
	char a[50],b[50];
	int i,j,n,k;
	scanf("%s %s",a,b);
	n=strlen(a);
	k=strlen(b);
	for(i=0;i<k;i++)
		if(b[i]==a[0])
		{
			for(j=1;j<n;j++)
			{
				if(b[i+j]!=a[j])
					break;
				else 
					printf("%d",i);
				    break;
			}
	     	break;
		}            
}