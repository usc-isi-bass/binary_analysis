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
   int n,e;
   int s[50000][2];
   scanf("%d",&n);
   for(int i=0;i<=n-1;i++){
	   scanf("%d%d",&s[i][0],&s[i][1]);
   }
   for(int k=1;k<=n;k++){
	   for(int i=0;i<=n-k;i++){
		   if(s[i+1][0]>=s[i][0]){
			   e=s[i+1][0];
			   s[i+1][0]=s[i][0];
			   s[i][0]=e;
			   e=s[i+1][1];
			   s[i+1][1]=s[i][1];
			   s[i][1]=e;
		   }
	   }
   }
   for(int a=n-1;a>=1;a--){
	   if(s[a-1][0]>s[a][1]){
		   printf("no");
		   break;
	   }else{
		   s[a-1][0]=s[a][0];
		   if(s[a][1]>s[a-1][1]){
			   s[a-1][1]=s[a][1];
		   }


	   }
	   if(a==1){printf("%d %d",s[0][0],s[0][1]);}
   }

 return 0;}