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
{char str1[80],str2[80];//?????????
int x=0,i;
cin.getline(str1,80);
cin.getline(str2,80);//??????
for(i=0;i<=79;i++)
	{if(str1[i]>=97)str1[i]=str1[i]-32;
    if(str2[i]>=97)str2[i]=str2[i]-32;}
x=strcmp(str1,str2);//??????????????
if(x==1)cout<<">"<<endl;//??????????
if(x==0)cout<<"="<<endl;
if(x==-1)cout<<"<"<<endl;
return 0;

}