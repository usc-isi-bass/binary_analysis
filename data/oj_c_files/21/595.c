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
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main()
{
	int n,i,num[300],t=0,k=0;
	double average,sum=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>num[i];
		sum=sum+num[i];
	}
	average=sum/n;
	for(i=0;i<n;i++)
		if((average-num[i])>(average-num[t])) t=i;
	for(i=0;i<n;i++)
		if((num[i]-average)>(num[k]-average)) k=i;
	if((num[k]-average)==(average-num[t])) cout<<num[t]<<','<<num[k]<<endl;
	else if((num[k]-average)>(average-num[t])) cout<<num[k]<<endl;
	else cout<<num[t];
	return 0;
}
