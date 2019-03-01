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

const int N = 1001;
int n;
int tj[N],qw[N];
int x,y,a,b,ans;
void fight(int s, int t)
{
	if (tj[s] < qw[t])
		ans--;
	else if (tj[s] > qw[t])
		ans++;
}
int main()
{
	while (cin >> n)
	{
		if (n == 0) break;
		for (int i = 0; i < n; i++)
			cin >> tj[i] ;
		for (int i = 0; i < n; i++)
			cin >> qw[i];
		sort(tj,tj+n);
		sort(qw,qw+n);
	
		x = a = 0;
		y = b = n-1;
		ans = 0;

		for(int i = 0; i < n ; i++)
		{
			if (qw[y] < tj[b])
				fight(b--,y--);
			else if (qw[y] > tj[b])
				fight(a++,y--);
			else
			{
				if (qw[x] >= tj[a])
					fight(a++,y--);
				else if (qw[x] < tj[a])
					fight(a++,x++);
			}
		}
		cout << ans * 200 << endl;
	}
}
