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
   int q,i=0,j=0,w;
   char s[1000],t[1000];
   cin.getline(s,999);
   while(s[i]!='\0')
   {
	if(s[i]!=' '||(s[i]==' '&&s[i-1]!=' '))
	{
		cout<<s[i];
	}
	i++;
		
	}
	
	cin>>q;
	return 0;
}
