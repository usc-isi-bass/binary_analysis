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
 * ?7????????1045?.cpp
 *
 *  Created on: 2010-11-16
 *      Author: Administrator
 */

int main(){
	int n;
	cin>>n;
	int s=0;
	for(int i=1;i<=n;i++){
	int a=i%10,b=(i-a)/10;
	if(a!=7&&b!=7&&i%7!=0)
		s=s+i*i;
	}cout<<s;
	return 0;

}
