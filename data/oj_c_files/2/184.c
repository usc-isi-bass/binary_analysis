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

struct book
{
  int num;
  char aut[26];
}bo[999];
main()
{
  int n,i,j,k,count[26],max;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d %s",&bo[i].num,&bo[i].aut);
  }
  for(i=0;i<26;i++)
    count[i]=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<26;j++)
      {
        if(bo[i].aut[j]-65>=0&&bo[i].aut[j]-65<26)
          count[bo[i].aut[j]-65]++;
      }
  }
  max=0;
  for(i=0;i<26;i++)
  {
    if(count[i]>max)
      {max=count[i];k=i;}
  }
  printf("%c\n%d\n",k+65,max);
  for(i=0;i<n;i++)
  {
    for(j=0;j<26;j++)
      {
        if(bo[i].aut[j]-65==k)
          printf("%d\n",bo[i].num);
      }
  }
}