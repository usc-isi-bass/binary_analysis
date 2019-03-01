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



int is_prime(int n)  
{
	int k,limit;
	if(n == 2)
		return 1;
	
	if(n % 2 == 0)
		return 0;
	
	limit = n/2;                 
	for(k=3; k <= limit; k+=2)  
		if(n % k == 0)
			return 0;
		return 1;   
}
int main ()
{
	int number,a,b,i;
	cin >>number;
	for (a=3;a<=number/2;a++)
	{
		b=number-a;
		if (is_prime(a)==1&&is_prime(b)==1) cout <<a<<" "<<b<<endl;
	} 
	return 0;
} 