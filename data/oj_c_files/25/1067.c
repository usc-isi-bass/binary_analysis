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
    int n;
	cin>>n;
	cout<<endl;
	int num[1001];
	for (int i=0;i<1001;i++)
		num[i]=0;
	num[0]=1;//???????1
	for (int i=0;i<n;i++)
	{//??n??????
	   for (int j=0;j<1000;j++)
	   {//?????????
	      num[j]=num[j]+num[j];
	   }
	   for (int j=0;j<1000;j++)
	   {//??????????10??????
	      if (num[j]>=10)
		  {
		     num[j+1]=num[j+1]+1;
			 num[j]=num[j]-10;
		  }
	   }
	}
	int k=1000;
	while (num[k]==0) k--;//???????0???
	for (int i=k;i>=0;i--)//??????
		cout<<num[i];
	cout<<endl;
	return 0;
}


