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
	int in[200000],out[200000];
	memset(in,0,sizeof(int));
	memset(out,0,sizeof(int));
	cin>>n;
	int to,from;
	while(cin>>to>>from)
	{
		if(to == 0 && from == 0) break;
		in[from] ++;
		out[to] ++;
	}
	for(int i = 0 ; i < n; i ++)
	{
		if(in[i] == n - 1 && out[i] == 0)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<"NOT FOUND"<<endl;
	return 0;
}