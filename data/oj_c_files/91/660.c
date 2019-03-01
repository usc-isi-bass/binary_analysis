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
 *  Name:homework.cpp
 *  Created on: 2012-12-12
 *  Author: Meng Li
 *  Function:???????
 */


int main(){                            //???
	char string[101], final[101];      //?????????
	cin.getline (string,101);
	char *init, *result;               //????????????
	result=final;
	int length=strlen(string);
	for (init=string;init<(string+length-1);init++,result++){  //???????????????????????????
		*result=*(init)+*(init+1);
	}
	*result=*init+*(init-length+1);                   //??????????????
	for (int i=0;i<length;i++){
		cout<<final[i];
	}
	return 0;
}
