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

int num;
int fjys(int n,int m,int i,int d,int ji[20])
{
	int a;
	for(a=i;a<m;a++)
	{
		if(n%a==0)
		{
			ji[d]=a;
			int chenji=1,k;
			for(k=0;k<=d;k++)
				chenji=chenji*ji[k];
			if(chenji==m)
			{
				num++;
				break;
			}
			else 
				fjys(n/a,m,a,d+1,ji);
		}
	}
	return num;
}
int main()
{
	int m,n,j,result=0,ji[20]={0};
	cin>>m;
	for(j=1;j<=m;j++)
	{
		num=0;
		cin>>n;
		result=fjys(n,n,2,0,ji);
		cout<<result+1<<endl;
	}
		return 0;
}

