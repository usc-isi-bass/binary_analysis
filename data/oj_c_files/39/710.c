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
	int n,i,e=0;
	struct student
  {char name[20];
   int scorea;
   int scoreb;
   char a;
   char f;
   int b;
   int c;
	}d[100],s;
 s.c=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {scanf("%s%d%d %c %c %d",d[i].name,&d[i].scorea,&d[i].scoreb,&d[i].a,&d[i].f,&d[i].b);
  d[i].c=0;
  if(d[i].scorea>80&&d[i].b>0)
  d[i].c=d[i].c+8000;
  if(d[i].scorea>85&&d[i].scoreb>80)
  d[i].c=d[i].c+4000;
  if(d[i].scorea>90)
  d[i].c=d[i].c+2000;
  if(d[i].scorea>85&&d[i].f=='Y')
  d[i].c=d[i].c+1000;
  if(d[i].scoreb>80&&d[i].a=='Y')
  d[i].c=d[i].c+850;
  e=e+d[i].c;
 }
  for(i=0;i<n;i++)
  {if(d[i].c>s.c)
  s=d[i];}
  printf("%s\n%d\n%d",s.name,s.c,e);
 return 0;
}