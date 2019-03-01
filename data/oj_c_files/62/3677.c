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
char a[5000];
int i,j,t;
cin.getline(a,5000);
t=strlen(a);
for(i=0;i<t;i++)
if(*(a+i)==' ')
{if(*(a+i+1)==' ')
    {for(j=i+1;j<t;j++)
         *(a+j)=*(a+j+1);
    t--;
    i--;
}}
cout<<a<<endl;
return 0;
}

