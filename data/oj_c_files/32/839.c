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
 * integer.cpp
 *
 *  Created on: 2010-12-25
 *      Author: ???
 *      Function: ?????
 */
int main()
{
	int n,len1,len2;//n??????????len1??a????len2??b???
	char a[100],b[100],t;//a??????b????
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		len1=strlen(a);
		len2=strlen(b);
		for(int j=0;j<len1-j;j++){//????a?????????a[0]????
			t=a[j];
			a[j]=a[len1-j-1];
			a[len1-j-1]=t;
		}
		for(int j=0;j<len2-j;j++){//???b?????????b[0]????
			t=b[j];
			b[j]=b[len2-j-1];
			b[len2-j-1]=t;
		}
		for(int j=0;j<len2;j++)//??????????a?
			if(a[j]>=b[j]) a[j]=a[j]-b[j]+'0';
			else {
				a[j+1]--;
				a[j]=a[j]+10-b[j]+'0';
			}
		if(a[len1-1]!='0') cout<<a[len1-1];//????a??????0????????0?????
		for(int j=len1-2;j>=0;j--)
			cout<<a[j];
		cout<<endl;//???
	}
}
