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
//* ????10.13??3?7??????? **
//* ?????     ???1000012888     **
//**************************************** 
int main( )                //??? 
{                          //????? 
    int i,n,sum = 0;       //?????????i?????n??????sum???????? 
    cin >> n ;             //?????n?n<100 
    for (i = 1;i <= n;i++) //???? 
    {
        if(i % 7 == 0)     //i??7????sum?? 
        sum = sum + 0;
        else if(0 <= i - 70 && i - 70 <= 9)//i?????????????????7? 
        sum = sum + 0;                     //sum??? 
        else if((i - 7) % 10 == 0)         
        sum = sum + 0;                     
        else                               //i?7??? 
        sum = sum + i * i;                 //sum??i??? 
    } 
    cout << sum << endl ;                  //??sum 
    return 0;
}                                          //?????  
