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
	int s[1000];
	int N,i,j,count=0;
	for(i=0;i<1000;i++)
		s[i]=-1;
	s[0]=1;
	cin>>N;
	if(N==0)
	{
		cout<<"1"<<endl;
		return 0;
	}
	else
	{
		do
		{
			for(i=0;s[i]!=(-1);i++)
				s[i]=s[i]*2;
			i=0;
			do
			{
				if(s[i]>9)
				{
					s[i]-=10;
					if(s[i+1]==(-1))
					{
						s[i+1]=1;
					}
					else
						s[i+1]+=1;
				}
				i++;
			}
			while(s[i]!=(-1));
			count++;
		}
		while(count<N);
		for(i=0;;i++)
		{
			if(s[i]==(-1))
			{
				for(j=i-1;j>=0;j--)
					cout<<s[j];
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}



