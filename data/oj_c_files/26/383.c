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
	char str[100],*p=NULL;//?????????
	cin.get(str,100);//?????
	int l=strlen(str);//????
	p=str;//???
	for(int i=0;i<l;i++)
	{
		if(*(p+i)==' '&&*(p+i+1)==' ')//????
		{
			for(int j=i+1;j<l;j++)
			{
				*(p+j)=*(p+j+1);//???????
			}
			i=i-1;
		}
	}
	cout<<str<<endl;//?????????
	return 0;
}