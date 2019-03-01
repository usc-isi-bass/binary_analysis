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
	int n,i,j,x=1,y=1,z;
	cin>>n;
	int a[n];

	memset(a,0,sizeof(a));

	for(i=0;i<=n-1;i++){
		cin>>a[i];
	}
	for(i=0;i<=n-1;i++){
		x=1;y=1;
		for(j=1;j<=a[i];j++){
			z=x+y;
			x=y;
			y=z;
		}

		cout<<y-x<<endl;
	}
	return 0;
	}
