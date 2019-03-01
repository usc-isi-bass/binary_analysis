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
    
	char s[100];
	for(;;)
	{
		gets(s);
		int i,j,k=0,m=0,x[15],n=0;
		if(s[0]=='-'&&s[1]=='1')
			break;
		else
		{
			for(i=0;;i++)
			{
				if(s[i]=='0')
					break;
				else
				{
					if('1'<=s[i]&&s[i]<='9')
					{
						j=s[i]-'0';
						k=k*10+j;
					
					}
					else
					{
						x[m]=k;	
						m++;
						k=0;
					}

				}
			}
		}
		for(i=0;i<m;i++)
			for(j=i+1;j<m;j++)
			{
				if((x[i]/x[j]==2&&x[i]%x[j]==0)||(x[j]/x[i]==2&&x[j]%x[i]==0))
				{	n++;}
			}
			printf("%d\n",n);
	}
	return 0;
}
