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

//**************************
//??????? 
//??????1200012914 
//???2012.12.11
//**************************


int main()
{
    struct count
    {
        int knowshim; //???????? 
        int heknows; //???????? 
    } person[10000];
    int num; //???
    cin >> num; //?????
    int i;
    for (i = 0; i < num; i++)
    {
        person[i].knowshim = 0;
        person[i].heknows = 0;
    } //?person???????????0 
    int who, whom; //who????whom??????
    int flag = 0;
    while (1)
    {
        cin >> who >> whom;
        if (who + whom == 0) break; //???0 0?????
        person[who].heknows++;
        person[whom].knowshim++;
    }
    for (i = 0; i < num; i++)
    {
         //??????????0????????num-1?????? 
         if (person[i].heknows == 0 && person[i].knowshim == num - 1)
         {
             flag = 1;
             cout << i << endl;
         }
    }
    if (!flag) cout << "NOT FOUND" << endl; //???????not found

    return 0;
}     
