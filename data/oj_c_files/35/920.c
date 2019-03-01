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
	int i,j,k,l,n,m,yao[8][8],lie=0,han=0,iu=0;
	scanf("%d,%d\n",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&yao[i][j]);
		}
	}
    for(i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
		{   han=0;lie=0;
            for(k=0;k<m;k++)
			{  
			   
			   if(yao[i][j]>yao[i][k])
			     han++;
			   else
				   han=han;
			   
			}
            for(l=0;l<n;l++)
			{
              if(yao[i][j]<yao[l][j])
				  lie++;
              else
				   lie=lie;
			}
			if(lie==(n-1) && han==(m-1))
				printf("%d+%d",i,j);
			else
				iu++;
		}
	}
	if(iu==n*m)
		printf("No\n");
	return 0;
}