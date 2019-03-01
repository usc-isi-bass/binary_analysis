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

//*********************************** 
//*????????                 *
//*?  ????  1100062709         *
//*?  ??2011.11.15               *
//***********************************
int len;                                                   //len????? 
void huiwenzichuan (char a[]);                             //????? 
int main()
{
    char a[500];                                           //??????? 
   	int i = 0;
	while((a[i] = cin.get()) != '\n')                     //???????
	{
		i++;                                              //???????? 
	}
	len = i;                                               //??????????len 
    huiwenzichuan (a);                                     //?????? 
    return 0;                                              //????? 
}
void huiwenzichuan (char a[])                              //????? 
{
     int i, j, k, flag, m;                                 //?????? 
     for (i = 2; i < len; i++)                             //???????????????????? 
     {
         for (k = 0; k < len; k++)                         
         {
             flag = 1;                                     //??????1 
             for (j = 0;j < i; j++)                        //?a[k]????????? 
             {
                 if (a[k + j] != a[k + i - j - 1])
                 {
                         flag = 0;                         //????????0 
                         break;                            //????? 
                 }
             }
             if (flag == 1)                                //???1?????????? 
             {
                for (m = k; m < k + j; m++)
                    cout << a[m];                          //???? 
                cout << endl;                              //?? 
             }                     
         }
     }
     return;
}     
           
    
     
