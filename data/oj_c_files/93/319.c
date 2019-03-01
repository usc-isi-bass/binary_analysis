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
	int iNumber,i,iCount_can=0,iCount_blank_space=0;//iNumber???????iCount_can????????????????iCount_blank_space????????????
	cin>>iNumber;
	for(i=3;i<8;i++,i++)
	{
		if(iNumber%i==0)                            //???????i??
		{
			if(iCount_blank_space)
				cout<<' ';
			cout<<i;
			iCount_can++;
			iCount_blank_space=1;                   //????????i?????iCount_blank_space=1??????????????????
		}
	}
	if(iCount_can==0)
		cout<<'n'<<endl;
    return 0;
}