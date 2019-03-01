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




int num=0;
void asd (int i,int q)
{
	int j;
	for(j=q;j>1;j--)
	{
		if(i%j!=0)
			continue;
		if(i==j)
		{
			num++;
		}
		else
		{
			q=j;
			asd(i/j,q);
		}
	}
}
int main()
{
	int n,o;
	cin>>n;
	for(o=0;o<n;o++)
	{
		num=0;
		int a;
		cin>>a;
		asd(a,a);
		if(num==1)
			cout<<1<<endl;
		else
			cout<<num<<endl;
	}

}