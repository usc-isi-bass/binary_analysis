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

//???????a?????????????????a = a1 * a2 * a3 * ... * an???1 < a1 <= a2 <= a3 <= ... <= an?????????????????a = a???????
//Goofy 2010 12 05
void FenJie(int);
int counter=0;
int Befor=0;
int main()
{
	int n, x, i;
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>x;
		counter=0;
		Befor=x;
		FenJie(x);
		cout<<counter<<endl;
	}
	return 0;
}
void FenJie(int x)
{
	int i, temp=Befor;//?????????
	if (x==1)
	{
		counter++;
		return;
	}
	for(i=Befor; i>1; i--)//??????
	{
		if (x%i==0)
		{
			Befor=i;
			FenJie(x/i);
		}
		Befor=temp;
	}
	return;
}
