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
	char str[100][15],substr[100][4],c,max=0;
	int i,j,k;
    i=0;   
    while(scanf("%s %s",str[i],substr[i])!=EOF)
	{
		for(j=0;(c=str[i][j])!='\0';j++)
		    if(max<c)
			{max=c;k=j;}
	    for(j=0;j<k+1;j++)
		    printf("%c",str[i][j]);
	    printf("%c%c%c",substr[i][0],substr[i][1],substr[i][2]);
	    for(j=k+1;(c=str[i][j])!='\0';j++)
		printf("%c",str[i][j]);
	    printf("\n");
		i=i++;
		max=0;
	}
	
}
