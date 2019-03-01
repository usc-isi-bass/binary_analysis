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
	cin>>n;
	float sum,effective;
	float percentji,percent;
	cin>>sum>>effective;
	percentji=effective/sum;
	while(--n){
		cin>>sum>>effective;
		percent=effective/sum;
		if(percentji-percent>0.05)cout<<"worse"<<endl;
		else if(percent-percentji>0.05)cout<<"better"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}