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
	cin>>n;
	int ai[n],aj[n];
	int c,d;
	for(int i=0;i<n;i++){
		ai[i]=aj[i]=0;
	}
	while(true){
		cin>>c;
		cin>>d;
		if(c==0&&d==0)break;
		else{
			ai[c]++;
		    aj[d]++;
		}
	}
	int j;
	for( j=0;j<n;j++){
		if(ai[j]==0&&aj[j]==n-1){
			cout<<j<<endl;
			break;}
	}
	if(j==n)cout<<"NOT FOUND"<<endl;
	return 0;
}