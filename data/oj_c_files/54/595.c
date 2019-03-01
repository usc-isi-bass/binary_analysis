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
 * ?????.cpp
 *
 *  Created on: 2010-11-28
 *      Author: Administrator
 */

int f(int n){
	int m=1;
	for(int i=0;i<n;i++)
		m=m*n;
	return m;//????
}
int main(){
	int n,k;
	cin>>n>>k;
	if(n==2)cout<<(3+4*k);//n?????
	else cout<<f(n)-k*(n-1);//n??????
	return 0;

}
