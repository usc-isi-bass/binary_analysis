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

void reserve(int a)//?????? 
{
     int rest,yu;
     yu=a%10;//?????????
     a=a/10; 
     if (a>=1)
     {
                 cout<<yu;
                 reserve(a);
     }
     else cout<<yu<<endl;
}
int main()
{
    int input,i;//?????i???? 
    for(i=0;i<6;i++)
    {
                    cin>>input;
                    if (input<0)
                    {
                                cout<<"-";
                                input=-input;
                    }
                    for(;;)//??????0 
                    {
                           if (input%10==0) input=input/10;
                           else break;
                    } 
                    reserve(input);
    }
    cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get(); 
    return 0;
}
