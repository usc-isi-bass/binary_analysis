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
	int num1[1000]={0},num2[1000]={0};
	int i=1,j=1,k;
	cin>>num1[0];
	while(cin.get()==',')
	{
		cin>>num1[i];
		i++;
	}
	cin>>num2[0];
	while(cin.get()==',')
	{
		cin>>num2[j];
		j++;
	}
	cout<<i<<" ";
	int num[1000]={0};int temp=0;
	for(k=0;k<1000;k++)
	{
		for(j=0;j<i;j++)
			if(num1[j]<=k&&k<num2[j])
				num[k]++;
		if(num[k]>temp)
			temp=num[k];
	}
	cout<<temp;
	return 0;
}