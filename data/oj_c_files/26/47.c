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
    char sentence[100],word[100][100];   //sentence???????word???????? 
    int i=0,j=0,k=0;    //???? 
    
    cin.getline(sentence,100);       //?? 
    
    
    for(i=0;i<strlen(sentence);i++)     //???????????? 
    {        
       if(sentence[i]==' ') continue;            //???? 
       if(sentence[i]!=' '&&sentence[i-1]==' ')  //?????????????? 
         {j++;k=0;}                             //??????word?? 
       word[j][k]=sentence[i];
       k++;
    }
    
    
    cout<<word[0];
    for(i=1;i<=j;i++)       //?? 
    cout<<" "<<word[i];
    
        return 0;
    }
