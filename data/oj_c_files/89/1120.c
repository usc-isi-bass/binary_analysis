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

//*************************************************
//***?????????***
//***??????***
//***???2012.12.14***
//*************************************************
int main ()
{
	int n,a[10000],flag_a[10000],x,y,i,flag = 0;  //a[i]????????i;flag_a[i]??i??????
	memset(a,0,sizeof(a));                        //???????0    
	memset(flag_a,0,sizeof(flag_a));
	cin >> n;                                     //????
	cin >> x >> y;
	while(x != 0 || y != 0)
	{
		flag_a[x] = 1;                            //??????????1
		if (flag_a[y] != 1)
		{
			a[y]++;                               //?????????????1
		}
		cin >> x >> y;
	}
	for (i = 0; i < n; i++)                       //???????????????????????
	{
		if (flag_a[i] == 0 && a[i] == n - 1)
		{
			cout << i << endl;
			flag = 1;
		}
	}
	if (flag == 0)                                //??????"NOT FOUND"
	{
		cout << "NOT FOUND" << endl;
	}
	return 0;
}
