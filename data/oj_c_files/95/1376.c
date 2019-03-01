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

int main ()
{
char a[100]={0},b[100]={0};
int i,c,d;
cin.getline(a,81);
cin.getline(b,81);
for(i=0;i<100;i++)
{
c=(int)a[i];
d=(int)b[i];
if(64<c&&c<91)c=c+32;
if(64<d&&d<91)d=d+32;
if(c>d)
{cout<<">";return 0;}
else if(c<d)
 {cout<<"<";return 0;}
}
cout<<"=";
return 0;
}

 
 
 
