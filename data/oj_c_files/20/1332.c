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
	int i=0,j,k,n,x,y,z=0;
	char str[100][12],substr[100][5];
    while(scanf("%s%s",&str[i],&substr[i])!=EOF)
	{
		n=strlen(str[i]);
		for(j=0;j<n;j++)
		{
			z=0;
			for(k=0;k<n;k++)
			{
				if(str[i][j]>=str[i][k])z++;
			}
				if(z==n)break;
				
		}
	    for(y=0;y<=j;y++)printf("%c",str[i][y]);
	    printf("%s",substr[i]);
		for(y=j+1;y<n;y++)printf("%c",str[i][y]);
	    printf("\n");
	    
	
	
		i++;
	}






}