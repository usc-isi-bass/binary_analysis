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

void p(int n)   //??n???
{
	int c;
	cin>>c;
	if(n!=1)
		p(n-1);   //??????
	if(n==1)      //???????????
		cout<<c;
	else
		cout<<' '<<c;
}
int main()
{
	int n;
	cin>>n;  //??n
	p(n);
	cout<<endl;
	return 0;
}