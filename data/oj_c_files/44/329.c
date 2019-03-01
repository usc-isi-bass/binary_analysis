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
    int p=0,s,i;
    long int n,t;
    for(i=0;i<6;i++)
    {
    	scanf("%ld",&n);
    	if(n>0)
    	p=1;
    	else if(n<0)
    	 {p=-1;
    	 n=-n;}
    	 s=0;
    	 t=0;
    	 
    	 
    	 do
    	 {
    	 	s=n%10;
    	 	n=n/10;
    	 	
    	 	t=t*10+s;
    	 	
          }
        while(n!=0);
    if(p>0)
    printf("%ld\n",t);
    else if(p<0)
    printf("-%ld\n",t);
    else 
    printf("0");	
    }
}