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
	int n, j, i, k, aj, ai, bi, bj;
	int k1, k2, k3;
	aj = 0;
	ai = 0;
	cin>>n;
	for(j=0;j<n;j++)
	{	
		for(i=0;i<n;i++)
		{
			cin>>k;
			k1 = k2;
			k2 = k3;
			k3 = k;
			if(k3==0&&k2==0&&k1==255)
			{
				if(aj==0)
				{
				aj = j;
				ai = i-1;
				}
			}
			else if(k1==0&&k2==0&&k3==255)
			{
				bj = j;
				bi = i-1;
			}
			else
				continue;
		}
	}
	cout<<((bj-aj-1)*(bi-ai-1))<<endl;
    return 0;            
}