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
      char a[1000];int i,j,k=0,l,tem=1;
      scanf("%s",&a); 
      l=strlen(a); 
      
      for(i=0;i<l;i++)
      if(a[i]>='a'&&a[i]<='z') a[i]=a[i]-32;
      if(l==1)
      printf("(%c,1)",a[0]);
      else
      do
      {
                      tem=1;
                      for(j=k+1;j<=l;j++)
                      {
                                        if(a[k]!=a[j])
                                        {
                                         printf("(%c,%d)",a[k],tem);
                                         k=j;
                                         break;
                                        }
                                        else
                                        tem++;
                      }                           
      }while(k<l);
    }
      
      
      
      
      
      


