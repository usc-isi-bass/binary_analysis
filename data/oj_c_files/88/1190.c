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

//***************************************************************
//*?????????.cpp                                       *
//*??????                                                 *
//*?????2010?12?27?                                     *
//*??????????                                         *
//***************************************************************
int main()
{
	char letter[31];
	cin.getline(letter,31,'\n');//???????????
	int i=0;
	int j=0;
	int k=0;
	char temp[30][30];
	for(i=0;i<31;i++)
	{
		if(letter[i]>='0'&&letter[i]<='9')//?????????????
		{
			temp[k][j]=letter[i];
			j++;//?????
		}
		if((letter[i]<'0'||letter[i]>'9')&&(letter[i-1]>='0'&&letter[i-1]<='9'))//??????????
		{
			temp[k][j]='\0';//?????????
			cout<<temp[k]<<endl;//??
			k++;//k?????
			j=0;//??
		}
	}
	return 0;
}