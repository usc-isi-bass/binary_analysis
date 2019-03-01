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
	int i=0,n;
	char ch[500];
    while(1)
	{
		ch[i]=cin.get();
		if(ch[i]=='\n')
			break;
		else if(ch[i]!=' ')
			i++;
		else if(ch[i-1]!=' ')
			i++;
	}
	n=i;
	for(i=0;i<n;i++)
		cout<<ch[i];
	return 0;
}