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

/*
 * ?????.cpp
 *
 *  Created on: 2010-11-7
 *      Author: acer
 */

int main()
{
	char Data[20][20],Word_1[20],Word_2[20];		//Data???????  Word_1,Word_2?????????????
	int i,t;

	int get_data(char Data[20][20]);				//????+????
	t=get_data(Data);
	cin>>Word_1;
	cin>>Word_2;

	if(strcmp(Data[0],Word_1)==0)					//???????????????????????
		strcpy(Data[0],Word_2);
	cout<<Data[0];
	for(i=1;i<t;i++)
	{
		if(strcmp(Data[i],Word_1)==0)
			strcpy(Data[i],Word_2);
		cout<<' '<<Data[i];
	}
	return 0;
}
int get_data(char Data[20][20])
{
	int i=0,j=0;
	char c;
	while((c=getchar())!='\n')						//??????
	{
		if(c==' ')									//?????? ??????????????????????????????????????
		{
			Data[i][j]='\0';
			i++;
			j=0;
			continue;
		}
		Data[i][j]=c;
		j++;
	}
	Data[i][j]='\0';
	return i+1;										//????????
}
