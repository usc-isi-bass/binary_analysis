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
	char a[600];
	scanf("%s",a);
	int L;
	int t;
	L=strlen(a);
	int i,j,k,p;
	for(i=2;i<=L;i++)
	{   
		if(i%2==0)
		{
			for(j=i/2-1;j<=L-i/2;j++)
			{    t=0;
				for(k=0;k<i/2;k++)
				{
					if(a[j-k]!=a[j+k+1])
					{	t=1;
					break;}
				}
				if(t==0)
				{for(p=j-i/2+1;p<=j+i/2;p++)
						printf("%c",a[p]);
				
					printf("\n");
				}
			}
		}
	}






	return 0;
}



