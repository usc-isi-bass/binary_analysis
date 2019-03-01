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
 * ????.cpp
 *
 *  Created on: 2011-12-30
 *      Author: ???
 */

int main(){
	int num;cin>>num;
	while(num>0){
		num--;
		int badtimes,total=60,i;
		cin>>badtimes;
		if(badtimes==0)cout<<60<<endl;
		else{
			while(badtimes>0){
				badtimes--;
				cin>>i;
				if(total<i)continue;
				else if(total<i+3)total=i;
				else total-=3;
			}
			cout<<total<<endl;
		}
	}
	return 0;
}
