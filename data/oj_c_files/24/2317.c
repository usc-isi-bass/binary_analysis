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

//*************************************
//* ????1.cpp *
//* ??????1200012844 *
//* ?????2012?12?25? *
//* ??????????? *
//**************************************


int main()
{
	struct WORD
	{
		char word[40];
		int wordLen;
	}words[200];//???????

	int i = 1, j, k, count = 0;
	char a;

	while(cin >> words[i].word)
	{		
		words[i].wordLen = strlen(words[i].word);//??????
		count++;//????????
		i++;
		cin.get(a);
		if(a == '\n')//????
			break;
	}

	int flag = 0;//??????????????????
	for(i = 1; i <= count; i++)
	{
		k = 0;
		if(flag == 1)
			break;
		for(j = 1; j <= count; j++)
		{
			if(words[i].wordLen < words[j].wordLen)
				break;
			else
				k++;
			if(k == count)
			{
				cout << words[i].word << endl;
				flag = 1;
			}
		}
	}//?????????

	flag = 0;
	for(i = 1; i <= count; i++)
	{
		k = 0;
		if(flag == 1)
			break;
		for(j = 1; j <= count; j++)
		{
			if(words[i].wordLen > words[j].wordLen)
				break;
			else
				k++;
			if(k == count)
			{
				cout << words[i].word << endl;
				flag = 1;
			}
		}
	}//?????????
	return 0;
}