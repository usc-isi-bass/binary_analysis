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
	char s[1000][256];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
           scanf("%s",s[i]);
	}
	for(j=0;j<n;j++){
     	    for(i=0;s[j][i]!='\0';i++){
	         if(s[j][i]=='A'){
	                         s[j][i]='T';
			 }else if(s[j][i]=='T'){
	                         s[j][i]='A';
			 }else if(s[j][i]=='C'){
         	                        s[j][i]='G';
			 }else{
	                         s[j][i]='C';
			 }
		}
	}
	for(i=0;i<n;i++){
           printf("%s\n",s[i]);
	}
return 0;
}
