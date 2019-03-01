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
char s[50];
char w[50];
char z[200];
char a[100];
int i=0,ls,lw,k=0,t=1,m,n=0,len,ci=0;
scanf("%s %s",s,w);
ls=strlen(s);
lw=strlen(w);
for(i=0;i<lw;i++){
   if(w[i]==s[0]){
	   m=i;
	for(k=0;k<ls;k++){
		if(s[k]!=w[i]){
			t=0;
			break;
	
		}
      i++;

    }
	if(t==1){
	n=m;
	}
	
   }		
		
}
      
	if(t){
	printf("%d",n);
	}

	  


return 0;
}
