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
	int a[1000],b[1000],s,i,c[1000],max;
	memset(c,0,sizeof(c));
	cin>>a[0];
	char d;
	for(i=1;i<1000;i++)
		{
		if(cin.peek()==',')
		   {
			cin>>d;
			cin>>a[i];
		   }
		else
			break;
		}
	s=i-1;
	cin>>b[0];
	for(i=1;i<1000;i++)
			{
			if(cin.peek()==',')
			   {
				cin>>d;
				cin>>b[i];
			   }
			else
				break;
			}
	for(i=0;i<=s;i++)
		for(int j=a[i];j<b[i];j++)
			c[j]++;
	max=c[0];
	for(i=1;i<1000;i++)
		if(c[i]>max)
			max=c[i];
	cout<<s+1<<" "<<max;
	return 0;
}