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
{int a[3]={3,5,7},b,m=0,c[3],j=0,i;
cin>>b;
for(i=0;i<3;i++)
{if(b%a[i]==0)
{m=m+1;
c[j]=a[i];j=j+1;}}
if(m==0)
cout<<"n";
else if(m==1)
cout<<c[0];
else
{for(j=0;j<m-1;j++)
{cout<<c[j]<<" ";}
cout<<c[m-1];}
return 0;
}

