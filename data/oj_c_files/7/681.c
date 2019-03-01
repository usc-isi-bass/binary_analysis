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

int main(){
   char s[257],a[257],b[257];
   int n,m;
   int i,j,k=0;
   gets(s);
   scanf("%s%s",a,b);
   n=strlen(s);
   m=strlen(a);
   for(i=0;i<n;i++)
   {
	   if(s[i]==a[0]&&s[i+m-1]==a[m-1]){
		   for(j=i;j<i+m;j++)
		   {
			   if(s[j]==a[j-i])  
			   {
				   k++;
			   }
		   }
		   
		   if(k==m)
		   {
			 	   printf("%s",b);
				   i+=m-1;
		   }else
		   {
			   printf("%c",s[i]);
		   }
		 
		}else
	  {
			printf("%c",s[i]);
	}
   }
   printf("\n");


  
   return 0;
}