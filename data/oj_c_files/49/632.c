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

//???????
//??? 1200017623
//???????



int main(){
	int judge(char*,int);
	char str[500],temp[500] = {'\0'},*p;
	int len,num;
	cin>>str;
	len = strlen(str);
	for(num = 2;num <= len;num++){
		for(p = str;p < str + len +1 - num;p++){
			strncpy(temp,p,num);
			if(judge(temp,num))cout<<temp<<endl;
		}
	}
	return 0;
}

int judge(char *ch,int n){       //???????
	char *p,*q;
	for(p = ch,q = ch + n - 1;p <= q;p++,q--){
		if(*p != *q)return 0;
	}return 1;
}
