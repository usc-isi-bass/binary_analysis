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
 * ?????.cpp
 *
 *  Created on: 2011-11-6
 *      Author: ???
 */

int main(){
	int total,counter=0;//total???????counter??????????
	cin>>total;
	while(total>=100){//???????100????100?????????100????+1
		total=total-100;
		counter++;
	}
	cout<<counter<<endl;//?????
	counter=0;          //??????????
	while(total>=50){
		total=total-50;
		counter++;
	}
	cout<<counter<<endl;
	counter=0;
		while(total>=20){
			total=total-20;
			counter++;
		}
		cout<<counter<<endl;
		counter=0;
			while(total>=10){
				total=total-10;
				counter++;
			}
			cout<<counter<<endl;
			counter=0;
				while(total>=5){
					total=total-5;
					counter++;
				}
				cout<<counter<<endl;
				cout<<total<<endl;//????1??????????????
	return 0;
}