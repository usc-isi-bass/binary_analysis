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

int fenjie(int n,int x){
	int i,t=0;       //t??? ???
	for(i=x;i<=sqrt(n);i++){ 
	if(n%i==0){  
	  t=t+1+fenjie(n/i,i); //????????  ????????
	}
	}
   return t;    //???????????0
}
int main(){
	int i,t,n;
	cin>>t;
	for(i=0;i<t;i++){ //????
	cin>>n;
	cout<< fenjie(n,2)+1<<endl;}
	return 0;
}
