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
 *???????
 *
 *  Created on: 2012-12-12
 *      Author: zhuyongfu
 */



int main(){
	char str1[101],str2[101];//??????????????
	char *p = str1,*q = str2;//??????????????
	int l,i;//
	cin.getline(str1,101,'\n');//??
	l = strlen(str1);//
	for(i = 0;i < l;i++)//??????????????
	{
		if(i != l - 1)
			*(q + i) = *(p + i) + *(p + i + 1);
		else
			*(q + i) = *(p + i) + *p;
	}
	for(i = 0;i < l;i++)//??
		cout << *(q + i);
	return 0;
}