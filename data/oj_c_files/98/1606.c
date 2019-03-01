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
 * wordedit.cpp
 *
 *  Created on: 2013-12-7
 *      Author: tangqinyi
 */

int main(){
	char word[503][40];
	int sum = 0,n;
	cin>>n;
	for(int i = 0;i < n;i++){
            cin>>*(word+i);//??????
            }
	cout<<*(word);//??????
	sum = strlen(*word) + 1;//???????????“ ”
    for(int i = 1;i < n;i++){
    	sum = sum +strlen(*(word+i));
    if(sum  <= 80){//?????????80
    	   cout<<' ';
           sum ++;
           }
    else {
         cout<<endl;//??80??
         sum = strlen(*(word+i)) + 1;//???????
         }
    cout<<*(word+i);//?????
    }
    return 0;
}
