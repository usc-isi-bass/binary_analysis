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
	char a[100];
	cin>>a;
	for(int i=0;i<strlen(a)-1;i++){
		if(a[i]==' ')continue;
		else if(a[i+1]==' '){
			int j;
			for(j=1;a[i+j]==' ';j++){}
			if(a[i]!=a[i+j]){
				cout<<i<<' '<<i+j<<endl;
				a[i]=' ';
				a[i+j]=' ';
				i=0;
			}
		}
		else if(a[i]!=a[i+1]){
			cout<<i<<' '<<i+1<<endl;
			a[i]=' ';
			a[i+1]=' ';
			i=0;
		}
	}
	cout<<0<<' '<<strlen(a)-1<<endl;
	return 0;
}