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
	int j,k,l;
	cin>>n;cin.get();
	int i=0;
	for(i=0;i<n;i++){
		k=0;
		char a[100];
		cin.getline(a,100);
		l=strlen(a);
		if(!((a[0]=='_')||(a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A'))){
			cout<<0<<endl;continue;
		}
		if(l==1&&((a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A')||a[0]=='_')){
			cout<<1<<endl;continue;
		}
		for(j=1;j<l;j++){
			if(!((a[j]=='_')||(a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A')||(a[j]>='0'&&a[j]<='9'))){
				cout<<0<<endl;break;}
			else {
				k++;
			}
		}
		if(k==l-1)
			cout<<1<<endl;
	}
}