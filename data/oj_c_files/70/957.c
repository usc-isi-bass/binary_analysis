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
	int n,i,j;
	cin>>n;
	double num[100][2];
	for(i=1;i<=n;i++)
	{
		cin>>num[i][0]>>num[i][1];
	}
	double Mdis=0.0,dis;
	for(i=1;i<=n-1;i++){
		for(j=i+1;j<=n;j++){
			dis=sqrt(pow(num[i][0]-num[j][0],2)+pow(num[i][1]-num[j][1],2));
			if(Mdis<dis)
			{
				Mdis=dis;
			}
			else
				continue;
		}
	}
	cout<<Mdis<<endl;
	return 0;
}