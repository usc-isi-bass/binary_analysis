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
    int l=0,max=0,min=100,i=0,k;
    char m[1000];
    int max1, min1;
   
    max1=0;
    min1=0;
    gets(m);
    k=strlen(m);
    
    for (i=0;i<k;i++)
    {
    	    l++;
    		if ((m[i+1]==' ')||(i==k-1))
    		{
    			if (l>max)
    		    {
    		    	max=l;
    		    	max1=i-l+1;
    		    }
    		    if (l<min)
    		    {
    		    	min=l;
    		    	min1=i-l+1;
    		    }
    			l=0;
    			i++;
    		}    		
    }
    for(i=max1;i<max1+max;i++)
   {
   	printf("%c",m[i]);
   }
   printf("\n");
   for(i=min1;i<min1+min;i++)
   {
   	printf("%c",m[i]);
   }
}
