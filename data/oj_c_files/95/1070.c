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
 * ?????@.cpp
 *
 *  Created on: 2011-10-31
 *      Author: Administrator
 */
int main()//?????
{//?????
	int i;
	char str1[81];//?????
	char str2[81];//?????
	cin.getline(str1,81);//????
	cin.getline(str2,81);//????
	for(i=0;i<81;i++)//??
		for(i=0;i<=90;i++)
		{if(str1[i]>64&&str1[i]<91)
			str1[i]=str1[i]+32;
		if(str2[i]>64&&str2[i]<91)
			str2[i]=str2[i]+32;//???????
		}
	switch (strcmp(str1,str2))
	{case-1:cout<<"<";break;
	case 0:cout<<"=";break;
	case 1:cout<<">";break;
	}
	return 0;//???????????????????
}//????
