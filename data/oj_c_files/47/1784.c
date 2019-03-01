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
int str[100];
int n,i,temp;
cin>>n;
for(i=0;i<n;i++)
   cin>>*(str+i);                                                    //?? 
for(i=0;i<n/2;i++)
   {
   temp=*(str+i);
   *(str+i)=*(str+n-i-1);                                              //???????? 
   *(str+n-i-1)=temp;
   }
for(i=0;i<n-1;i++)                                                    //????? 
   cout<<*(str+i)<<" ";
cout<<*(str+n-1);
return 0;
}