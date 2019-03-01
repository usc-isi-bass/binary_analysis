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
 *  Created on: 2012-11-1
 *      Author: AK
 */
int main(){
	int n;
	double a,b,c,p;
	cin>>n;
	for(;n>=1;n--){
		cin>>a>>b>>c;
		p=b*b-4*a*c;
		if(p>0) cout<<"x1="<<fixed<<setprecision(5)<<0+(-b+sqrt(p))/(2*a)<<";x2="<<0+(-b-sqrt(p))/(2*a)<<endl;
		else if(p==0) cout<<"x1=x2="<<fixed<<setprecision(5)<<0+(-b)/(2*a)<<endl;
		else cout<<fixed<<setprecision(5)<<"x1="<<0+(-b)/(2*a)<<'+'<<sqrt(-p)/(2*a)<<"i;x2="<<0+(-b)/(2*a)<<'-'<<sqrt(-p)/(2*a)<<"i"<<endl;
		}
	return 0;
}
