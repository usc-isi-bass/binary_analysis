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
	 int sushu[10000],i,n,j,s=0,flag=0,m=0;
	 for(i=2;i<10000;i++){
		 flag=0;
		 if(i==2){
            sushu[s]=i;
			s++;
		 }
		 else{
			 for(j=2;j<i;j++){
				 if(i%j==0){
					 flag=1;
					 break;
				 }
			 }
			 if(flag==0){
			 sushu[s]=i;
				 s++;
			 }
		 }
	 }
 
	 scanf("%d",&n);
	 for(i=0;sushu[i+1]<=n;i++){
		if(sushu[i+1]-sushu[i]==2){
			printf("%d %d\n",sushu[i],sushu[i+1]);
            m=1;
		}
	}
	 if(m==0){
		 printf("empty");
	 }
return 0;
}
