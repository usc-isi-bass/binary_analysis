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
 * 1110.cpp
 *
 *  Created on: 2012-11-10
 *      Author: wangyinzhi
 */


int f(int x){
	 if(x==1)  return 1;
	 if(x%2==0){
		 cout<<x<<"/2="<<x/2<<endl;
		 return f(x/2);//????????
	 }
     if (x%2==1){
    	 cout<<x<<"*3+1="<<3*x+1<<endl;
    	 return f(3*x+1);//????????
     }
 }

 int main(){
     int x;
	 cin>>x;
	 f(x);//??
	 cout<<"End"<<endl;//??
	 return 0;
 }
