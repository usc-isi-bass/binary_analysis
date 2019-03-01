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

int a[1000],b[1000];
int cmp( const void *a, const void *b )
{
	return ( *( long *)a) - ( *( long *)b);
}
int main()
{
	int n;
	while(1)
	{
		int sum=0,i,j,end1,end2;
		cin>>n;
		if(n==0) 
			break;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		qsort( a, n, sizeof( int ), cmp );
		qsort(b, n, sizeof( int ), cmp );
		j=0;
		for(i=j=n-1,end1=end2=0;j>=end2&&i>=end1;j--)
		{
			if(a[i]>b[j])
			{
				sum++;
				i--;
			}
			else if(a[i]<b[j])
			{
				sum--;end1++;
			}
			else 
			{
				if(a[end1]>b[end2])//a??????b????
				{
					sum++;end1++;end2++; j++;
				}
				else if(a[end1]<b[end2])
				{
					sum--;end1++;
				}
				else
				{
					if(a[end1]==b[j])
					{
						end1++;
					}
					else
					{
						sum--;end1++;

					}

				}
			}
		}
		cout<<sum*200<<endl;
	}
	return 0;
}
