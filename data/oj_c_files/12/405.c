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
 * 1000012761_xiaoceyan9.cpp
 *??2?15????????????????????????????????????????????

????1 4 3 2 9 7 18 22???????3???2?1????4?2????18?9????
 *  Created on: 2010-11-16
 *      Author: 378073652
 */


int main(){
	int a[20][20],i,j,b[20],s,n=0,k;
	for(i=0;i<20;i++){
		for(j=0;j<16;j++){
			cin>>a[i][j];
			if(a[i][0]==-1) break;
			if(a[i][j]==0){ b[i]=j;break;}

		}

		if(a[i][0]==-1) break;
	}
	s=i;
	for(i=0;i<s;i++){
		for(j=0;j<b[i];j++){
			for( k=j+1;k<b[i];k++){
				if(((a[i][j]%a[i][k]==0)&&(a[i][j]/a[i][k]==2))||((a[i][k]%a[i][j]==0)&&(a[i][k]/a[i][j]==2)))
					n=n+1;
			}
		}
		cout<<n<<endl;
		n=0;
	}

	return 0;
}
