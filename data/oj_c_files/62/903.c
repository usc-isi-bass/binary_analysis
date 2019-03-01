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
char s[200];
cin.get(s,200);
int n=strlen(s);

for(int i=0;i<n;i++)
{
	if(s[i]==' '&&s[i+1]==' ')
	{
	s[i]='\0';
	}
}
for(int i=0;i<n;i++)
{
	if(s[i]==0)continue;
	cout<<s[i];
}



return 0;
}