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

int a[300000];
int knowedBy[300000];
int flag[300000];
int main()
{
	int n;
	cin>>n;
	memset(knowedBy, 0, sizeof(knowedBy));
	memset(flag, 0, sizeof(flag));
	int i, j, k;
	while(cin>>j>>k)
	{
		if((j == 0)&&(k == 0))
			break;
		flag[j] = -1;
		knowedBy[k]++;
	}
	int t = 0;
	for(i = 0; i < n; i++)
	{
		if((knowedBy[i] == n-1)&&(flag[i] == 0))
		{
			cout<<i<<endl;
			t = 1;
			break;
		}
	}
	if(t == 0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}