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
 * 1.cpp
 *
 *  Created on: 2010-11-28
 *      Author: Administrator
 */

int main(){
	int n;
	cin>>n;
	char a[100];
	cin.getline(a,81);
	for(int i=0;i<n;i++){
		char b[100];//?????
		cin.getline(b,81);
		int t=1;
		if(!(b[0]=='_'||(b[0]>='a'&&b[0]<='z')||(b[0]>='A'&&b[0]<='Z')))t=0;//?????
		for(int j=0;j<strlen(b);j++)
			if(!(b[j]=='_'||(b[j]>='a'&&b[j]<='z')||(b[j]>='A'&&b[j]<='Z')||(b[j]>='0'&&b[j]<='9')))t=0;//???????
		cout<<t<<endl;
	}return 0;
}
