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

int t[1000],q[1000];
int MyCompare(const void *e1,const void *e2)
{
	return *(int *)e2 - *(int *)e1;
}
int main()
{
	int n,i,tFirst,tLast,qFirst,qLast,ans;
	while(cin >> n)
	{
		if(n == 0)
			break;
		for(i = 0;i < n;i ++)
			cin >> t[i];
		for(i = 0;i < n;i ++)
			cin >> q[i];
		qsort(t,n,sizeof(int),MyCompare);
		qsort(q,n,sizeof(int),MyCompare);
		tFirst = qFirst = 0;
		tLast = qLast = n - 1;
		ans = 0;
		while(tFirst <= tLast)
		{
			if(t[tLast] > q[qLast])
			{
				tLast --;
				qLast --;
				ans += 200;
			}
			else if(t[tLast] < q[qLast])
			{
				tLast --;
				qFirst ++;
				ans -= 200;
			}
			else
			{
				if(t[tFirst] > q[qFirst])
				{
					tFirst ++;
					qFirst ++;
					ans += 200;
				}
				else if(t[tFirst] < q[qFirst])
				{
					tLast --;
					qFirst ++;
					ans -= 200;
				}
				else
				{
					if(t[tLast] > q[qFirst])
					{
						tLast --;
						qFirst ++;
						ans += 200;
					}
					else if(t[tLast] < q[qFirst])
					{
						tLast --;
						qFirst ++;
						ans -= 200;
					}
					else
					{
						tLast --;
						qFirst ++;
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}