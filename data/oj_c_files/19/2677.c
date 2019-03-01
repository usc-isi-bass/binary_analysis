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
	char ch[200];
	char result[200];
	char f[200],r[200];

	gets(ch);
	cin >> f >> r;
	
	
	ch[strlen(ch)+1]=0;
	ch[strlen(ch)]=' ';

	memset(result,0,200);
	int last = 0;
	for(int i=0;i<strlen(ch);i++)
	{
		if(ch[i]==' ')
		{
			ch[i]=0;
			char *p =ch+last;
			if(strcmp(p,f)==0)
				sprintf(result,"%s %s",result,r);
			else
				sprintf(result,"%s %s",result,p);
			last = i+1;
			ch[i]=' ';
		}
	}
	cout << result+1 << endl;
	return 0;
}