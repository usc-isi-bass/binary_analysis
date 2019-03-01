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
   int n,i,len,j,k,num=0;
   char str[81];
   cin>>n;
   cin.get();
   for(i=0;i<n;i++)
        {
           num=0;
           gets(str);
           if((str[0]!='_') && ((str[0]>'Z' && str[0]<'a') || (str[0]>'z') || (str[0]<'A')))     { 
                 cout<<0<<endl;
                 continue;
                   }
           len=strlen(str);
           if(len==1) cout<<1<<endl;
           
           else{
                 for(j=1;j<len;j++)
                    {
                       if((str[j]>='0'&& str[j]<='9') 
						   || ((str[j]>='A' && str[j]<='Z') 
						   || (str[j]>='a' && str[j]<='z')) 
						   || str[j]=='_')
                       num++;
                     }
                  if(num==len - 1) k=1;
                  else k=0;
                  cout<<k<<endl;
               }
        }
    return 0;
}

