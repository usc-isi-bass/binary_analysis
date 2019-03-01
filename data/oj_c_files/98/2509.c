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
	char ch[100],ch1[44];
	cin>>ch1;
	cout<<ch1;
	int sum=strlen(ch1)+1;
	for(int i=1;i<n;i++){
		cin>>ch;
		sum=sum+strlen(ch)+1;
		if(sum>81){
			cout<<endl<<ch;
			sum=strlen(ch)+1;
		}
		else
			cout<<' '<<ch;
	}
	return 0;
}

