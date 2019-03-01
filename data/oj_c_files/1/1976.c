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

int f(int a,int min);
int main()
{
	int n,i,a;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		printf("%d\n",f(a,2));}
	return 0;
}
int f(int a,int min)
{ 
	if(a < min){ 
		return 0;} 
	int result = 1; 
	for(int i = min;i<a;i++){ 
		if(a % i == 0){ 
			result += f(a/i,i);}} 
	return result; 
} 