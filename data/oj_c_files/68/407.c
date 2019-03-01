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

main()
{ unsigned n,i,k,m,t;
scanf("%d",&n);          
for(i=6;i<=n;i=i+2)
{ for(k=3;k<=i/2;k=k+2)  
 {  m=i-k;
    for(t=3;t<=sqrt(k);t=t+2)
	 if(k%t==0)
		 break;
 if(t>sqrt(k))                      
 {	 for(t=3;t<=sqrt(m);t=t+2)    
	if(m%t==0)
	  break;
	if(t>sqrt(m))
	{   printf("%d=%d+%d\n",i,k,m);
	break;
	}
 }
 }

}



}