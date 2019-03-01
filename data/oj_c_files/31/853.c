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
 char inf[1000];
 struct student *pNext;       
};
int main()
{
  int i,j,k,l,m,n;
  int count=0;
  struct student a[1000],*pHeader,*p;
  for(i=0;;i++)
  {
    gets(a[i].inf);
    count=count+1;
    if(strcmp(a[i].inf,"end")==0)
    break;             
  }
  pHeader=&a[count-2];
  for(i=count-2;i>=1;i--)
  {
    a[i].pNext=&a[i-1];                       
  }
  a[0].pNext=NULL;
  p=pHeader;
  while(p!=NULL)
  {
    puts(p->inf);
    p=p->pNext;
  }              
}
