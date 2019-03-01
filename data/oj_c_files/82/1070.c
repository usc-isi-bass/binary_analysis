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
 * pressure.cpp
 *
 *  Created on: 2012-10-17
 *      Author: Justin
 */
int main(){
	int p1,p2,hour,hourmax,n;
	hour=0;
	hourmax=0;
	cin>>n;
	while(n>0){
		cin>>p1>>p2;
		if(p1<=140 && p1>=90 && p2<=90 && p2>=60)
			{hour=hour+1;
			n=n-1;
			}
		else
		{hourmax=max(hour,hourmax);
		hour=0;
		n=n-1;
		}
	}
	cout<<max(hour,hourmax);
	return 0;
}