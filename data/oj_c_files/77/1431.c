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

int i;
int num;
char s[102];
	char c1 ;
	char c2;
int sol()
{
	if(i >= num)
		return -1;
	int n = i;
	char b = s[i++];
	if(b == c1)
	{
		cout<<n<<" "<<sol()<<endl;
		return sol();
	}
	else if(b == c2)
		return n;
}
int main()
{
	
	cin>>s;
	num = strlen(s);
	c1 = s[0];
	for(int i = 1;i<num;i++)
	{
		if(s[i] != c1)
		{
			c2 = s[i];
			break;
		}
	}
	sol();
}