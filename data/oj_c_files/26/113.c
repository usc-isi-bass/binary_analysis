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
	int i,g;
	char a[100];
	gets(a);
	g=0;
	for(i=0;i<strlen(a);i++)
	{
		if(g==0)
		{
			if(a[i]!=' ') cout<<a[i];
			else{
				g=1;
				cout<<a[i];  //??????g??????????????
			}
		}
		else 
		{
			if(a[i]==' ')  continue;//????????????????????
			else{
				g=0;
				cout<<a[i];
			}
		}
	}
	cout<<endl;
	return 0;
}