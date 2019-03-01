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
	char *p;
	int i,j,k,l;
	p=(char*)malloc(50*sizeof(char));
	gets(p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(*(p+i)==' ')
		{   
		  	printf("%c",*(p+i)); 
		   	for(k=i+1;k<l;k++)
            {
			   if(*(p+k)!=' ')  {i=k-1;break;}
            }
		} 
		
 	    else printf("%c",*(p+i));
       
  	 }
        
    free(p);
}
				
     