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


int n,i,j,k=1;
int a[35]={0},b[35];
void multiple()	//????????2???
{
	if(n==0) cout<<"1"<<endl;
	else
	{
		if(k==n)
		{
			for(i=34;i>=0;i--)
				if(a[i]!=0) break;
			for(j=i;j>=0;j--)
				cout<<a[j];		//?????????
		}
		else
		{
			b[0]=(a[0]*2)%10;
			for(i=1;i<35;i++)
				b[i]=(a[i]*2)%10+a[i-1]*2/10;	//???+??
			for(i=0;i<35;i++)
				a[i]=b[i];
			k++;
			multiple();
		}
	}
}

int main()
{
	cin>>n;
	a[0]=2;
	multiple();
	return 0;
}