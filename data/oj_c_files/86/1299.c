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


int main() {
	int n,k,bre,i,bPoint,times,time;
	cin>>n;
	for(k=0;k<n;k++){
		cin>>bre;
		times=0;
		bPoint=0;
		time=0;
		for(i=0;i<bre;i++){
			cin>>bPoint;
			if(bPoint+3*i<=60){
				time=bPoint+3*(i+1);
				times=bPoint;
			}
		}
		if(time<=60){
			times+=60-time;
		}
		cout<<times<<endl;
	}
	return 0;
}
