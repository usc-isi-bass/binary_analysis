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

/**
*???4.cpp
*??????
*???????
*???12?1?
*/
int num,s=1; //??num??????s???????
void divide(int n,int a) //?????n????a??????
{
for(int i=n;i<=a/s;i++)//??
{
s*=i; 
if(s==a) //???????a???????+1
num++;
else if(s<a && a%s==0) //??????a,??????????
divide(i,a);
s/=i; //????
}
}
int main() //???
{
int n,i,a;
cin>>n; //????????
for(i=0;i<n;i++)
{
num=0; //????????0
cin>>a; //??????
divide(2,a); //??????
cout<<num<<endl; 
}
return 0;
}