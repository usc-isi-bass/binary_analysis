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
 * ????.cpp
 *
 *  Created on: 2011-12-24
 *      Author: Administrator
 */

int main()
{
	int n,i,m,num[60]={0};
	cin>>n;
	while(n>0){
		n--;
		cin>>m;
		for(i=0;i<=m;i++)num[i]=60;
		for(i=0;i<m;i++){
			cin>>num[i];

		}
		for(i=0;i<m;i++){
			if((num[i]+3*i)<=57&&(num[i+1]+3*i+3)>60)num[m]=57-3*i;
			else if((num[i]+3*i)<57&&(num[i+1]+3*i+3)<=60&&(num[i+1]+3*i+3)>=57)num[m]=num[i+1];
		}

		cout<<num[m]<<endl;
	}
	return 0;
}
