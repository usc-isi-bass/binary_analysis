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
    int i,len,j;
    char str[100];
    cin.getline(str,100);
    len=strlen(str);
    
    int space[100]; 
    for (i=0;i<100;i++)
    {
        space[i]=len+1;
    }
    int k=0;
    for (i=0;i<=len-2;i++)
    {
        if (str[i]==' ')
        {
                      if (str[i+1]==' ')
                      {
                                      space[k]=i+1;
                                      k++;
                      }
        }
    }
    
    int s[1000],m;
  
    for (i=0;i<=len-1;i++)
    {   
        j=0;
        while ((space[j]!=i)&&(j<k))
        {
              j++;
        }
        if (j==k)
        {
            s[i]=1;
        }
        else
        {
            s[i]=0;
        }
    }

   for (i=0;i<=len-1;i++)
    {
            if (s[i]==0)
            {
                     ;
            }
            else
            {
                cout << str[i];
            }
    }

    return 0;
}
