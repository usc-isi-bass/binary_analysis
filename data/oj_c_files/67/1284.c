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
	int i,k;
	double all[100]={0},good[100]={0};//??????????????????
	double rate[100]={0};//????????
	cin>>k;
	cin>>all[0]>>good[0];//???????????
	rate[0]=good[0]/all[0];//????
	//cout<<rate[0];
	for(i=1;i<k;i++)
	{
		cin>>all[i]>>good[i];//??????
		rate[i]=good[i]/all[i];//??????
		//cout<<rate[i];
		if((rate[i]-rate[0])>0.05)cout<<"better"<<endl;//?????
		else if((rate[0]-rate[i])>0.05)cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}