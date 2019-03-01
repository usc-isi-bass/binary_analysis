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
 * qinpengzifu.cpp
 *?????????
 *  Created on: 2012-12-24
 *      Author: ??
 */

int main(){
	char c,str[150],*p=str;//???????
	cin.getline(p,150,'\n');//??
	int i,len;
	len=strlen(p);
	*(p+len)=*p;//?????
	for(i=0;i<len;i++){
		c=*(p+i)+*(p+i+1);
		cout<<c;//????????
	}
	return 0;
}
