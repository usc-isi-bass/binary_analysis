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

int main()                                           //?????
{
	int a[10][10]={0};                               //????a????????
	int max[10]={0};                                 //????max????????
	int m[10]={0};                                   //????m???????????
	int min[10]={0};                                 //????min????????
	for(int i = 1 ; i <= 5 ; i++)                    //????
	{
		for(int j = 1 ; j <= 5 ; j++)
		{
			cin>>a[i][j];
		}
	}
    
	for(int i = 1 ; i <= 5 ; i++)                    //?????????????????max????????????
	{
		max[i]=a[i][1];
		for(int j = 1 ; j <= 5 ; j++)
		{
			if(max[i]<=a[i][j])
			{
				max[i]=a[i][j];
				m[i]=j;
			}
		}
	}

    for(int j = 1 ; j <= 5 ; j++)                    //?????????????????min
	{  
		min[j]=a[1][j];
		for(int i = 2 ; i <= 5 ; i++)
		{
			if(min[j]>a[i][j])
			{
				min[j]=a[i][j];
			}
		}
	}
    int count=0;                                     //????count????
	for(int i = 1 ; i <= 5 ; i++)                    //???????? ??????????????
	{
		if(max[i]==min[m[i]])
		{
			cout<<i<<" "<<m[i]<<" "<<max[i]<<endl;
		}
		else
			count++;		
	}
	if(count==5)                                     //????5????�not found�
		cout<<"not found"<<endl;
	return 0;                                        //???????????????????
}
