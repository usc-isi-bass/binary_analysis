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
    int b,j=0;
    char *p,*q;
    char a[30],c[30];
    gets(a);//???????? 
    b=strlen(a);//???? 
    p=a;
    q=c;
    for(int i=0;i<30;i++)//??????????? 
    *(q+i)=':';
    for(int i=0;i<b;i++)
    {
      if(isdigit(*(p+i))!=0)//????????? 
      {
        *(q+j)=*(p+i);
        j=j+1;
      }
      if((isdigit(*(p+i))!=0)&&(i==b-1))//?????????????????? 
      cout<<atoi(c)<<endl;
      if(i>0)
      {
        if((isdigit(*(p+i))==0)&&(isdigit(*(p+i-1))!=0))//??????????????? 
        {
          cout<<atoi(c)<<endl;
          j=0;//??????? 
          for(int k=0;k<30;k++)
          *(q+k)=':';
        }
      }
    }
    return 0;
}
