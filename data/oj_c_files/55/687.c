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
	int a, b, sum=0, i, l, p[100];
	char s[100],q[100];
	cin >> a;
	scanf("%s",s);
	cin >> b;
	l = strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]>='a')
			sum = sum * a + (s[i] - 87);
		else
		{
			if(s[i]>='A'&&s[i]<='Z')
				sum = sum * a + (s[i] - 55);
			else
				sum = sum * a + (s[i] - 48);
		}
	}
	if(sum==0)
		cout <<"0";
	else
	{
		for(i=0;sum;i++)
		{
			p[i] = sum % b;
			if(p[i]<10)
				q[i] = p[i] + 48;
			else
				q[i] = p[i] + 55;
			sum  = sum / b;
		}
		for(i--;i>=0;i--)
			cout << q[i];
	}
	return 0;	
}