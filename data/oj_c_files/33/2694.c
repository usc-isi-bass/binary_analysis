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
	int n;
	scanf("%d",&n);
	char zfc[1000];
gets(zfc);
	for(int j=0;j<n;j++)
	{
	   gets(zfc);
    	for(int i=0;;i++)
	{
		if(zfc[i]=='A')
		{
			printf("T");
			continue;
		}
        if(zfc[i]=='T')
		{
			printf("A");
			continue;
		}
		if(zfc[i]=='C')
		{
			printf("G");
			continue;
		}
		if(zfc[i]=='G')
		{
			printf("C");
			continue;
		}
		
        if(zfc[i]=='\0')
		{
			printf("\n");
        	break;
		}
	}
	}
	return 0;
}
	
	
