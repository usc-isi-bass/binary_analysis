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
	int a[20],temp,n=0,i=1,j,k;
	do{ 
		do{
			scanf("%d",&temp);
			a[i]=temp;
			i++;
		    //	printf("%d ",a[i-1]);
		}while(temp!=0 && temp!=-1);
			//printf("china");
	
		for(j=1;j<i-2;j++){	
			for(k=j+1;k<=i-2;k++){
				if((a[j]/a[k]==2 && a[j]%a[k]==0) || (a[k]/a[j]==2 && a[k]%a[j]==0)){
					n++;
					//printf("6");
				}
			}
		}
		if(temp!=-1){
		    printf("%d\n",n);
		}
		i=1;
		n=0;
	}while(temp!=-1);
	return 0;
}
