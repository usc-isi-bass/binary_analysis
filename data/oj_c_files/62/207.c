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

//***************
//????2.cpp *
//?  ??zjq*
//***************
int main()
{
	char str[101];//?????
	int n=0,count=0,i,j,k;
	cin.get(str,101,'\n');//?get????????
	n=strlen(str);//?n????????
	for(i=0;i<n;i++)
	{
		if (str[i]!=' ')continue;
		for (j=i+1;j<n;j++)
		{
			if(str[j]==' ')
				count++;
			else
				break;
		}//????????????
		if(count>0)
		{
			for (k=i+1;k<n;k++)
				str[k]=str[k+count];
		}//?????????????????????
		count=0;
	}
	cout<<str;
	return 0;
}
