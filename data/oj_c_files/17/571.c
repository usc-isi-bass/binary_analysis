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
	int i, j, k, n;
	char b[101];
	while(cin.getline (b,101))
	{
		j = 0;
		int c[100] = {0}, a[100] = {0};
	    n = strlen(b);
	    for(i = 0; i < n; i++)
		{
		   if(b[i] == '(')
		   {
			   a[j] = i + 1;
			   j++;
		   }
		   if(b[i] == ')')
		   {
			   if(j > 0)
			   {
				   j--;
				   a[j] = a[j + 1];
			   }
			   else
				   c[i] = 1;
		   }
		}
		for(i = 0; i < n; i++)
			cout << b[i];
		cout << endl;
	    for(i = 0; i < j; i++)
		   c[a[i] - 1] = 2;
	    for(i = 0; i < n; i++)
		{
	   	   if(c[i] == 1)
			   cout << "?";
		   else
		   {
			   if(c[i] == 2)
				   cout << "$";
			   else
				   cout << " ";
		   }
		}
		cout << endl;
	};
	return 0;
}