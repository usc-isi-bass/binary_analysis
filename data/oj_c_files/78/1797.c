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

/*
 * exercise1015.cpp
 *
 *  Created on: 2012-10-15
 *      Author: wangyinzhi
 */


int main(){
   int a,b,c,d;
   int k[5],i,j,p;
   for(a=1;a<=5;++a){
	   for(b=1;b<=5;++b){
		   for(c=1;c<=5;++c){
			   for(d=1;d<=5;++d){
				   if ((a+b==c+d)&&(a+d>c+b)&&(a+c<b)){//?????abcd????zqsl?????????
					   	k[1]=a;
					   	k[2]=b;
					   	k[3]=c;
					   	k[4]=d;//????
					   	for (j=1;j<=3;j++){
					   		for(i=1;i<=4-j;i++){
					   			if(k[i]<k[i+1]){
					   				p=k[i];
					   				k[i]=k[i+1];
					   				k[i+1]=p;//???????????
					   			}
					   		}
					   	}
					   	for(i=1;i<=4;i++){
					        if (k[i]==a)
					        	cout<<"z"<<" "<<k[i]*10<<endl;
					        if (k[i]==b)
					        	cout<<"q"<<" "<<k[i]*10<<endl;
					        if (k[i]==c)
					        	cout<<"s"<<" "<<k[i]*10<<endl;
					        if (k[i]==d)
					        	cout<<"l"<<" "<<k[i]*10<<endl;//???????????????

					   	}

				       }

				   }

			   }
		   }
	   }

	return 0;
}