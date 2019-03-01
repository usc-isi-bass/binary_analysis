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
	int n,i,j,str[500][500],len1=0,len2=0,t1,t2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	   for(j=0;j<n;j++)
				scanf("%d",&str[i][j]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(str[i][j]==0)
				{
					t1=i;
					t2=j;
					while(str[t1++][t2]==0)
						len1++;
					while(str[t1-2][t2++]==0)
						len2++;
					printf("%d\n",(len1-2)*(len2-2));
			     	break;
				}
			}
	        if(j<n) break;
		}

	return 0;
}