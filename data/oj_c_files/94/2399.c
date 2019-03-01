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
{int n,i,j,chan,countor;
 scanf("%d",&n);
 int* num=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
    scanf("%d",num+i);
 
 for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++)
 {

     if(*(num+j)>*(num+j+1))
     {
         chan=*(num+j);
         *(num+j)=*(num+j+1);
         *(num+j+1)=chan;
     }
 }
for(i=0,countor=0;i<n;i++)
 { 
	 if(*(num+i)%2!=0)
	 countor++;
 }
 for(i=0;i<n;i++)
 { 
	 if(*(num+i)%2==0)
		 continue;
	 else
	 {  
		 countor--;
		 if(countor==0) printf("%d",*(num+i));
		 else printf("%d,",*(num+i));
	 }
 }
return 0;

}