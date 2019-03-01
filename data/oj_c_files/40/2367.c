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
 * sibianxingmianji.cpp
 *
 *  Created on: 2010-11-17
 *      Author: Administrator
 */
double S(double a,double b,double c,double d,double e){
	double s=(a+b+c+d)/2;
	double square=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow(cos(e*3.1415926/(2*180)),2.0);
    return square;
}
int main(){
	double a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	double y=S(a,b,c,d,e);
	if(y<0)   cout<<"Invalid input"<<endl;
	else      cout<<fixed<<setprecision(4)<<sqrt(y)<<endl;
	return 0;
}
