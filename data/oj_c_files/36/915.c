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
 * ??????.cpp
 *
 *  Created on: 2010-12-31
 *      Author: wangwei
 */
int main()
{
	char str1[100],str2[100];
	cin>>str1>>str2;
	int i,j,l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1!=l2) cout<<"NO"<<endl;
	else
	{
		char t,q;
		for(i=0;i<l1-1;i++)
			for(j=0;j<l1-1-i;j++)
				if(str1[j+1]>str1[j])
				{
					t=str1[j+1];
					str1[j+1]=str1[j];
					str1[j]=t;
				}
		for(i=0;i<l2-1;i++)
			for(j=0;j<l2-1-i;j++)
				if(str2[j+1]>str2[j])
				{
					q=str2[j+1];
					str2[j+1]=str2[j];
					str2[j]=q;
				}
		if(strcmp(str1,str2)==0)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}