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
	int k,n;
	int i,j;
	double a[1001],evg,sum= 0;
	cin >> k;
	while(k--){
		sum = 0;
		cin >>n;
		for(i = 0;i < n;i++){
			cin >> a[i];
			sum+=a[i];
		}
	evg= sum/n;
	sum = 0;
	for(i = 0;i < n;i++)
		sum +=(a[i] - evg)*(a[i] - evg);
	sum/=n;
	sum = sqrt(sum);
	cout <<fixed<<setprecision(5)<<sum<<endl;
	}
	
		return 0;
}
