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
    char word[100];
    int i=0,time=0;  //i??????time?????????? 
    
    cin.getline(word,100);  //?????
    
    for(i=0;i<100;i++) 
    {
      if (word[i]=='\0') break;    //???????????
      
      if(word[i]!=' ')   //?????????????????time??1 
        {
          cout<<word[i];
          time=1;
        }
      
      if (word[i]==' '&&time==1)  //??????????????????? 
        {
           cout<<" ";
           time++;       //?????+1 
        }
      
       
    }
    
return 0;
}
