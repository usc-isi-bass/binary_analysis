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
	int i,j,num=0,a[1000]={0},b[1000]={0},max[1000]={0};
	for(i=0;i<1000;i++)
	{
		cin>>a[i];
		num++;                   //??
		if(getchar()=='\n')      //????????????Xi??????
			break;
	}
	for(i=0;i<1000;i++)
	{
		cin>>b[i];
		if(getchar()=='\n')      //????
			break;
	}
	for(i=0;i<num;i++)
		for(j=a[i];j<b[i];j++)
			max[j]++;            //max[j]??j????????
	for(i=0;i<1000;i++)
		if(max[0]<max[i])
			max[0]=max[i];       //???????????
		cout<<num<<' '<<max[0];
		return 0;		
}