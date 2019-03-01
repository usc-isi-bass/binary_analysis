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
 *  Created on: 2011-11-10
 *      Author: 1100012870
 */

int n,k;          //n?k??????

int ping(int no,int num)
{
	if(no==0){
		cout<<num<<endl;
		return 1;
	}
	int x;
	x=num*n; 
	if(x%(n-1)!=0) return 0;         //??????????
	return ping(no-1,x/(n-1)+k);     //??????????????
}

int main()
{
	int i=1;
	cin>>n>>k; 
	while(1){                        //???????????????
		if(ping(n,i)==1)break;       //??????????
		i++;
	}
	return 0;
}
