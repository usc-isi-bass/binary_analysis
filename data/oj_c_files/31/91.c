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

main()
{
   struct h
   {char mun[10];
    char name[20];
    char sex;
    int age;
    float score;
    char add[20];
    struct h *p;
   } ;

   struct h *a,*b;  
   a=len;
   a->p=NULL;
   int i;
   for(i=0;i<1000;i++)
   {scanf("%s",a->mun);
	if(!strcmp(a->mun,"end")) break;
    scanf("%s %c %d %f %s",a->name,&a->sex,&a->age,&a->score,a->add);
   b=len;
   b->p=a;
   a=b;}
   a=a->p;
   while(a)
   {
     printf("%s %s %c %d %g %s\n",a->mun,a->name,a->sex,a->age,a->score,a->add);
     a=a->p;
   }
  
}