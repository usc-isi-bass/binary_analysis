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

//****************************************
//*???????                        **
//*????? 1100013004                     **
//*???2010.11.13                          **
//****************************************
int a,i,j,flag = 1;
void recycle(int,char[]); 
int main() 
{
    int i;
    char str[500];
    cin.getline(str,500); 
    for(i = 2;str[i] != '\0';i++)
          recycle(i,str);
     
} 
void recycle(int a,char str[])
{
            for(i = 0;str[i] != '\0';i++)
            {
				  flag = 1;
                  for(j = 0;j < a;j++)
                  {
                        if(str[i + j] != str[i + a - 1 - j])
                        {
                                 flag = 0;
                                 break;
                        }
                  }
                  if(flag)
                  {
                          for(j = i ;j < i + a;j++)
                              cout<<str[j];
                  }
                  cout<<endl;
            }
return;
}
                  
