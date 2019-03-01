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

int divide(int d,int n)
{
	int sum=0;
	for(int i=d;i<n;i++){
		if (n%i==0&&(n/i)>=i){
			sum=sum+1;
			sum=sum+divide(i,n/i);}}
	return (sum);
}
int main()
{
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		cout<<divide(2,num)+1<<endl;}
	return 0;
}
