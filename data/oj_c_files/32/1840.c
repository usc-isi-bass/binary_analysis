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
	int n,i,j,k,la,lb;
	char a[101],b[101];
	int c[101];
	cin>>n;
	while(n!=0){
		cin>>a>>b;
		la=strlen(a);
		lb=strlen(b);
		for(i=la-1,j=lb-1,k=0;j>=0;i--,j--,k++){
			if(a[i]>=b[j]) c[k]=a[i]-b[j];
			else{
				c[k]=a[i]-b[j]+10;
				a[i-1]=a[i-1]-1;
			}
		}
		for(;i>=0;i--,k++)
			c[k]=a[i]-'0';
		for(i=k-1;i>=0;i--){
			cout<<c[i];
		}
		cout<<endl;
		n--;
	}
	return 0;
}