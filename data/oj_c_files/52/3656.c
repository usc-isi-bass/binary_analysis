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

/**********************
*????
*?????
***********************/
int main()
{
	int n, m, a[100]={0};                //??????? n? ????m?
	cin >> n >> m;
	for(int i=0; i < n; i++)             //??n???
	{
		cin >> a[i];
	}
	for(int j=0; j < m; j++)              //????m?
	{
		int t=a[n-1];                     //????????
		for(int k = n-1; k >= 0; k--)     //?????????
		{
			if(k > 0)
			{
				*(a+k)=*(a+k-1);          //?????????
			}
			else
			{
				if(k == 0)
				{
					*a=t;                //????????????
					t=*(a+n-1);
				}
			}
		}
	}
	int mark=0;     //?????
	for(int i1=0; i1 < n; i1++)
	{
		if(mark == 0)//??????????
		{
			cout<<*(a+i1);
			mark++;
		}
		else    //?????????
		{
			cout<<" "<<*(a+i1);
		}
	}
return 0;
}
