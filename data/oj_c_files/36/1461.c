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

void in(int n, char a[], int c[])              //??????????
{
	for(int i = 0; i < n; i++)
		c[a[i]] ++; 
}
int main()
{
	char a[500], b[500];
    int c_a[300] = {0}, c_b[300] = {0};
	cin>>a>>b;                                   
	if(strlen(a) != strlen(b))                //???????????????
	{
		cout<<"NO"<<endl;
		return 0;
	}
	in(strlen(a), a, c_a);                   
	in(strlen(b), b, c_b);
	for(int i = 0; i < 300; i++)             //?????????????
	{
		if(c_a[i] != c_b[i])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}