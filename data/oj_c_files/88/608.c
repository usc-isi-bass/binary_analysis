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
 * tiqushuzi.cpp
 *???????
 *  Created on: 2012-12-24
 *      Author: ??
 */

int main(){
	char str[50],*p=str;//?????????
	int i=0;
	gets(p);//??
	for(i=0;*(p+i)!='\0';i++){
		if(*(p+i)<48||*(p+i)>57)
			continue;//????
		if(*(p+i+1)<48||*(p+i+1)>57)
			cout<<*(p+i)<<endl;//?????????
		else cout<<*(p+i);//????
	}
	return 0;
}
