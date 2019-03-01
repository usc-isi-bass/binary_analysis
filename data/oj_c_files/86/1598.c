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
	cin>>n;
	for (int t=0;t<n;t++)
	{
		int time=0,ans=0,m;
		cin>>m;
		int point[100];
		for (int i=0;i<m;i++)
			cin>>point[i];
		for (int i=0;i<m;i++)
		{
			time+=point[i]-ans;        //??????
			if (time>60)               //?????????
			{
				ans=point[i]-(time-60);
				break;
			}
			else ans=point[i];          //??????
			time+=3;                    //????????
			if (time>60) break;         //?????????
		}
		if (time<60) ans+=60-time;           //??????????
		cout<<ans<<endl;
	}
	return 0;
}
