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

int max(int t[])                            //?????
{
	int m=0;
	for (int i=0;i<1000;i++)
		if (m<t[i])
			m=t[i];
	return m;
}
int main()
{
	int i=0,n,k;
	int x[1000]={0},y[1000]={0},t[1000]={0};
	char a;
	do                                      //?????
	{
		cin>>x[i];
		cin.get(a);
		i++;
	}while(a==',');
	n=i;                                    //???
	i=0;
	do                                      //?????
	{
		cin>>y[i];
		cin.get(a);
		i++;
	}while(a==',');
	for (k=0;k<1000;k++)                    //??????????
		for (i=0;i<n;i++)
			if (k>=x[i]&&k<y[i])
				t[k]=t[k]+1;
	cout<<n<<" "<<max(t)<<endl;
	return 0;
}