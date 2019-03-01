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
	char str[300]={' '},a[300]={' '};
	int j,i,k;
	gets(str);
	k=0;
	
	for(i=0;i<200;i++)
	{   
		
		for(j=k;j<200;j++)
		{
			if(str[j+1]!=' '||str[j]!=' ')
			{
				a[i]=str[j];
			    k=j+1;
			    break;
			}
			else;
		}
	}
    puts(a);
   
	return 0;

   

}