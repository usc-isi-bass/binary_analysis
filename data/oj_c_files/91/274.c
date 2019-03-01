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
    char a[100],b[100],*p,*q;
    gets(a);
    int c=strlen(a);
    p=a;
    q=b;
    for(int i=0;i<c;i++) 
    {
      if(i<c-1)
      *(q+i)=(char)(*(p+i)+*(p+i+1));//??????
      if(i==c-1)
      *(q+i)=(char)(*(p+i)+*p);//????????????? 
    }
    for(int i=0;i<c;i++)
    cout<<*(q+i);
    return 0;
}
