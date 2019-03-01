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
 *      Author: sony
 */

int main(){
	char word[503][40];
	int sum = 0,n;
	cin>>n;
	for(int i = 0;i < n;i++){
            cin>>word[i];
            }
	cout<<word[0];
	sum = strlen(word[0]) + 1;
    for(int i = 1;i < n;i++){
    	sum = sum +strlen(word[i]);
    if(sum  <= 80){
    	   cout<<' ';
           sum ++;
           }
    else {
         cout<<endl;
         sum = strlen(word[i]) + 1;
         }
    cout<<word[i];
    }
    return 0;
}
