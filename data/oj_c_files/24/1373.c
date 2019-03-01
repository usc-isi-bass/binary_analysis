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
	  char zfc[1000];
      char ip[50][1000];	  
	  int a,b,c,max=0,min=~(1<<31);
      gets(zfc);
      int len = strlen(zfc);
      int j=0,k=0,i;
	  for(i=0;i<len+1;i++){
        if (zfc[i]!=' '&&zfc[i]!='\0'){
           ip[j][k] = zfc[i];
           k++;
		}
	    else if (zfc[i]==' '|| zfc[i]=='\0'){
           ip[j][k] = '\0';
           j++;
           k=0;
		}
	  }	  
	  for(i=0;i<j;i++){
		  a=strlen(ip[i]);
		  if(a>max){
			  b = i;
			  max=a;
		  }
          if(a<min){
			  c = i;
              min=a;
		  }
	  }
	  printf("%s\n%s\n",ip[b],ip[c]);
	  return 0;
}
