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




int main() {
	char str[500]={'\0'},b[500]={'\0'};
	char a[500]={'\0'};
	int c,len,j,i,k,p;
	gets(a);
	c=strlen(a);
	for(len=2;len<=c;len++){
		//??? 
		for(k=0;k<=c-len;k++){
		//?str?? 
		     for(j=k,p=0;j<=len-1+k;j++,p++){
			     str[p]=a[j];
	 	        }
		//????b; 
		     for(i=0;i<len;i++){
		         b[i]=str[len-1-i];
	         }
	    //?????? 
	          if(strcmp(str,b)==0){
		         printf("%s\n",str);
	    }
	}
	
	    
		
	}
	
	
	
	return 0;
}