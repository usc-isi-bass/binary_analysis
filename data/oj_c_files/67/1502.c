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





int main(){

	int n=0;

	cin>>n;

	double r[100][2];

	for(int i=0;i<n;i++){
		cin>>r[i][0]>>r[i][1];
	}

	for(int i=1;i<n;i++){
		if(r[i][1]/r[i][0]-r[0][1]/r[0][0]>0.05){
			cout<<"better";
		}
		else if(r[0][1]/r[0][0]-r[i][1]/r[i][0]>0.05){
			cout<<"worse";

		}
		else{
			cout<<"same";
		}

		if(i<n-1) cout<<endl;
	}

	return 0;


	
}