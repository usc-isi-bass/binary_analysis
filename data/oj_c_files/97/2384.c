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
 * ?????????
 *
 * ??: 2011-11-6
 * ??????
 */
int main(){
	int n,a=0,b=0,c=0,d=0,e=0,f=0;     //?????????100??50??20??10??5??1??????
	cin>>n;                            //?????
	if(n>=100){                        //???????100
		a=n/100;                       //a????????100??
		n=n-a*100;                     //???????
		}
	if(n>=50){                         //????????50
		b=n/50;                        //b?????????50??
		n=n-b*50;                      //???????
	}
	if(n>=20){                         //????????20
		c=n/20;                        //c?????????20??
		n=n-c*20;                      //???????
	}
	if(n>=10){                         //????????10
		d=n/10;                        //d?????????10??
 		n=n-d*10;                      //???????
	} 
	if(n>=5){                          //????????5
		e=n/5;                         //e?????????5??
		n=n-e*5;                       //???????
	}
	f=n;                               //f????????
	cout<<a<<endl;                     
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	cout<<f<<endl;                      //????????
	return 0;
}
