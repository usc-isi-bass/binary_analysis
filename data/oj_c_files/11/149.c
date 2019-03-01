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
	int yn , mn , dn ;
	int result=0;
	scanf("%d %d %d" , &yn , &mn , &dn );
	if ( yn%4==0 && yn%100!=0 || yn%400==0 )
	{
		int day_of_month[13]={0,31,29,31,30,31,30,31,30,31,31,30,31};
		int i=1;
		while ( i < mn )
		{
			result=result+day_of_month[i];
			i++;
		}
		result=result+dn ;		
	}
	else
	{
		int day_of_month[13]={0,31,28,31,30,31,30,31,30,31,31,30,31};
	    int i=1;		
		while ( i < mn )
		{
			result=result+day_of_month[i];
			i++;
		}
		result=result+dn ;
	}
	printf ("%d" , result );	
	return 0;
}


	