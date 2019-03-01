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
    int n;
    int s[60];
    cin>>n;
    int key=1;
    for(int i=0;i<n;i++)  
    {       
       cin>>s[i];
       s[i+30]=1;
       for(int j=i-1;j>=0;j--)
       {
               if(s[j]>=s[i])
               {
                       if(s[j+30]>=s[i+30]) s[i+30]=s[j+30]+1;              
               }        
       }
       if(s[i+30]>key) key=s[i+30];       
    }
    cout<<key;    
 
    return 0;
}
