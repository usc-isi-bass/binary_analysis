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
	char test[MAX_LENGTH];
	cin.getline(test,MAX_LENGTH);
	for (int i=0;test[i]!=0;i++)
	{

		if (test[i]==' ')
		{
			while (true)
			{
				i++;
				if (test[i]!=' ')  //????,???????
				{
					cout<<' ';//??????
					break;//????
				}
			}
		}
		cout<<test[i];
	}


	return 0;
}
