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
	int b[101];
    int *a=&b[0];
	int n,m,mid;
	cin>>n>>m;
	int i;
	for(i=0;i<n;i++)
		cin>>*(a+i);
	int *p=a;
	for(i=0;i<m;i++){
		mid=*(p+i);
		*(p+i)=*(p+i+n-m);
		*(p+i+n-m)=mid;
	}                      //??m????m????
	for(i=0;i<m;i++){
		mid=*(a+n-1);
		p=(a+n-1);
		while(*p!=*(a+m)){
		*p=*(p-1);
		p--;
		}
		*(a+m)=mid;           //???????m?
	}
	cout<<*a;
	for(i=1;i<n;i++)
		cout<<" "<<*(a+i);
	return 0;
}