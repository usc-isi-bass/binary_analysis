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

int DFS(int ,int );
int main()
{
	int q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
	int n;
	int h=0;
	cin>>n;
	cout<<DFS(n,n)<<endl;
	}

	return 0;
}
int DFS(int n,int p)
{
	int ans=0;
	if(n==1)return 1;
	for(int i=2;i<=p;i++)
	{
		if(n%i==0)
		{
			ans=ans+DFS(n/i,i);
		}
	}
	return ans;

}