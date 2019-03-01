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
 * kuohaopipei.cpp
 *????
 *  Created on: 2012-12-4
 *      Author: ???
 */
void f(char str[105], int len)//??????
{
	int i,j;
	for(i=0;i<len;i++){//????????
		cout << str[i];
	}
	cout << endl;//??
	for(i=0;i<len;i++){//????????????????
		if(str[i]==')'){
			int x=0;
			for(j=i-1;j>=0;j--){
				if(str[j]=='('){
					x=1;
					str[i]='a';//????????????
					str[j]='a';
					break;
				}
			}
			if(x==0)//?????????
				str[i]='?';
		}
	}
	for(i=0;i<len;i++){//?????????$???
		if(str[i]=='(')
			str[i]='$';}
	for(i=0;i<len;i++){//?????????
		if(str[i]!='$' && str[i]!='?')
			str[i]=' ';
	}
	for(i=0;i<len;i++){//????
		cout << str[i];}
	cout << endl;
}
int main(){//???? 
	char str[105];
	int len;
	while(cin >> str){//?????????
		len=strlen(str);
		f(str,len);
	}
	return 0;
}
