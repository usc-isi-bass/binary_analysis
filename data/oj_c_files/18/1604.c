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


int n,a[200][200],temp,sum[200];

void zero(int i) {
	int mi=1000;
	for(int j=i;j<=n;j++) {
		for(int k=i;k<=n;k++)
			mi=min(*(*(a+j)+k),mi);
		for(int k=i;k<=n;k++) 
			*(*(a+j)+k)=*(*(a+j)+k)-mi;
		mi=1000;
	}
	mi=1000;
	for(int k=i;k<=n;k++) {          
		for(int j=i;j<=n;j++) 
			mi=min(*(*(a+j)+k),mi);
		for(int j=i;j<=n;j++) 
			*(*(a+j)+k)=*(*(a+j)+k)-mi;
		mi=1000;
	}
}

int main() {
	cin>>n;
	for(int l=1;l<=n;l++) {
		sum[l]=0;
		for(int j=1;j<=n;j++) 
			for(int k=1;k<=n;k++)
				cin>>*(*(a+j)+k);
		for(int i=1;i<=n;i++) {
			temp=*(*(a+1)+i);
			*(*(a+1)+i)=*(*(a+2)+i);
			*(*(a+2)+i)=temp;
		}
		for(int i=1;i<=n;i++) {
			temp=*(*(a+i)+1);
			*(*(a+i)+1)=*(*(a+i)+2);
			*(*(a+i)+2)=temp;
		}
		for(int i=1;i<=n-1;i++) {
			zero(i);
			sum[l]+=*(*(a+i)+i);
			for(int k=i+1;k<=n;k++) {
				temp=*(*(a+i+1)+k);
				*(*(a+i+1)+k)=*(*(a+i+2)+k);
				*(*(a+i+2)+k)=temp;
			}
			for(int j=i+1;j<=n;j++) {
				temp=*(*(a+j)+i+1);
				*(*(a+j)+i+1)=*(*(a+j)+i+2);
				*(*(a+j)+i+2)=temp;
			}
		}
		cout<<sum[l]<<endl;
	}
	return 0;
}