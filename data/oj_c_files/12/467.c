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
 * 9.cpp
 *
 *  Created on: 2010-11-19
 *      Author: ???
 *        ??? ??
 */



int main(){
	int a[16],i,j,r,n;
	while(cin>>a[0]){
		n=0;
		if(a[0]==-1)                     //??????-1?????
			break;
		for(i=1;a[i-1]!=0;i++)           //????
			cin>>a[i];
		for(j=0;j<=i-2;j++)              //??????
			for(r=0;r<=i-2;r++)
				if(2*a[j]==a[r])
					n++;
		cout<<n<<endl;
	}
	return 0;
}
