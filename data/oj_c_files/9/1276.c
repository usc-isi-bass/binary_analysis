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

struct Student
{
    char id[10];
    int age; 
}ill[100];

int main()
{ 
    int i,j,n,q;
    char p[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s%d",&ill[i].id,&ill[i].age);
    
    for(j=0;j<n-1;j++)
        for(i=n-1;i>j;i--){
            if(ill[i].age>=60&&ill[i].age>ill[i-1].age){
                strcpy(p,ill[i].id);        q=ill[i].age;
                strcpy(ill[i].id,ill[i-1].id);  ill[i].age=ill[i-1].age;
                strcpy(ill[i-1].id,p);      ill[i-1].age=q;    
            }
        }
    for(i=0;i<n;i++)
        printf("%s\n",ill[i].id);       
}