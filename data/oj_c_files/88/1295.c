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
	char str[100];
	gets(str);
	int i,flag;
	for(i=0;str[i]!='\0';i++)
	{
		if((int)str[i]<58&&(int)str[i]>47)
		{
			cout<<str[i];
			flag=1;
		}
		else if(flag==1)
		{
			cout<<endl;
			flag=0;
		}
	}
	cout<<endl;
	return 0;
}


