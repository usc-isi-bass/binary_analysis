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
	char a[500][41];
	int b[500];
	int i,j,sum=0,k=0;
	char (*p)[41]=a;
	int *q=b;
	for(i=0;i<n;i++)
		cin>>*(p+i);
	for(i=0;i<n;i++)
		*(q+i)=strlen(*(p+i))+1;
	for(i=0;i<n;i++){
		sum=sum+*(q+i);
		if(sum>81){
			for(j=k;j<i-1;j++){
				cout<<*(p+j)<<' ';
			}cout<<*(p+i-1)<<endl;
			sum=*(q+i);
			k=i;
		}
	}
	for(j=k;j<n-1;j++){
		cout<<*(p+j)<<' ';
	}cout<<*(p+n-1)<<endl;
	return 0;
}