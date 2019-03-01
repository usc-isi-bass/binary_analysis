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
	int numl[51];
	int pl=0;
	char str[101];
	cin.getline(str,101);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{

		if(str[i]==str[0])
		{
			numl[pl]=i;
			pl++;
		}
		else if(str[i]!=str[0])
		{
			cout<<numl[pl-1]<<" "<<i;
cout<<endl;
			pl--;
		}
	}
   
	return 0;
}

