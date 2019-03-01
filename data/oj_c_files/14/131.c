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


struct student
    {
           int id;
           int ch;
           int math;
    };
int main()
{
    int max(int *p,int n);
    void shuchu(int *p,int n,int k,struct student student[100001]);
    struct student student[100001];
    int n,i,*p,k;
    p=(int *)calloc(100001,sizeof(int));
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d %d %d",&student[i].id,&student[i].ch,&student[i].math);
                    (*(p+i))=(student[i].ch+student[i].math);
                    
    }
    k=max(p,n);
    shuchu(p,n,k,student);
    k=max(p,n);
    shuchu(p,n,k,student);
    k=max(p,n);
    shuchu(p,n,k,student);
    
    return 0;
}

int max(int *p,int n)
{
    int k=0,i;
    for(i=0;i<n;i++)
    {
                    if((*(p+i))>k)
                    k=(*(p+i));
    }
    return (k);
}

void shuchu(int *p,int n,int k,struct student student[100001])
{
     int i;
     for(i=0;i<n;i++)
     {
                     if((*(p+i))==k)
                     {
                                   
                                   printf("%d %d\n",student[i].id,k);
                                   (*(p+i))=0;
                                   break;
                     }
     }
}