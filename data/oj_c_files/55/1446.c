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
    char c[100],t;
    int d[100]={0};//??????????
    int a,b,n,i=0,lc;//a,b???????? 
    int number=0,decimal=0; 
    cin>>a>>c>>b;
    if(c[0]=='0')cout<<'0';
    lc=strlen(c); 
    for(i=0;c[i]!='\0';i++)
    {
       if(c[i]>='0'&&c[i]<='9')
           decimal=c[i]-'0';
       if(c[i]>='a'&&c[i]<='z')
          decimal=c[i]-'A'-22;
       if(c[i]>='A'&&c[i]<='Z')
           decimal=c[i]-'A'+10;
       number=number*a+decimal;
    }
    //cout<<number<<endl;
    i=0;
    while(number>0)
    {
       d[i]=number%b;
       number=number-d[i];
       number/=b;
       i++;  
    }
    i--;
    for(;i>=0;i--)
    {
      if(d[i]>=10)
      {t=d[i]+'A'-10;cout<<t;}
      else  
      cout<<d[i];
    }
    
      int ss;cin>>ss;
      return 0;
}
           
    
