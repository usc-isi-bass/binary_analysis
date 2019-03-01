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
	int sum = 0;
	char a[50];
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		cin>>a;
		int s = strlen(a);
		sum += s+1;
		if(sum == s+1)
		{
			cout<<a;
			sum--;
		}
		else if(sum>80)
		{
			cout<<endl;
			cout<<a;
			sum = s;
		}
		else if(sum<80)
		{
			cout<<' '<<a;
		}
		else if(sum == 80)
		{
			cout<<' '<<a;
			cout<<endl;
			sum = 0;
		}
	}

	return 0;
}