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
 * 1000012835_3.2.cpp
 *
 *  Created on: 2010-11-6
 *      Author: huangjiali
 */
int main()
{
	char a[80],b[80];
	int len1,len2,i;
	cin.getline(a,80);//?????a
	len1=strlen(a);
	cin.getline(b,80);//?????b
	len2=strlen(b);
	for(i=0;i<len1;i++){
		if(a[i]<='Z') a[i]=a[i]+32;//?a???????
		if(b[i]<='Z') b[i]=b[i]+32;//?b???????
		if(a[i]<b[i]) {cout<<"<"<<endl;break;}//??a??b????"<"
		if(a[i]>b[i]) {cout<<">"<<endl;break;}//??a??b????">"
	}
	if(i==len1) cout<<"="<<endl;//??i=len1???????????????a?b??????????????????"="
	return 0;
}
