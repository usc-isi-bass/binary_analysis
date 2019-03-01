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

struct number{
  int num;
  struct number *next;
};
int main(void)
{
  int n,m,i;
  struct number *p,*head,*q;
  while(scanf("%d%d",&n,&m)&&n>0&&m>0){
    p=(struct number *) malloc(LEN);
    head=p; 
    for(i=0;i<n-1;i++){
      p->num=i+1;
      p->next=(struct number *) malloc(LEN);
      p=p->next;
    }
    p->num=n;
    p->next=head;
    q=p;
    while(p->next!=p){
      for(i=0;i<m-1;i++) p=p->next;
      q=p;
      p=p->next;
      q->next=p->next;
      p=q;
    }
    printf("%d\n",p->num);
  }
  return 0;
}
