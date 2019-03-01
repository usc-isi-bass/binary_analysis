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
 * 7.cpp
 *
 *  Created on: 2011-1-8
 *      Author: 10033
 */


int n,n0,i,j;
char nan,nv;
char a[1000];//????

void paidui(int j){//???????j=0????????????
	int k;
	for(k=j;k<n0;k++)
		if(a[k]==nan)break;
	j=k;
	for(i=j+1;i<n0;i++)//??????
		if(a[i]!='.')
			break;
	while(a[i]==nan){//????????????
		paidui(j+1);
		for(i=j+1;i<n0;i++)
			if(a[i]!='.')
				break;
	}
	if(a[i]==nv){//??j????,??,?".",????
		cout<<j<<" "<<i<<endl;
		a[j]='.';
		a[i]='.';
		return;
	}
}
int main(){//????
	cin.getline(a,100);//??
	nan=a[0];//????
	n0=strlen(a);//???
	nv=a[n0-1];//????
	paidui(0);//????
	return 0;
}//????
