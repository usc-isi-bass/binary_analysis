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
 * nb.cpp
 *
 *  Created on: 2011-12-31
 *      Author: ???
 */
int main()
{
	char a[1000];
	cin>>a;
	int l,i,m=1;
	l=strlen(a);
	for(i=0;i<l;i++){
		if((a[i]>='a')&&(a[i]<='z')){
			a[i]='A'+a[i]-'a';
		}
	}
	for(i=0;i<l;i++){
		m=1;
		cout<<'('<<a[i]<<',';
		while(1){
			if(a[i]==a[i+1]){m++;i++;}
			else break;
		}
		cout<<m<<')';
	}
	cout<<endl;
	return 0;
}
