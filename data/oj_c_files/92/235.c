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


int n;
int q[1001],t[1001];
int qshang,tshang,qxia,txia;

int cmp(const void* a,const void*b)
{	
	int *p1=(int*)a;
	int *p2=(int*)b;
	return *p2-*p1;
}

int main()
{
	while(cin>>n)
	{
		if(n==0) break;
		int i;
		for(i=1;i<=n;i++)
			cin>>t[i];
		for(i=1;i<=n;i++)
			cin>>q[i];
		qsort(q+1,n,sizeof(q[1]),cmp);
		qsort(t+1,n,sizeof(t[1]),cmp);
	
		int res=0;
		qxia=txia=n;
		qshang=tshang=1;
		while(qshang<=qxia && tshang<=txia)
		{
			if(t[txia]>q[qxia])
			{
				res++;
				qxia--;
				txia--;
			}
			else if(t[txia]<q[qxia])
			{
				txia--;
				qshang++;
				res--;
			}
			else
			{
				if(q[qshang]>t[tshang])
				{
					qshang++;
					txia--;
					res--;
				}
				else if(q[qshang]<t[tshang])
				{
					tshang++;
					qshang++;
					res++;
				}
				else
				{
					if(t[txia]<q[qshang])
					{
						txia--;
						qshang++;
						res--;
					}
					else
					{
						txia--;
						qshang++;
					}
				}
			}
		}
		cout<<res*200<<endl;
	}
	return 0;
}