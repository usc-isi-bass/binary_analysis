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

struct stu
{
       char ss[10000];
       struct stu *next;
};
int main()
{
    long int i,j,k,l,m,n;
    struct stu *p,*p1;
    p1=p=(struct stu*)malloc(len);
    p1=null;
    while (1)
    {
          p=(struct stu*)malloc(len);
          gets(p->ss);
          p->next=p1;
          p1=p;
          if (strcmp(p->ss,"end\0")==0) break;
    }
    p=p->next;
    while (p!=null)
    {
          puts(p->ss);
          p=p->next;
    }
    scanf("%d",&i);
}