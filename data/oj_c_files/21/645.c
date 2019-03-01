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
 * 1000012889_1.cpp
 *
 *  Created on: 2011-1-9
 *      Author: ???
 *        ??? ?????
 */



int main(){
	int n,i;
	double a,max=0,min=0,sum=0,ave=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		sum+=a;
		if(i==0){
			max=a;
			min=a;
		}
		else{
			if(a>max)
				max=a;
			else if(a<min)
				min=a;
		}
	}
	ave=sum/n;
	if(max-ave>ave-min)
		cout<<max<<endl;
	else if(max-ave<ave-min)
		cout<<min<<endl;
	else
		cout<<min<<','<<max<<endl;
	return 0;
}
