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

int main() {
	int n,num[500];
	cin>>n;
	int i,j;
	int temp;
	for (i=0;i<n;i++) cin>>num[i];
	for (i=0;i<n-1;i++) {
		temp=num[i];
		for (j=i+1;j<n;j++) {
			if (temp==num[j]) {
				num[j]=0;
			}
		}
	}
	for (i=0;num[i]==0;i++);
	if (i==n) return 0;
	cout<<num[i];
	for (++i;i<n;i++) {
		if (num[i]!=0) cout<<","<<num[i];
	}
	cout<<endl;
	return 0;
}