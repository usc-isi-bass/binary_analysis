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


int people[500000]={0};
int main()
{
	int n;

	int a,b;

	cin>>n;
	while(cin>>a>>b)
	{
		people[a]=-1;
		if (people[b]>=0)
		{
			people[b]++;
			if (people[b]==n-1)
			{
				cout<<b<<endl;
				return 0;
			}

		}
	}

	cout<<"NOT FOUND"<<endl;

	

}

/****************


/****************/