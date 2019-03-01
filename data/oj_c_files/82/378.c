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
	int ss[100],sz[100],n,h=0,i,sc[100]={0},e,k,c;
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   scanf("%d%d",&ss[i],&sz[i]);
	   if(ss[i]<=140&&ss[i]>=90&&sz[i]>=60&&sz[i]<=90){
		   h++;
	   }else{
		   sc[i]=h;
		   h=0;
	   }
	  
   } c=h;
   
   for(k = 1 ; k <=100; k++){
    	for(i = 0; i < 100-k; i++){
			if(sc[i] < sc[i+1]){
					e = sc[i+1];
					sc[i+1] = sc[i];
					sc[i] = e;
			}
		}
	}
   if(c<sc[0]){
	   printf("%d",sc[0]);
   }else{
	   printf("%d",c);
   }
	return 0;
}
