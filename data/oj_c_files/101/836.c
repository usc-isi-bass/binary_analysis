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
 * v.cpp
 *
 *  Created on: 2012-10-23
 *      Author: user
 */

int main()
{
	int a,b,c;
	int j,i;
	for (a=0;a<=2;a++){
		for (b=0;b<=2;b++){
			for (c=0;c<=2;c++){
			if((b>a)+(c==a)==2-a&&(b<a)+(c<a)==2-b&&(c>b)+(b>a)==(2-c)) break;}
			if((b>a)+(c==a)==2-a&&(b<a)+(c<a)==2-b&&(c>b)+(b>a)==(2-c)) break;}
		if((b>a)+(c==a)==2-a&&(b<a)+(c<a)==2-b&&(c>b)+(b>a)==(2-c)) break;}
	char m[3],u;int n[3],t;
	m[0]='A';m[1]='B';m[2]='C';
	n[0]=a;n[1]=b;n[2]=c;
	for(j=0;j<2;j++)
		for(i=0;i<2-j;i++)
			if(n[i]>n[i+1])
			{t=n[i];n[i]=n[i+1];n[i+1]=t;
			u=m[i];m[i]=m[i+1];m[i+1]=u;}
	cout<<m[0]<<m[1]<<m[2];
	return 0;

}