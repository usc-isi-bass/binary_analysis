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
  double a;
  char b[500],c[500];
  double s=0;
  int i;
  scanf("%lf",&a);
  scanf("%s %s",b,c);
  if(strlen(b)!=strlen(c)){
	  printf("error");
	  return 0;
  }
  for(i=0;i<strlen(b);i++){
	  if(b[i]!='A'&&b[i]!='C'&&b[i]!='T'&&b[i]!='G'&&c[i]!='A'&&c[i]!='C'&&c[i]!='T'&&c[i]!='G')
		  s=1;
  }
  if(s==1){
	  printf("error");
	  return 0;
  }
  s=0;
   for(i=0;i<strlen(b);i++){
	   if(b[i]==c[i])
		   s++;
   }
   if(s/strlen(b)>a)
	   printf("yes");
   else
	   printf("no");
   return 0;
}