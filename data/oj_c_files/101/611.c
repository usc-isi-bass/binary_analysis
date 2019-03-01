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
	int a,b,c;
	//cout<<(a<b)<<endl;
	for(a=1;a<=3;a++)
	for(b=1;b<=3;b++)
	for(c=1;c<=3;c++){
		if(a==b || a==c || b==c)
			continue;
		else{
			if(a+(b>a)+(c==a) == b+(a>b)+(a>c) && b+(a>b)+(a>c) == c+(c>b)+(b>a)){ 
				if(a == 3){
					if(b ==2){
						cout<<"CBA"<<endl;
					}
					else{
						cout<<"BCA"<<endl;	
					}
				}
				else if(b == 3){
					if(a ==2){
						cout<<"CAB"<<endl;
					}
					else{
						cout<<"ACB"<<endl;	
					}
				}
				else{
					if(b ==2){
						cout<<"ABC"<<endl;
					}
					else{
						cout<<"BAC"<<endl;	
					}
				}
			}
		}	
		
		
	}
	cin>>a;
	return 0;
}