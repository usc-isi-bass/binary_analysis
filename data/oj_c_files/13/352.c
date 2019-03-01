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
	int n,i,j,k;
	cin>>n;//??????n
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];//?????
	for(i=0;i<n;i++){//????
	  for(j=i+1;j<n;j++){
		  if(a[j]==a[i]){//????????
			  for(k=j;k<n;k++){
				  a[k]=a[k+1];
			  }
			  j--;
			  n--;//??????????
		  }
	  }
	}
	for(i=0;i<n-1;i++)
		cout<<a[i]<<' ';//??????
	cout<<a[i];//???????
	return 0;
}