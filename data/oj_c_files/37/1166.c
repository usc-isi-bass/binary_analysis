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
  int t,i=0,l,j,k,n;
  char s[100000];
  scanf("%d",&t);
  for(i=0;i<t;i++){
     scanf("%s",s);
     l=strlen(s);
	 for(j=0;;j++){
		 n=0;
		 for(k=0;k<l;k++){
			 if(j==k) continue;
			 if(s[j]==s[k]) {
			   break;
			 }
			if(k==l-1) {
			
				printf("%c\n",s[j]);
                n++;
				break;
			}
		 }
		 if(n==1) break;
		 if(n==0){
		   if(j+1==l) printf("no\n");
		 }
	 }
  }
  
  
  return 0;
}
