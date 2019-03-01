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
      char a[1000];
      int b[1000],num=0,i,j,k,check=0;
      b[0]=0;
      gets(a);
      for(i=0;a[i]!='\0';i++)
      {
      if(a[i]==' ')
      check++;
      }
      if(check==0)
      puts(a);
      else{
      for(j=1;j<=check;j++)
      {
      for(i=b[j-1]+1;a[i]!='\0';)
      {
      if(a[i]==' ')
      {b[j]=i;
      break;}
      else i++;
      }
    
      }
      
     b[check+1]=1000;
      for(j=check;j>0;j--)
      {
      for(i=b[j]+1;i<b[j+1]&&a[i]!='\0';i++)
      printf("%c",a[i]);
      printf(" ");
      }
      for(i=0;a[i]!=' ';i++)
      printf("%c",a[i]);
      }
      getchar();
      getchar();
}