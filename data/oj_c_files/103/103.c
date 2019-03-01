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
    char a[1000];
    gets(a);
    int i=0;
    int l,m;
    l=strlen(a);
    while(i<l)
    {
          int k=1;
         //int q=0;
         m=i+1;
         while((a[i]==a[m]||a[i]==a[m]-'a'+'A'||a[i]==a[m]+'a'-'A')){
                  k++;  
                  m++;                                                
         }
         if (a[i]>='a'&&a[i]<='z')
                  a[i]=a[i]-'a'+'A';
                  //if(m==l-1)
                  //k++;
                printf("(%c,%d)",a[i],k);
                i=m;
        /*for(m=i+1;m<l;m++)
        {
           if (a[i]==a[m]||a[i]==a[m]-'a'+'A'||a[i]==a[m]+'a'-'A')
           {
              k++;
           }
           
            
           else 
            {
                if (a[i]>='a'&&a[i]<='z')
                  a[i]=a[i]-'a'+'A';
                  //if(m==l-1)
                  //k++;
                printf("(%c,%d)",a[i],k);
                i=m;
                //q++;
                break;
            }
           
        }*/
    }
getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
