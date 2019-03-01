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
{char str[101];
int i,j,temp,count=1;
cin.getline(str,101);
for(i=strlen(str);i>=0;i--)
	{
	if((str[i]==' ')&&(count!=1)){for(j=i+1;j<temp;j++)cout<<str[j];
    cout<<" ";
	temp=i;}
	if((str[i]==' ')&&(count==1)){temp=strlen(str);
	                              for(j=i+1;j<temp;j++)cout<<str[j];cout<<" ";//??????????????
	                                count=2;temp=i; }
	}
for(i=0;i<strlen(str);i++){cout<<str[i];if(str[i+1]==' ')break;}//????????????


	return 0;
}
