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
char a[100];
int b[100];
int i,k,n;
scanf("%s",a);
      for(i=0;a[i]!='\0';i++)
     {      
                        if(a[i]>='a'&& a[i]<='z')
                        a[i]=a[i]-'a'+'A';
     }
     i=0;
     while(a[i]!='\0')
     {
     for(k=i;;k++)
     {
         if(a[k]!=a[i])
         break;             
     } 
     printf("(%c,%d)",a[i],k-i); 
     i=k;               
     }
}