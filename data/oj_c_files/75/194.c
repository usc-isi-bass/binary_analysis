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
	int people[1000][2],sum=1,time[1000]={0};
	cin>>people[0][0];
	while(scanf(",%d",&people[sum++][0]));
	cin>>people[0][1];
	sum=1;
	while(scanf(",%d",&people[sum++][1]));

	for(int i=0;i<sum;i++){
		for(int j=people[i][0];j<people[i][1];j++)	time[j]++;
	}
	int max=0;
	for(int i=0;i<1000;i++){
		if(time[i]>max) max=time[i];
	}
	cout<<sum-1<<" "<<max<<endl;
}