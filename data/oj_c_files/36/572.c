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
	int i,j,n,m;
	char a[100],b[100],c[100];
	
    scanf("%s%s",a,b);

	n=strlen(a);
     m=strlen(b);
      if(n!=m)
         printf("NO");
     else 
 {
	for(i=0;i<=n;i++)
	{
	
		for(j=0;j<=n;j++)
		{
			if(a[i]==b[j])
			   
				
			{c[i]=b[j];
			b[j]='\0';
                   
				 
				   break;}
				 
		}
	}
		
			
			if(strcmp(a,c)==0)
				printf("YES");
			else 
				printf("NO");
	 }
}
