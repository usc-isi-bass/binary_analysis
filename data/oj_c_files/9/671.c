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


struct p
{
       char id[11];
       int age;
};

int main()
{
    void sort(int n,struct p a[101]);
    int n,i;
    struct p a[101];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%s %d",&a[i].id,&a[i].age);
    }
    sort(n,a);
    
    return 0;
}

void sort(int n,struct p a[101])
{
     int i,k=0;
     for(i=0;i<n;i++)
     {
                     if((a[i].age)>k)
                     k=(a[i].age);
     }
     for(;k>59;k--)
     {
                   for(i=0;i<n;i++)
                   {
                                   if((a[i].age)==k)
                                   {
                                                    printf("%s\n",a[i].id);
                                                    (a[i].age)=0;
                                   }
                   }
     }
     for(i=0;i<n;i++)
     {
                     if((a[i].age)!=0)
                     {
                                      printf("%s\n",a[i].id);
                     }
     }
}