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
	int i=0,j=0,num[16]={0},count=0,key=0;
	cin>>num[0];
	while(num[0]!=-1)
	{
		for(i=0;num[i]!=0;i++)
		{
			cin>>num[i+1];
		}
		count=i;
		key=0;
		for(i=0;i<count;i++)
			for(j=i;j<count;j++)
				if(num[i]==2*num[j]||num[j]==2*num[i])
					key++;
		cout<<key<<endl;
		for(i=0;i<16;i++)
			num[i]=0;
		cin>>num[0];
	}
	return 0;
}