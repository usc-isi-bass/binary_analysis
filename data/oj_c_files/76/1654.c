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

main() 
{ 
int s[10000], e[10000], i,c=0,n,m[10000],min,max;
for(int d=0;d<10000;d++){
	m[d]=0;
}
scanf("%d", &n);
for(int q=0;q<n;q++){
     scanf("%d%d", &s[q],&e[q]);
	 	for(i=s[q];i<e[q];i++){
		 m[i]=1;
	 }
}
min=s[0];
max=e[0];
for(int b=1;b<n;b++){
     	if(s[b]<min){
  		   min=s[b];
		}
       	if(e[b]>max){
           max=e[b];
		}
}
 for(i=min; i<max+1; i++) {
			 c=c+m[i];
             }
		 if(c==max-min){
          printf("%d %d", min,max); 
	 }
		 else{
			 printf("no");
		 }
return 0;
}