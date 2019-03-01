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
	int WN,i;
	cin>>WN;
	int len[WN];
	char wo[WN][40];
	for(i=0;i<WN;i++){
		cin>>wo[i];
		len[i]=strlen(wo[i]);
	}
	int sum=len[0]+len[1];
	cout<<wo[0];
	for(i=1;i<WN;i++){
		if(sum<80){
			cout<<" "<<wo[i];
			sum=sum+len[i+1]+1;
		}
		else{
			cout<<'\n'<<wo[i];
			sum=len[i]+len[i+1];
		}
	}
	return 0;
}

