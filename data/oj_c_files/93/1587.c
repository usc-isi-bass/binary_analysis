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
	int a,x,y,z;
	scanf("%d",&a);
	x=a%3;
	y=a%5;
	z=a%7;
	if(x+y+z==0)
	printf("%d %d %d",3,5,7);
    else  if(z!=0 && x==0 && y==0) 	   
	  printf("%d %d",3,5) ; 
    else if(x!=0 && y==0 && z==0) 	   
	  printf("%d %d",5,7) ; 
    else if(y!=0 && x==0 && z==0) 	   
	  printf("%d %d",3,7) ; 
    else if(z!=0 && x!=0 && y!=0) 	   
	  printf("n") ;   
	else if(x==0 && z!=0 && y!=0) 	   
	  printf("%d",3 ) ;
    else  if(y==0 && z!=0 && x!=0) 	   
	  printf("%d", 5) ;
     else if(z==0 && x!=0 && y!=0) 	   
	 printf("%d",7) ;
}