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
	char a[50],b[50];
	scanf("%s%s",a,b);
	int m,n,i,j,account;
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(a[0]==b[i])
		
		{   account=i;
			for(j=1,i;j<m,i<n;j++,i++)
			{
				if(a[j]!=b[i+1])
				{
					break;
				}
			    
			}
if(j=(m-1))
	
	 printf("%d\n",account);
			
		}
	}
		
	
	return 0;
}
