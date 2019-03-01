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


int cmpsmall(const void *e1, const void *e2)
{
	const int *i1=(const int *)e1;
	const int *i2=(const int *)e2;
	return *i1-*i2;
}

int main()
{
	int n;
	int tian[1005], king[1005];
	while(cin>>n && n>0)
	{
		for(int i=0; i<n; i++)
			cin>>tian[i];
		for(int i=0; i<n; i++)
			cin>>king[i];

		qsort(tian,n,sizeof(int),cmpsmall);
		qsort(king,n,sizeof(int),cmpsmall);

		int tianSlow=0, tianFast=n-1;
		int kingSlow=0, kingFast=n-1;
		int win=0, lose=0, draw=0;
		while(tianSlow<tianFast && kingSlow<kingFast)
		{
			// ????????????????????
			if(tian[tianSlow]>king[kingSlow])
			{
				win++;
				tianSlow++;
				kingSlow++;
				continue;
			}
			// ????????????????????????????
			else if(tian[tianSlow]<king[kingSlow])
			{
				lose++;
				tianSlow++;
				kingFast--;
				continue;
			}
			// ?????????????????????
			else if(tian[tianFast]>king[kingFast])
			{
				win++;
				tianFast--;
				kingFast--;
				continue;
			}
			// ??????????????????????????????????
			else if(tian[tianFast]<king[kingFast])
			{
				lose++;
				tianSlow++;
				kingFast--;
				continue;
			}
			// ????????????????????????????????
			else
			{
				if(tian[tianSlow]<king[kingFast])
					lose++;
				else
					draw++;
				tianSlow++;
				kingFast--;
				continue;
			}
		}

		if(tian[tianSlow]<king[kingSlow])
			lose++;
		else if(tian[tianSlow]==king[kingSlow])
			draw++;
		else
			win++;


		cout<<(win-lose)*200<<endl;
	}
	return 0;
}