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

int main()
{
	char str[100]; //??????
	int i,n=0,t,m=0; //??????
	gets(str); //?????
	n=strlen(str); //??????????
	for(i=n-1;i>=0;i=i-1) //?????????????????????
	{
		if(str[i]!=' ')
		{
			m=m+1;
		} //m????????
		else
		{
			for(t=i+1;t<i+1+m;t++)
				printf("%c",str[t]); //??????????
			m=0;
			printf(" "); //????????????
		}
	}
	for(t=i+1;t<i+1+m;t++)
		printf("%c",str[t]); //???????
	return 0;
}
//??????????�I am a student�??????�student am a I�????????????????�WrongAnwser�?????????????��