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
	int a[100];//??????
	int n;
	cin >>n;
	cout <<endl;
	for (int i = 0;i <= n-1;i++)//?????????
		cin >>a[i]; 
	cout <<endl;
	for (int k = n-1;k >=1;k--)//?????????
		cout <<a[k]<<" ";
         cout <<a[0];
	cout <<endl;
	return 0;
}