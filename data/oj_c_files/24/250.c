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

int main() 
{
  char s[60][60],c,d[60];
  int a[60],i,j,k,t;
  
  for(i=0;;i++){
  scanf("%s",s[i]);
	  a[i]=strlen(s[i]);
	  scanf("%c",&c);
	  if(c=='\n')
		  break;
  }
  
  j=i;
    for(i=j;i>0;i--){
		for(k=0;k<i;k++){
			if(a[k]>a[k+1]){
               strcpy(d,s[k]);
          strcpy(s[k],s[k+1]);
          strcpy(s[k+1],d);
		  t=a[k];
		  a[k]=a[k+1];
          a[k+1]=t;
			}
		}
	}
      printf("%s\n%s",s[j],s[0]);
	  
 

return 0;
}
