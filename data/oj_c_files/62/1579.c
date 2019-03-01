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

int i;
char a[210];
void xiaochu(char x)
{
	if(x==' ')  {*(a+i+1)='0';  i++;  xiaochu(*(a+i+1));}
}
int main ()
{
	int n;
	for(i=0;i<210;i++)  *(a+i)='0';
	cin.getline(a,210);
	for(i=0;i<210;i++)  {if(*(a+i)=='\0'){  n=i;break;}}
	for(i=1;i<n;i++)
	{
        if(*(a+i)==' ')   xiaochu(*(a+i+1));
	}
	for(i=0;i<n;i++)  
	{
		if(*(a+i)=='\0')   cout<<*(a+i)<<endl;
		else if(*(a+i)!='0')    cout<<*(a+i);
	}
		return 0;
}
