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
	int num;
	cin>>num;
	while(num){
	int fail;
	cin>>fail;
	if (fail==0) cout<<"60"<<endl;
	else{
	int n[fail];
	for(int i=0;i<fail;i++)
		cin>>n[i];
	int t=0;
	for(int i=0;i<fail;i++){
		t=n[i]+3*(i+1);
		if (63>t&&t>60){
			cout<<n[i]<<endl;
			break;//????3????
		}
		else if(t>=63){
			cout<<60-3*i<<endl;
			break;//??
		}
		else if (i==fail-1) cout<<60-3*(i+1)<<endl;//???????
	}
	}
	num--;
	}
	return 0;
}