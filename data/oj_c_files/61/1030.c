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
	int a,n,i=1,j=2,o=1,p=1,q=1;		//???a???q
	cin>>n;
	while (i<=n){
		cin>>a;
			while(j<a){
			q=o+p;
			o=p;
			p=q;
			j=j+1;						//????q
		}
		cout<<q<<endl;					//??q
		i=i+1;
		j=2;
		o=1;
		p=1;
		q=1;							//??
	}
	return 0;
}
