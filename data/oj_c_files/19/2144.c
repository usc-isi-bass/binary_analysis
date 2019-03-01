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
   char s[101],str[200][20],rep[20],sub[20];
   int i,sum=0,a=0,b=0,max=0,min=0;
   gets(s);
   gets(sub);
   gets(rep);
   for(i=0;s[i]!='\0';i++){
		if(s[i]==' '){
			str[a][b]='\0';
			a++;
			b=0;
		    sum++;
		}
		else{
			str[a][b]=s[i];
             b++;
		}
	} 

	str[a][b]='\0';
		for(a=0;a<=sum;a++){
			if(strcmp(str[a],sub)==0){
			   strcpy(str[a],rep);
			}
			else{
			   continue;
			}
		}
		for(a=0;a<sum;a++){
		    printf("%s ",str[a]);
		}
	    printf("%s",str[sum]);
return 0;
}
