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



int main(int argc, char* argv[])
{
     char  s[50],w[50];
     int i,j; 
	 scanf("%s %s",s,w);
     
	 for(i=0;w[i]!='\0';i++){
		 if(w[i]==s[0]){
			 
			 int n=0;
			 
			 for(j=0;s[j]!='\0';j++){
				 if(s[j]!=w[i+j])
				 {n++;break;}
			 }
				 if(n==0)
				 {	 printf("%d",i);break;}
			 }
		 }

	return 0;
}

