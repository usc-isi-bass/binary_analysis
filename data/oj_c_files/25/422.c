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


int n;
int num=0;
int a[40]={0};
int b[40]={0};
int c[40]={0};
void calculate()
{
	int i;
	memset(b,0,sizeof(b));
	for(i=0;i<40;i++){
		b[i]=b[i]+(a[i]*2)%10;
		b[i+1]=(a[i]*2)/10+b[i+1];}
	for(i=0;i<40;i++)
		a[i]=b[i];





}
int main()
{
	cin>>n;
	
	int i=0,l=0;a[0]=1;
	for(i=0;i<=n-1;i++)	
calculate();
	for(i=39;a[i]==0;i--)
		l=i;
		
	for(i=l-1;i>=0;i--)
		cout<<a[i];




 	return 0;
}