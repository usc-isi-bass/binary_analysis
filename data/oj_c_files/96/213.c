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
	char str[101];
	int num[101],i,temp,result[101];
	cin>>str;

	for(i=0;i<101;i++)
		result[i]=num[i]=-1;
	for(i=0;str[i]!=0;i++)
		num[i]=str[i]-'0';
	i=0;
	temp=0;
	while(num[i]!=-1)
	{
		temp=temp*10+num[i];
		result[i]=temp/13;
		temp=temp%13;
		i++;
	}
	for(i=0;result[i]==0;i++);
	if(result[i]==-1) cout<<0;
	else
	{
		for(;result[i]!=-1;i++)
			cout<<result[i];
	}
	cout<<endl<<temp;
	return 0;
}