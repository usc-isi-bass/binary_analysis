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

//****************************************
//*?????????                                    **
//*?????? 1100012907       **
//*???2011. 11.15                         **
//****************************************
int  k, l;
int i, j, p;
char str[500];
void huiwen();//????
int main()
{
	cin.getline(str,500);
	l = strlen(str);//???????
    huiwen();
	return 0;
}
void huiwen()
{               
	for(k = 1; k < l; k++)//????2?????????
	{       
	    for(i = 0; i < l; i++)
		{	 
	        if(str[i + k] == str[i])//????????
			{
			    for(p = i + 1; p < i + k; p++)
				{             
				    if(str[p] != str[2 * i + k - p]) break;//??????????????????
				}
			    if(p > (2 * i + k) / 2)//?????????????????
				{    
			        for(j = i; j <= i + k; j++)
					{
				        cout << str[j];
					}
			        cout << endl;
				}
			}
		}
	}
}