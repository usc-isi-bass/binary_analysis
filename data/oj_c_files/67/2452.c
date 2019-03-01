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
	int n;
	double e,all;
	int i;
	double xiaoguo;
	cin>>n;
	double E[n+2];
	for(i=1;i<=n;i++){
		cin>>all>>e;
		xiaoguo=e/all;
		E[i]=xiaoguo;
	}
	for(i=2;i<=n;i++){
		if((E[i]-E[1])>0.05){
			cout<<"better"<<endl;
		}
		else if((E[i]-E[1])<-0.05){
			cout<<"worse"<<endl;
		}
		else{
			cout<<"same"<<endl;
		}
	}

}
