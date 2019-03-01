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

//????
//??????? 
//?????12.12.08
int n,a[100];
int main()
{
	cin>>n;  //?????? 
	for(int i=0;i<n;i++){
		cin>>*(a+i);}  //???????????? 
	for(int i=n-1;i>0;i--){
		cout<<*(a+i)<<" ";}  //???????????? 
	cout<<*a;
	return 0;
}
