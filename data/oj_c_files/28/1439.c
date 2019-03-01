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
  	char s[1000];
  	int j=0,g[300]={0},i,len;
  	gets(s);
  	len=strlen(s);
  	
  	for(i=0;i<len;i++){
		if(s[i]==' '&&s[i+1]!=' ')
		   j+=1;
	    if(s[i]!=' ')
           g[j]+=1;
	}
    for(i=0;i<300;i++){
		if(g[i+1]!=0)
		   printf("%d,",g[i]);
	    else{
		   printf("%d",g[i]);
		   break;
	    }
    }	        
               
				return 0;
	
}


