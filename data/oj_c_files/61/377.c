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
 * find.cpp
 *
 *  Created on: 2012-10-7
 *      Author: Administrator
 */
int fob(int j){             		//??????j????????
	if (j==1 || j==2) return 1;		//????????
	else {
			int a=1,b=1,c;
			for (int k=3;k<=j;k++){c=a+b;a=b;b=c;}
			return c;
	}

}
int main(){
	int n,i;
	cin>>n;									//?????n,??????????

	int a[n];
	for (i=1;i<=n;i++){cin>>a[i];}			//???a[0]
	for (i=1;i<=n;i++){cout<<fob(a[i])<<endl;}
	return 0;
}
