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
      int i,j,n;
      int count;
      char a[1000];
      gets(a);
      n=strlen(a);
      for(i=0;i<n;i++)
      {
                      if(a[i]>='a'&&a[i]<='z')
                      a[i]=a[i]-'a'+'A';
      }
     
      
     
               count=0;
            for(j=0;j<n;j++)
                      {  
                                      if(a[j]==a[0])
                                      count++;
                                      else  if(a[j]!=a[0])
                                      break;   
                      }
                      printf("(%c,%d)",a[0],count);   
      
      for(i=1;i<n;i++)
      {
                      count=0;
                      if(a[i]!=a[i-1])
                                      
                      
                      {
                      for(j=i;j<n;j++)
                      {
                                      if(a[i]!=a[j])
                                      break;   
                                      if(a[i]==a[j])
                                      count++;
                                      
                      }
                      printf("(%c,%d)",a[i],count);
                      }
      }
      getchar();
      getchar();
      getchar();
       getchar();
      getchar();
      getchar();
}
