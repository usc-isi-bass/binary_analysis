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

char strin[503]={0},str2[10]={0};
int jilu[500]={0},used[500]={0};
int main()
{
	int i,j,len,k,n,pd=0,maxtime=0;
	cin>>n;
	getchar();
	cin.getline(strin,500);
	len=strlen(strin);
	for(i=0;i<=len-n;i++)
	{
		if(used[i]==1) continue;
		for(j=0;j<n;j++) str2[j]=strin[i+j];//??????????
		for(k=0;k<=len-n;k++)//???????
		{
			if(used[k]==1) continue;//?????,?????
			pd=1;//?????????
			for(j=0;j<n;j++) //??????,??????
			{
				if(strin[k+j]!=str2[j])
				{
					pd=0;//????????
					break;
				}
			}
			if (pd==1) //????
			{
				jilu[i]++;//??+1
				used[k]=1;//?????????
			} 
		}
		maxtime=(maxtime>jilu[i])?maxtime:jilu[i];//??????
	}
	if(maxtime==1)cout<<"NO";//??????1?,??no
	else//????????????????
	{
		cout<<maxtime<<endl;
		for(i=0;i<=len-n;i++)
		{
			if(jilu[i]==maxtime)
			{
				for(j=0;j<n;j++)cout<<strin[i+j];
				cout<<endl;
				
			}
		}
	}
	return 0;
}
