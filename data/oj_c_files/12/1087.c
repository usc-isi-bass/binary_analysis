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
	 int i,j,a[16],b[100],changdu=0,panduan=1,geshu=0;
	 while(1){
		 for(i=0;i<16;i++){
			 scanf("%d",&a[i]);
			 changdu=i;
			 if(a[i]==-1){
				 panduan=0;
				 break;
			 }
			 if(a[i]==0){
				 break;
			 }
		 }


		 if(panduan==0)
			 break;
		 


		 geshu=0;
		 
		 for(i=0;i<changdu;i++){	 
			 for(j=0;j<changdu;j++){
				 if(a[i]==a[j]*2){
					 geshu++;
				 }			 
			 }
		 }		 

		 printf("%d\n",geshu);
	 }
 

   return 0;
}
