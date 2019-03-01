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

struct Node
{
 char Info[200];
 struct Node *Next;
};
 
int Insert(struct Node *Head)
{
    struct Node *Tmp;
    Tmp=(struct Node *)malloc(sizeof(struct Node));
    gets(Tmp->Info);
    if(strcmp(Tmp->Info,"end")==0)
       {
         free(Tmp);
         return 0;
       }
    else
        {
          Tmp->Next=Head->Next;
          Head->Next=Tmp;
          return 1;
        }
}

int main()
{
    struct Node *Head,*Tmp;
    Head=(struct Node *)malloc(sizeof(struct Node));
    Head->Next=NULL;
    while(Insert(Head));
    Tmp=Head;
    while(Tmp->Next!=NULL)
         {
          Tmp=Tmp->Next;
          printf("%s\n",Tmp->Info);
         }
   return 1;
}          


