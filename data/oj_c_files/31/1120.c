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
    char num[15];
    char name[30];
    char sex;
    char age[3];
    char grade[10];
    char ad[15];
}stu[1000]={0};

int main()
{
    int i=0;
    while(1)
    {
        scanf("%s",stu[i].num);
        if(stu[i].num[0]=='e')
            break;
        else
        {
            scanf("%s %c %s %s %s",stu[i].name,&stu[i].sex,stu[i].age,stu[i].grade,stu[i].ad);
            i++;
        }
    }   
    i=i-1;
    for(;i>=0;i--)
    {
        printf("%s %s %c %s %s %s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].grade,stu[i].ad);
    }
    return 0;
}