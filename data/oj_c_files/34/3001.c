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
	int n;
	cin>> n;
	if(n==1) {cout<<"End";}   //??????1?????
	while(n!=1)
	{
		if(n%2==0) {n=n/2;cout<< 2*n <<"/2="<< n <<endl;}  //???????????2
		else if(n%2!=0) {n=n*3+1;cout<< (n-1)/3 <<"*3+1="<< n <<endl;} //??????????3?1
		if(n==1)  {cout<<"End";break;} //????1???
	}
	return 0;
}