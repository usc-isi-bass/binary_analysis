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

//******************************************************************************
//???????? 
//?????? 
//???11-1 
//******************************************************************************


int main()
{
	int a[111][111] = {0};                    //???????????? 
	int b[111][111] = {0};                    //???????????? 
	int n;                                    //????? 
	char c[111][111];                         //?????????? 
	int day;                                  //??? 
	int sum = 0;
	char ch;                                  //?????????????? 
	 
	cin >> n;
	
	for(int i = 1; i <= n; i ++)              //??????????? 
	cin >> c[i];
	
	for(int i = 1; i <= n; i ++)                 
	{ 										   //?????????"." = 1, "#" = 0, "@" = -1 
		
		for(int j = 1; j <= n; j ++)          //??????1-n??1-n?????????????? 
		{
			ch = c[i][j - 1];
		
			if(ch == '.')
			a[i][j] = 1;
		
			else if(ch == '#')
			a[i][j] = 0;
		
			else
			a[i][j] = -1;
		}
		
	}
	
	cin >> day;                                 //??a????????? 
	
	for(int i = 0; i < day - 1; i ++)           //??n???????n-1??? 
	{
		for(int k = 1; k <= n; k ++)
		for(int j = 1; j <= n; j ++)
		b[k][j] = a[k][j];	                    //??a?????b?????b????a 
		
		for(int r = 1; r <= n; r ++)
		for(int co = 1; co <= n; co ++)
		{
			if(a[r][co] == -1)                  //?????????????????? 
			{
				if(a[r - 1][co] == 1)           //????????????????= -1 
				b[r - 1][co] = -1;
				
				if(a[r + 1][co] == 1)
				b[r + 1][co] = -1;
				
				if(a[r][co - 1] == 1)
				b[r][co - 1] = -1;
				
				if(a[r][co + 1] == 1)
				b[r][co + 1] = -1;
			}
		}
		
		for(int r = 1; r <= n; r ++)              //????????b??????b??a??????????? 
		for(int co= 1; co <= n; co ++)
		a[r][co] = b[r][co];
	}
	
	
	
	for(int i = 1; i <= n; i ++)                  //???????-1????????? 
	for(int j = 1; j <= n; j ++)
	if(a[i][j] == -1)
	sum ++;
	
	cout << sum;

	
	return 0;
}
