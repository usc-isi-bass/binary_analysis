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

int main()
{
	int k,i,j;                                                                     //?????k??????
	double a[10000],b[10000],dissq=0;                                              //???????????X,Y?dissq???????
	cin>>k;                                                                      //??k?
	for(i=0;i<k;i=i+1)
	{
		cin>>a[i]>>b[i];                                                          //???????X,Y?
	}
	for(i=0;i<k;i=i+1)
	{
		for(j=0;j<k;j=j+1)                                                          //??????????????
		{
			if((a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i])>dissq)
			{dissq=(a[j]-a[i])*(a[j]-a[i])+(b[j]-b[i])*(b[j]-b[i]);}                 //??????????
		}
	}
	
	cout<<sqrt(dissq);                                                              //?dissq??????????????
	return 0;                                                                         //??
}



