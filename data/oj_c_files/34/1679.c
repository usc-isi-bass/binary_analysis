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
	int k;
	cin >> k;
	while(k!=1)//???1
	{
		if(k%2){
			cout << k;
                            cout <<"*3+1="<<(k=3*k+1)<<endl;//??
		}else{
			cout << k ;
                            cout<< "/2="<<(k/=2)<<endl;//??
	}}
	cout << "End"<<endl;
	return 0;
}
