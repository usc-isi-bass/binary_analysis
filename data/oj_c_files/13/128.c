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

//*********************************************
//????4.cpp
//???????????
//?????
//???2010.10.25
//*********************************************
//*********************************************
//????4.cpp
//???????????
//?????
//???2010.10.25
//*********************************************
int main()
{
	int n,i,j,k=0,a[20000];                           //????
	cin>>n;                                           //????
	for(i=0;i<n;i++)                                  //for??????????
		cin>>a[i];
	for(i=0;i<n;i++)                                  //for??
	{
		for(j=0;j<i;j++)                              //for?????j???j+1??????
		if(a[j]==a[i])                                //????
		{
		   a[i]=-1;                                   //??????????-1?????
		   break;                                     //??????????
		}
	}
	cout<<a[0];                                       //????????
	for(i=1;i<n;i++)                                  //for??
		{
			if(a[i]>0)                                //????????
			cout<<" "<<a[i];
	    }
return 0;	
}
