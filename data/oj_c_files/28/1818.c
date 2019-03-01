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
    int n,s=0,i,m;
    char a[A];
    gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		m=0;
		if(a[i]==' ') continue;
		else                                 
		{
			if(s!=0) printf(",");
			for(;i<n;i++)
			{
			
			
				if(a[i]==' ') 	{printf("%d",m);s=1;break;}  
				if(i==n-1) {printf("%d",m+1);s=1;break;}  
				m++;   
			}
		}
	}
	return 0;
}