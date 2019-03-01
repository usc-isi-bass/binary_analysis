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
{  char a[50],b[50];
    int i,k,j,len;
   scanf("%s%s",a,b);
   len=strlen(a);
   for(k=0;k<50;k++){
	   if(b[k]==a[0]){
		   for(j=k+1;j<=k+1+len;j++){
			   for(i=0;i<len;i++){
				   
				   if(b[j]==a[i])
				   {
			   printf("%d\n",k);
			   break;
			   }
			   }break;
		   }break;
	   }
   
   }

	return 0;}
