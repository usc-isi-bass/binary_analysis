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
 * ????AIDS.cpp
 * ?????
 * ????: 2011-12-30
 * ????????
 */
int main(){
	int n,i;
	int a[1000],b[1000];
	float c[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		c[i]=((float)b[i]/a[i]);
		if(i!=0)
		{
			if(c[i]-c[0]>0.05){cout<<"better"<<endl;continue;}
		    if(c[i]-c[0]<-0.05)cout<<"worse"<<endl;
		    else cout<<"same"<<endl;
		}
	}
	return 0;//????
}
