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
	int i,j;
	char s[1000];
	gets(s);
    for(i=0;s[i]!='\0';i++)
	{
		
	     printf("%c",s[i]);
		 if(s[i]==' ')
		 {
			 
			 for(j=i+1;s[j]==' ';j++)
			 {
		     	i=i+1;
			 }
			
		 }
		
		
			
	}
	return 0;
}
