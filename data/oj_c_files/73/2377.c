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
 * homework1108.cpp
 *
 *  Created on: 2012-11-7
 *      Author: wangyinzhi
 */

int main(){
   int a[5][5],i,j,k,s,t,z;
   for(i=0;i<=4;i++){
	   for(j=0;j<=4;j++){
		   cin>>a[i][j];
	   }
   }
   z=0;
   for (i=0;i<=4;i++){
	   for(j=0;j<=4;j++){
		   s=0;t=0;
		   for(k=0;k<=4;k++){
		   if(a[i][j]>=a[i][k]){
			   s=s+1;//????????????
		   }
		   if(a[i][j]<=a[k][j]){
			   t=t+1;//???????????
		   }
		   }
		   if((s==5)&&(t==5)){//??????????
			   cout<<i+1<<" "<<j+1<<" "<<a[i][j]<<endl;
			   z=1;
		   }
	   }
   }
   if(z==0){
	   cout<<"not found"<<endl;//?????????????notfound
   }
    return 0;
}