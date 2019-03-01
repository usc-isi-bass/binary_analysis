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
{ char zi[50],mu[50];
  int i,j,flag=0,zichang,muchang;
 
 scanf("%s %s",zi,mu);
 zichang=strlen(zi);
 muchang=strlen(mu);
 for(i=0;i<=muchang-zichang;i++)
 { for(j=0;j<=zichang-1;j++)
   { if(zi[j]!=mu[i+j])
     {flag=1;break;}
    }
   if(flag!=1)
   { printf("%d",i);
     break;}
   flag=0;}
 getchar();
 getchar();
}