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

//*****************************************************
//*?????????                                 *
//*?  ?????                                     *
//*?  ??1000012806                                 *
//*?????2010.11.26.                              *
//*****************************************************
int main()
{
	int x[1000], y[1000], t[1000] = {0};              //????x[1000],y[1000],t[1000]??????????????????????
	int num = 0, max, i = 0, j;
	char temp = ',';                                  //?temp????               
	char c;                                           //????????c
	do
	{
		cin>>x[i];                                    //????
		i++;                                          
		num ++;                                       //??????
		c=cin.get();
	}while(c!='\n');                                  //?c?????????????????????????
	i = 0;
	do                                                //?????y[i]
	{
		cin>>y[i];
		i++;
		c=cin.get();
	}while(c!='\n');

	for (i = 0; i < 1000; i ++)
	{
		for (j = 0; j < num; j ++)
		{
			if (x[j] <= i && y[j] > i)                //???????????????
				t[i] ++;
		}
	}
	max = t[0];
	for (i = 0; i < 1000; i ++)                       //???????
	{
		if (t[i] > max)
			max = t[i];
	}
	cout<<num<<" "<<max<<endl;                       //????????????
	return 0;
}
