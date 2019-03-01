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
    char word[100000],b[100][100],l[1];
    
    int n=0,q,i=0,j=0,k=0,fei=0,x;
    cin>>n;
   // cin.getline(l,1);
for(q=0;q<n;q++)
   {
          cin>>word;
      // cin.getline(word,100000);
           x=strlen(word);
         for(j=0;j<x;j++)
         {
             fei=0;
            for(k=0;k<x;k++)
            {
               if(word[j]==word[k])
               {
                  fei++;
               }


            }
             if(fei==1)
            {
                cout<<word[j]<<endl;
                break;
            }
            //else cout<<"no"<<endl;
         }
         if(fei!=1) cout<<"no"<<endl;
   }
   return 0;
}
