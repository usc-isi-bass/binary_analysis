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


void ji(int shu){
	int m;
	m=shu*3+1;
	cout<<shu<<"*3+1="<<m<<endl;
	void ou(int shu);
	if (m%2==1) ji(m);
	else ou(m);
}

void ou(int shu){
	int m;
	m=shu/2;
	cout<<shu<<"/2="<<m<<endl;
	if (m==1) cout<<"End";else
	if (m%2==1) ji(m);
	else ou(m);
}

int main(){
	int n;
	cin>>n;
        if (n==1) cout<<"End";else
	if (n%2==1) ji(n);
	else ou(n);
}