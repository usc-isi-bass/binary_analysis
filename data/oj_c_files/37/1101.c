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
	int r,i,j,n,k,t=0,q;
	char ch[10000]={0};
	int a=0;
	char c,c1[1];
	scanf("%d",&n);
	for(q=0;q<=n-1;q++)
	{
		scanf("%s",ch);
        r=strlen(ch);
		for(i=0;i<=r-2;i++)
		{
			c=ch[i];
			for(j=0;j<=r-1;j++)
			{
				if(ch[j]==c)
				{
					a++;
				}
			}
			if(a==1)
			{
				printf("%c\n",c);
				t++;
				a=0;
				break;
			}
			a=0;
		}

		
	    if(t==0) {printf("no");}
		 t=0;
		
	}
	return 0;
}