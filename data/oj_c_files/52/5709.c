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
	int n,m,a[100],i,b;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>*(a+i);
	while(m>0){
	b=*(a+n-1);
	for(i=n-1;i>0;i--)
		*(a+i)=*(a+i-1);
	*a=b;
	m--;
	}
	for(i=0;i<n-1;i++)
		cout<<*(a+i)<<" ";
	cout<<*(a+n-1);
	
}