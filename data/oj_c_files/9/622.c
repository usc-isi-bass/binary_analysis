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
   
    int n,b[100],d[100],j=0,k,l,t,i;
    scanf("%d",&n);
    char a[n][10],c[n][10];//??????? ???????????? 
    for(i=0;i<n;i++)
    scanf("%s %d",a[i],&b[i]);
    k=0;
    for (i=0;i<n;i++)
    {
        if(b[i]>=60)
        {
        d[k]=b[i];
        strcpy(c[k],a[i]);
        k++;
        }
    }
     l=k;//k??0?????????????????????????????k?1???????? 
     char r[10];//??????????? 
     for(k=0;k<l-1;k++)//??60??????? 
      {
                       for(j=0;j<l-1-k;j++)   
                       if(d[j]<d[j+1])//????????????????????????? 
                       {
                                      t=d[j];                
                                      d[j]=d[j+1];
                                      d[j+1]=t;
                                      strcpy(r,c[j]);
                                      strcpy(c[j],c[j+1]);
                                      strcpy(c[j+1],r);
                       }
      }
      for (j=0;j<l;j++)
      {
           printf("%s\n",c[j]);//?????????????? ???????? 
          }
      for(i=0;i<n;i++)//???????60??????????????ID 
      {
           if(b[i]<60)
           printf("%s\n",a[i]);
      }
      }   
                        
