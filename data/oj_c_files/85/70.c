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
	int n,i;
	int a,g;
	
	int j;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		a=0;
				 g=0;
		char s[21];
		scanf("%s",s);
			for(j=0;s[j]!='\0';j++)

			{
				 
				if(s[0]>=65&&s[0]<=90||s[0]>=97&&s[0]<=122||s[0]==95)
					a=a+1;
				    g++;
                    if(s[j]>=65&&s[j]<=90||s[j]>=97&&s[j]<=122||s[j]==95||s[j]>=48&&s[j]<=57)
					a=a+1;
				    g++;

			}
			if(a==g)
				printf("yes\n");
			else
				printf("no\n");
	}

                    
	return 0;
}

