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
       char s[100];
	   char a[100];
	   char b[100];
	   gets(s);
	   gets(a);
	   gets(b);

	   int ls=strlen(s);
	   int la=strlen(a);

	   int i,j;
	   int t;
	   for(i=0;i<ls;i++){
		   t=1;
		   for(j=0;j<la;j++){
			   if(a[j]==s[i+j]){
					t=1;
					continue;
			   }

			   if(a[j]!=s[i+j]){
					t=0;
					break;
			   }	
		   }

		   if(t==1){
			   if(i!=0&&s[i-1]!=' '){
					t=0;
			   }
		   }
		   
		   if(t==1){
				printf("%s",b);
				i+=la-1;
			}
		   if(t==0){
				printf("%c",s[i]);
		   }
	   }
	  

	   


	   return 0;
}
