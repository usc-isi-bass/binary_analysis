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

int flag[10000];
int num[10000];
int main()
{
	int n;
	cin>>n;
	int a = 1, b = 1;
	memset(flag, 0, sizeof(flag));
	memset(num, 0, sizeof(num));
	cin>>a>>b;
	while((a != 0)||(b != 0))
	{
		flag[a] = 1;
		num[b]++;
		cin>>a>>b;
	}
	int i;
	int j = 0;
	for(i = 0; i < n; i++)
	{
		if(flag[i] == 0 && num[i] == n - 1)
		{
			cout<<i<<endl;
			j = 1;
		}
	}
	if(j == 0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}