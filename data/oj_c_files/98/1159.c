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

/*1200012866 ???*/
int main(){
	int n;
	char a[50];
	cin>>n;
	cin>>a;
	int count=strlen(a)+1;	
	cout<<a;	
	for(int i=0;i<n-1;i++){
		cin>>a;
		if(count+strlen(a)<=80){
			cout<<' '<<a;
			count+=strlen(a)+1;
		}
		else{
			cout<<endl<<a;
			count=strlen(a)+1;
		}
	}

	return 0;
}