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
 * qipengyuanshui.cpp
 *?????
 *  Created on: 2012-12-12
 *      Author: ???
 */
int main(){
	char str1[105],str2[105];//??????????
	int i,j=0,k,len;
	cin.getline(str1,105);//????????????
	len=strlen(str1);
	for(i=0;i<len-1;i++){
		str2[j]=str1[i]+str1[i+1];//?????????len-1?
		j++;
	}
	str2[j]=str1[len-1]+str1[0];//?????
	for(k=0;k<len;k++){
		cout << str2[k];//??
	}
	return 0;
}