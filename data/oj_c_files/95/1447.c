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
	int i,t,l1,l2;
	char str1[80],str2[80];
	cin.getline(str1,80);
	cin.getline(str2,80);
	l1=strlen(str1);
	l2=strlen(str2);
    for(i=0;i<l1;i++)
	{
		if(str1[i]<='Z') str1[i]+=32;
	}
    for(i=0;i<l2;i++)
	{
		if(str2[i]<='Z') str2[i]+=32;
	}
    t=strcmp(str1,str2);
	if(t==0) cout<<"="<<'\n';
	else if(t<0) cout<<"<"<<'\n';
	else cout<<">"<<'\n';
	return 0;
}


	