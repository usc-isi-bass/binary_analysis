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
	char num[10];
	int n;
	while(cin>>n){
		int i = 0;
		while(n!=0){
			num[i++]= n%10+'0';
			n /= 10;
		}
		num[i]= '\0';
		cout<<num<<endl;
	}
	return 0;
}