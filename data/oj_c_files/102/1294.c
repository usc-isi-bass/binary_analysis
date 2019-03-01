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

int compInc(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
struct student
{
    float height;
    char sex[7];
};
main()
{
    int n,q=0,j=0;
    struct student stu[40];
    float girl[40],boy[40];
    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
        scanf("%s%f",stu[i].sex,&stu[i].height);
    for(int i = 0;i < n;i ++)
    {
        if(stu[i].sex[0]=='f')
            girl[q++]=stu[i].height;
        else
            boy[j++]=stu[i].height;
    }
    qsort(boy,j,sizeof(boy[0]),compInc);
    qsort(girl,q,sizeof(girl[0]),compInc);
    printf("%.2f",boy[0]);
    for (int i = 1;i < j;i++)
        printf(" %.2f",boy[i]);
    for (int i = q-1;i >=0 ;i--)
        printf(" %.2f",girl[i]);
    
}