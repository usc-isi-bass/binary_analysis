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


int trans(char a)       //???????????????10??????a????????????
{
    int m;      //m???10??????
    if (a >= '0' && a <= '9')     //a???
        m = a - '0';
    else if (a >= 'a' && a <= 'z')      //a?????
        m = a - 'a' + 10;
    else
        m = a - 'A' + 10;          //a?????
    return m;       //????????????
}

void change(int a, char n[], int b)    //a?n?b???????????????????????????????
{
    int m = 0, i, j = 1, d, k, num[100];   //m?????????????i?j???d????k??????????????num????10??????????????
    for (i = 0; n[i] != ' '; i++)     //???????????????10??????????????????
    {
        num[i] = trans(n[i]);         //????????????????????????10??
    }
    k = i;          //??????????
    char c[100];      //c???????????
    for (i = k - 1; i >= 0; i--)      //?????????????j???????????????123=3*1+2*10+1*100?
    {
        m = m + num[i] * j;
        j = j * a;
    }
    if (m == 0)    //??????0?????0
        cout << "0";
    else
    {
        i = 0;
        while (m > 0)
        {
            d = m % b;    //???
            m = m / b;       //??
            if (d >= 10)      //??????10????c
            {
                c[i] = 'A' + d - 10;
            }
            else              //??????10?????c
                c[i] = d + '0';
            i++;           //????????????
        }
        for (i--; i >= 0; i--)       //??
        {
            cout << c[i];
        }
    }
}

int main()       //???
{
    char n[100];        //n??????
    int a, b, i, num[100];    //a???????b????????i?????num?????????????????????????
    cin >> a;
    cin.get();     //??a???????
    for (i = 0; (n[i] = cin.get()) != ' ';)    //???????????
        i++;
    cin >> b;
    change(a, n, b);       //??????????????10???????????????????
    return 0;
}
