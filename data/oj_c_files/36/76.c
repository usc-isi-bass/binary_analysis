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
	char a[100]={0},b[100]={0};
	int i,j,ya,yb,num=0,count=0;
	
    
		scanf("%s",a);
		scanf("%s",&b);
    ya=strlen(a);
	yb=strlen(b);

	if(ya==yb)
	{
	
	 for(i=0;i<ya;i++)
	 {
		 
		 for(j=0;j<yb;j++)
		 {
			 if(a[i]==b[j])
			 {
				 count=1;

			     break;
			 }
			 
		 }
		 num=num+count;
	 }
	 if(num==ya)
		 printf("YES");
		 else printf("NO");
	}
	else
		printf("NO");
}

		 