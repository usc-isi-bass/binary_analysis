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
 *  Main.cpp
 *
 *  Created on: 2010-11-5
 *      Author: 10010
 */

int main()
{
	void change(char str[]);				//??????
	char str_1[80],str_2[80];

	cin.getline(str_1,80);					//????
	cin.getline(str_2,80);

	change(str_1);							//????
	change(str_2);

	switch(strcmp(str_1,str_2))				//switch????
	{
	case 0:cout<<'=';break;
	case -1:cout<<'<';break;
	case 1:cout<<'>';break;
	}

	return 0;
}



void change(char str[])
{
	int i,t;
	t=strlen(str);
	for(i=0;i<t;i++)						 //???? ?????????????
		if(str[i]>='A'&&str[i]<='Z')
			str[i]-='A'-'a';
}
