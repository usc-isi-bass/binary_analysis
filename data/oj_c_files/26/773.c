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
	char *haha,sen[10000];
	int i=0,count;
	cin.getline(sen,10000);
    count=1;

	haha=sen;
	while(sen[i]!='\0')
	{
		
		if(sen[i]!=' ') 
		{
			count=0;
			cout<<*(haha+i);
		}
		else 
		{
			if(count==0) 
			{
				cout<<" ";
				count++;
			}

		}
		i++;
	}

	return 0;
}

