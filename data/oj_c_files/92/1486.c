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



int sa[2000];
int sb[2000];

int main()
{
	int n;
	while(scanf("%d",&n) && n)
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&sa[i]);
		}
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&sb[i]);
		}
		sort(&sa[1],&sa[n+1]);
		sort(&sb[1],&sb[n+1]);

		int stpA = 1;
		int edpA = n;
		int stpB = 1;
		int edPB = n;
		int result = 0;

		for(int i=1;i<=n;i++)
		{
			if(sa[stpA] > sb[stpB])
			{
				result += 200;
				stpA++;
				stpB++;
			}
			else if(sa[edpA] > sb[edPB])
			{
				result += 200;
				edpA--;
				edPB--;
			}
			else
			{
				if(sa[stpA] > sb[edPB])
				{
					result += 200;
				}
				else if(sa[stpA] < sb[edPB])
				{
					result -= 200;
				}
				stpA ++;
				edPB --;
			}
		}
		cout<<result<<endl;
	}
	return 0;
}