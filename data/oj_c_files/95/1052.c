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
	char str[2][100];
	int i,n=0;
	cin.getline(str[0],99);
	cin.getline(str[1],99);
	for(i=0;str[0][i]!='\0'&&str[1][i]!='\0';i++)
	{   if(str[0][i]>96)
	       str[0][i]=str[0][i]-32;
	    if(str[1][i]>96)
	       str[1][i]=str[1][i]-32;
		if(str[0][i]==str[1][i])
			continue;
		else if(str[0][i]>str[1][i])
		{n++;cout<<">"<<endl;break;}
		else
		{n++;cout<<"<"<<endl;break;}
	}
	if(n==0)
		cout<<"=";
	return 0;
}