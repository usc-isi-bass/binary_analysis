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

//============================================================================
// Name        : 9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int n;
	cin>>n;
	double a,b;
	double x[100];
	for(int i=0;i<n;i++)//??
	{
		cin>>a>>b;
		x[i]=b/a;
	}
	for(int i=1;i<n;i++)//??
	{
		if(x[i]-x[0]>0.05)
			cout<<"better"<<endl;
		else if(x[0]-x[i]>0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}
