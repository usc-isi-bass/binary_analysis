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
	char a[100];int i,n;
	cin.get(a,100);                //?????
	n=strlen(a);
	for(i=0;i<n;i++)
	if(a[i]==' '&&a[i+1]==' ')    //???????
		a[i]='0';            //????????????0
		                     //?????????????????0
         for(i=0;i<n;i++)     
		if(a[i]!='0')        //???0???
			cout<<a[i];
	return 0;
}