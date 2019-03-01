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
	int g,cco=0;
	cin>>g;
	char b[45];
	cin>>b;
	cout<<b;
	cco=strlen(b);
	for(int i=1;i<g;i++){
		char a[45];
		char *p=a;
		cin>>a;
		cco+=strlen(a);
		if(cco<80){
			cout<<" "<<p;
			cco++;
		}
		else{
			cco=0;
			cout<<endl<<p;
			cco+=strlen(a);
		}
	}
return 0;
}
