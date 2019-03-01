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
	char jz[100];
	cin.getline(jz,100,'\n');
	int gs=strlen(jz);
	int i;
	for(i=0;i<=gs-1;i++)
	{
		if(jz[i]!=' ')
		cout<<jz[i];
		else break;
	}//?????????? 
	for(i;i<=gs-1;i++)
	{
		if(jz[i]!=' '&&jz[i-1]==' ')
		{
			cout<<' '<<jz[i];
	    }
	    else if(jz[i]!=' '&&jz[i-1]!=' ')
	    cout<<jz[i];
	}//??????????????? 
return 0;
}
