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
    int m,n,i,j=0;
    char string[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    	gets(string);
    	m=strlen(string);
    	for(j=0;j<m;)
    	j++;
    		if(string[m-1]=='r'||string[m-1]=='y')
    			m=m-2;	
    		if(string[m-1]=='g')
    		    m=m-3;
    		    for(j=0;j<m;j++)
    			printf("%c",string[j]);
    			printf("\n");
    }
}