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
 char str[200];
 int n,i,j,k;
 gets(str);
 for(i=0;str[i]!='\0';i++){
     if(str[i]==' '&&str[i+1]==' '){
		 k=i+1;
		 while(str[k]==' ') {
		    k++;
		 }
		 for(j=i+1;str[j]!='\0';j++){
		     str[j]=str[j+k-i-1];
		 }
	 }
 }
 printf("%s",str);
return 0;
}