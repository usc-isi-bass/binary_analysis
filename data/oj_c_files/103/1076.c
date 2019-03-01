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
    char a[100];
    int n,i,count=1,j=0;
    scanf("%s",&a);
    while(a[j]!='\0')
    {             
     if(a[j]>='a'&&a[j]<='z') a[j]=a[j]-32; 
     j++;             
     }
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]==a[i+1])
      count+=1;
      else {printf("(%c,%d)",a[i],count);count=1;continue;}
     }
}
