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
	char zfc[50];
	int a,b,c;
	int i,j,k;
	j=0;
		while(scanf("%s", zfc)!=EOF) 
		{
		if(j!=0)
		{printf(",");}
		printf("%d",strlen(zfc));
		j++;
		}
		
		
			
	
	return 0;
}




