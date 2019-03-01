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
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		int m[20],b,c,d,e;
		scanf("%d",&b);
		if(b==0){
			printf("60\n");
		}
		else{
                  for(c=0;c<b;c++){
			         scanf("%d",m+c);
                                   }
                  if(m[b-1]+3*b<=60){
					  printf("%d\n",60-3*b);
				                    }
				  else{
					  if(m[b-1]+3*(b-1)>=57&&m[b-1]+3*(b-1)<=60){
						  printf("%d\n",m[b-1]);
					  }
					  else{
						  d=1;
      
                  while(d<=b){
					  if(m[d-1]+3*(d-1)>60){
						  if(m[d-2]+3*(d-2)<=57){
						  printf("%d\n",63-3*d);break;
					  }
					  else{
						  printf("%d\n",m[d-2]);break;
					  }
				  }
					  d++;
				  }
					  }
				  }
		}
	}
}
