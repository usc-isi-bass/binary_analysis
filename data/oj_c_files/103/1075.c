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
    char a[1000],b[10];
    int num[10]={1,1,1,1,1,1,1,1,1,1};
    scanf("%s",&a);
    int i=0;
    while (a[i]!='\0')
    {
          if (a[i]>='a' && a[i]<='z')
          a[i]=a[i]-'a'+'A';
          i++;
    }
    int j=0;
    b[j]=a[0];
    for (int i=1;i<=999;i++)
    {
        if (a[i]==a[i-1])
        num[j]++;
        else
        {
            j++;
            b[j]=a[i];
        }
        if (a[i]=='\0')
        break;
    }
    for (int i=0;i<=j-1;i++)
    printf("(%c,%d)",b[i],num[i]);
    printf("\n");

}