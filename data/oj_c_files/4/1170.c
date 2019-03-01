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

int main()
{
	int a[10000];
	int m,n;
	cin>>m>>n;
	int i;
	for(i=0;i<m*n;i++){
		cin>>a[i];
	}
	int *p;//????
	int temp;//?????
	temp=0;
	int num=m+n-1;
	while(num--){
		p=a+temp;//????
		i=temp;//??????????
		while(i%n!=0&&i/n!=m-1){
			cout<<*p<<endl;
		    p=p+(n-1);
		    i+=(n-1);
		}
		cout<<*p<<endl;
		if(temp<n-1){
			temp++;
		}
		else{
			temp+=n;
		}
	}
	return 0;
}