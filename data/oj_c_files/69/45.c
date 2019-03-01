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

int a[200];
int b[200];
int out[200]; 
void init(){
     for(int i=0;i<200;i++){
             a[i]=0;
             b[i]=0;
             out[i]=0;
     }
}        
void load(){
     char temp[201];
     cin>>temp;
     int begin = 200 - strlen(temp);
     for(int i=0;i<strlen(temp);i++){
             a[begin+i]=temp[i]-'0';
     }
     cin>>temp;
     begin = 200 - strlen(temp);
     for(int i=0;i<strlen(temp);i++){
             b[begin+i]=temp[i]-'0';
     }
}
void add(){
     int carry = 0;
	 int i=0;
     for(i=199;i>=0;i--){
             out[i] = a[i] + b[i] + carry;
             if(out[i]>=10){
				 out[i]-=10;
                 carry = 1;
             }
			 else
				 carry =0;
	 }
     for(i=0;i<199;i++){
		 if(out[i]!=0)
         break;
	 }
     for(;i<200;i++){
		 cout<<out[i];
	 }
	 cout<<endl;
}
int main(){
    init();
    load();
    add();
    return 0;
}