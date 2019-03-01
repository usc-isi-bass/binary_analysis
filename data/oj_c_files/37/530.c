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
    int t,tt,i,j;
    int len;
    int letter[26]={0};
    char str[100000];
    cin>>t;
    for(tt=1;tt<=t;tt++)
    {
       cin>>  str;
       len=strlen(str);
       for(i=0;i<=len-1;i++)
       {
          letter[str[i]-'a']++;                                    
       }                  
      for(i=0;i<=len-1;i++)
      {
        if(letter[str[i]-'a']==1)
       {
         cout<<str[i]<<endl;    
         goto aa;
       }  
      }
      cout<<"no"<<endl;
 aa:     
      memset(letter,0,sizeof(letter));
      memset(str,0,sizeof(str));                             
    }
return 0;    
}
