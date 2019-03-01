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
 	int i,j,k,d,n,t;
 	char a[100001]; 
 	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    t=0; 
	 	scanf("%s",a); 
		for(j=0;j<strlen(a);j++)
		{
		    d=0; 
		 	for(k=0;k<strlen(a);k++)
			{
			 	if(a[k]==a[j])
                d++;
			}
			if(d==1)
			{ 
			    printf("%c\n",a[j]);
				t=1;
				break; 
			}
		}
		if(t==0) 
	    printf("no"); 
    } 
return 0;
} 
