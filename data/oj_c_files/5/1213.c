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


int main (){ 
	int i,q;
    char a[501],b[501],c[10];
	double n,t=0;
	gets (c);
	n = atof(c);
	gets (a);
	gets (b);
	q=strlen(a);
	if (strlen(a)!=strlen(b)){
printf("error");
return 0;
	}
else {
   for (i=0;a[i]!='\0';i=i+1){
	   if (a[i]>97||b[i]>97){

		   printf("error");
	   return 0;
	   }
	     else {
           if (a[i]==b[i])
              t=t+1;
	   
          
          
		 }
   }
}
	      



          if (n<0)
                printf ("yes");
          else{
			  if (t/(q*1.00)>n)
                printf ("yes");
              else 
                printf ("no");
		  }

return 0;
}
