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

/**
 *@file     5.cpp
 *@author   ??? 
 *@date     2012-09-29
 *@description 
 *          ?3,5,7???? 
 */
int main()
{
    int n;                             //?????? 
    cin>>n;                            //???? 
    if (n%3==0)                        //?????3?? 
    {
       if(n%5==0)                      //???????5?? 
       {  
         if(n%7==0)                    //???????7?? 
            cout<<"3 5 7";             //???? 
         else                          
            cout<<"3 5";               //???7??????? 
       }
       else                            //???5?? 
       {
          if(n%7==0)                   //???5?????7?? 
             cout<<"3 7";                
          else 
             cout<<"3";                //???5,7?? 
       }           
    }           
    else 
        if (n%5==0)                    //??3?????5?? 
        {
            if (n%7==0)                //????5,7?? 
                cout<<"5 7";
            else                       //???7?? 
                cout<<"5";             
        }          
        else                           //???3,5?? 
            if (n%7==0)                //??7?? 
            cout<<"7";
            else                       //???3,5,7?? 
                if (n%3&&n%5&&n%7)     
                    cout<<"n";
    return(0);
}   