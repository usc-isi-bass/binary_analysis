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
 int q;
 char a[255];
 scanf("%d",&q);
 for(int i=0;i<=q-1;i++)
 { 
   scanf("%s",a);
   for(int j=0;j<=strlen(a)-1;j++)
    {
        if(a[j]==65){printf("T");}
        else if(a[j]==84){printf("A");}
        else if(a[j]==71){printf("C");}
        else if(a[j]==67){printf("G");}  
    }
  printf("\n");
  }
  int y; 
  scanf("%d",&y);
    return 0;
    }
    
