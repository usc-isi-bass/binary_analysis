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
	int n=0;
	int a[21];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]==1)                  //?????1
			cout<<1<<endl;
		if (a[i]==2)	              //?????1
			cout<<1<<endl;
		if (a[i]>=3){		      //??????????
			int a1=1,a2=1,a3=0;
		  for (int j=3;j<=a[i];j++){
			a3=a1+a2;
			 a1=a2;
			 a2=a3;}	      //????????2????? 

		cout<<a3<<endl;} 
	}

	return 0;
}
