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
{      char a[100],c[100];     
       gets(a);      
int i,b,d,e;     
 if (a[1]=='\0')            
{                
 printf("0\n");                
 printf("%c",a[0]);            
}     
 else if (a[2]=='\0'&&a[0]-'0'==1)     
 {           
 if (a[1]-'0'<3)            
{              
  printf("0\n");             
   printf("%c",a[0]);             
   printf("%c",a[1]);          
  }           
 else          
  {               
 printf("1\n");              
  printf("%d",a[1]-'0'-3);            }      }       else       {            i=0;            b=a[i]-'0';            while (a[i]!='\0')          {         d=b/13;         e=b%13;         b=e*10+(a[i+1]-'0');         c[i]=d+'0';         i++;          }       if (c[1]!='0')       {           i=1;           while (c[i]>='0'&&c[i]<='9')           {               printf("%c",c[i]);               i++;           }       }       else if (c[1]=='0')       {           i=2;           while (c[i]>='0'&&c[i]<='9')           {               printf("%c",c[i]);               i++;           }       }      printf("\n%d",e);      }     getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();}
