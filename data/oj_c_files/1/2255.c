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

int num =0;
void fenjie(int n,int x)
{
	extern int num;
	if ( n == 1)
		num ++;
	else

	for(int i = x; i<=n;i++)
		if(n % i ==  0)
			fenjie(n/i,i);
}
int main()
{
int n,k;
cin >> k;
for(int j = 0;j!= k;j++)
{extern int num;
num =0;
cin >> n;
fenjie(n,2);
cout<<num<<endl;
}
return 0;
}