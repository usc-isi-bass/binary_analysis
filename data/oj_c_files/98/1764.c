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
	int m=0,i=0,j=0,k=0;
	cin>>m;
	int b[1000]={0},c=0;
	char a[1000][40];//??????
	for(i=0;i<m;i++)    //??????????????????
		cin>>a[i];
	for(i=0;i<m;i++)    //????????????
		for(j=0;;j++)
		{
			if(a[i][j]!='\0')
				b[i]++;
			else 
				break;
		}
	i=0;
	for(i=0;i<m;i++)//?k???????
	{
		k=k+b[i]+1;//??????
		
		if(k>81)//??k??80????
		{
			for(j=c;j<i-1;j++)
				cout<<a[j]<<" ";
			cout<<a[j]<<endl;
				k=0;c=i;i--;
		}
	}
	for(j=c;j<i-1;j++)
		cout<<a[j]<<" ";
	cout<<a[j]<<endl;
	
	return 0;
}