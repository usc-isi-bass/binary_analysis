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



int f(int n,int k){
	int a[100]={0};
	for(int i=0;i<100;i++)
		a[i]=k;
	int i;
	do{
		a[n]+=n;
        for (i=n-1; i>=1; i--){
			if (a[i+1]%(n-1)!=0 )
				break;
			else
				a[i]=a[i+1]*n/(n-1)+k;
        }
    }while(i>=1); 
    return a[1];
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<f(n,k)<<endl;
	return 0;
} 
