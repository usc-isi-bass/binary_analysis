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

//*************************************************************
//*                  ?????????                       *
//*                  ?????1000010573                     *
//*                  ?????2011?01?                     *         
//*************************************************************



char str[100];
int len = 0;
int num[100] = {0} ;
int paixu[100] = {0} ;
void search(char b,char g)
{
	int i = 0, n =0;
	for( n = 0; n < len ; n++ )
	{
		if(str[n] == g)
		{
			if( str[n-1] == b)
			{
				paixu[num[n]] = num[n-1];
	            i = n-1;
				for(;i <= len; i++)
				{   str[i] = str[i+2];  }
				i = n - 1;
				for(; i <= len; i++)
				{	num[i] =num[i+2];   }
			}
		}
	}
	if(str[0] != '\0')
	{
		search(b,g);
	}
}
int main ()
{
	
	char b, g,str1[100];
	cin.getline(str , 100);
	b = str[0];//?????????
	int i;
	len = strlen(str);
	for(i = 0;i<len ;i++)
	{
		num[i] = i;
	}
	for(i = 1; str[i] == str[0] ; i++);
	g = str[i];//?????????
	for( i = 0; i < len; i++)
    {   str1[i] = str[i];   }
	search(b,g);//????

	for( i = 0; i < len; i++)
	{
		if(str1[i] == g)
		{	cout << paixu[i] <<" "<<i<<endl;    }
	}

	
	return 0;
}