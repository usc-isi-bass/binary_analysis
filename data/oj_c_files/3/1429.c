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
int n,y,sz[1000],x;

scanf("%d",&n);
scanf("%d",&y);

for(int j=0;j<n;j++){

   scanf("%d",&sz[j]);
}
 

for(int k=0;k<=n-1;k++){

	for(int i=0;i<n;i++){
	   
		if(sz[k]+sz[i]==y){
		
		    x=1;
		
		break;
		}
		
		if((i==n-1)&&(sz[k]+sz[i]!=y)){
		   x=0;
		
		}
	
	}

                     
	if(x==1){
	printf("yes");
	
	break;
	}

    if((k==n-1)&&(x==0)){
	printf("no");
	
	
	}



}













return 0;

}