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
 * 1049.cpp
 *
 *  Created on: 2011-12-21
 *      Author: wuch
 */

int main(){
	int n,i,j,num,a[21],ans;
	cin>>n;
	for (i=0;i<n;i++){
		cin>>num;
		if (num==0) cout<<60<<endl; //????60?
		else{
			for (j=1;j<=num;j++) cin>>a[j];
			for (j=1;j<=num;j++) a[j]=a[j]+(j-1)*3; //?a????????????????
			ans=60;
			for (j=1;j<=num;j++)
				if (a[j]<=57) ans=ans-3;  //????57??????3?
				else if (a[j]<60) ans=ans-(60-a[j]); //58,59?????????????
			cout<<ans<<endl;
		}
	}
	return 0;
}