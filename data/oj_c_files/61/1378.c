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
 * ??????.cpp
 *
 *  Created on: 2012-10-19
 *      Author: ??
 *      ?????????a?????
 */


int main(){
	int a[21];              //????a[21]
	int i=0,j=0,n=0;        //????

	cin>>n;                 //??????????n

	a[1]=1;
	a[2]=1;                 //?a[1],a[2]????

	for(i=3; i<=20 ;i++)
	    a[i]=a[i-1]+a[i-2]; //?a[i]????

	for(j=1; j<=n ;j++)
	  { cin>>i;
	    cout<<a[i]<<endl;
	  }                     //??n???

	return 0;
}
