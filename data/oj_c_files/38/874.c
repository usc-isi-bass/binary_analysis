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

double fangcha(double array[],int k)
{
	double sum=0;
	for(int i=0;i<k;i++){
		sum+=array[i];}
	double arrange=sum/k;
	double array2[101];
	for(int i=0;i<k;i++){
		array2[i]=(array[i]-arrange)*(array[i]-arrange);}
	double sum2=0;
	for(int i=0;i<k;i++){
		sum2+=array2[i];}
	double result=sqrt(sum2/k);
	return result;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		double num[101];
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>num[j];}
		printf("%.5lf\n",fangcha(num,k));}
	return 0;
}