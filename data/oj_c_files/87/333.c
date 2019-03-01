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

  int a,b,c,d,e,f,sum;
  int s,m,h;
   int i=0;
   
   for(i=0;i>=0;i++){
     
	  scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
      if(a==0){
		  break;
	  }
      s=0-c;

	  if(s<0){
		  s+=60;
		  b++;
	  }
	  m=0-b;
	  if(m<0){
		  m+=60;
		  a++;
	  }
	  h=12-a;
	  h+=d;
	  m+=e;
	  s+=f;

	  sum=h*3600+m*60+s;

	  printf("%d\n",sum);
	  
	 }


	return 0;
}