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

/**
 *???1.cpp
 *??????
 *??????????
 *???12?10?
 */
int main()
{
	char a[101];
	gets(a);     //?????
	char*q=a;     //???????????
	for(q=a+2;*q!='\0';q++) //??????????
	{
		if(*q==' ' && *(q-1)==' ')//???2????
		{
			char*qq=q; //???2??????
			while(*(q+1)!='\0')
			{
				*(q++)=*(q+1);  //????????????
			}
			*q='\0';   //????????????
			q=qq-1;   //????????????????
		}
	}
	q=a;          //???????????????
	cout<<q<<endl;
	return 0;
}