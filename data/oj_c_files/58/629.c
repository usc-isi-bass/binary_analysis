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
 int n,i,j,l,sign;      //n???,i,j?????,l??????,sign??????
 char str[81];          //str??????
 cin>>n;                //????
 cin.get();
 for(i=1;i<=n;i++)
  {
   sign=1;              //???????1
   for(j=0;j<81;j++)
    str[j]='\0';        //?????
   cin.getline(str,81,'\n');         //?????
   l=0;
   while(str[l]!='\0')
    l++;                //???????
   if(str[0]<'A'||(str[0]>'Z'&&str[0]<'_')||(str[0]>'_'&&str[0]<'a')||str[0]>'z')
    sign=0;             //?????
   for(j=1;j<l;j++)
    if(str[j]<'0'||(str[j]>'9'&&str[j]<'A')||(str[j]>'Z'&&str[j]<'_')||(str[j]>'_'&&str[j]<'a')||str[j]>'z')
     sign=0;            //???????????
   cout<<sign<<endl;    //?????
  }
 return 0;
}