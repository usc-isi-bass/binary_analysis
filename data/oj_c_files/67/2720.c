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

//*************************
//**7.cpp??????****
//**??????1300012993*
//**???2013.10.1**
//*************************
int main()
{
    int n;
    double x, y, a, b, num, num1, eff, eff1;
    cin >> n;             //????
    cin >> num1 >> eff1;  //???????????????
    x = eff1 / num1;      //??????????
    while(cin >> num >> eff) //??
      { y = eff / num;    //?????????
        a = x - y;
        b = y - x;        //?????
        if(a > 0.05)
            cout << "worse" << endl; //??????????????0.05????worse
          else
            if(b > 0.05)  //??????????????0.05????better
              cout << "better" << endl;
            else
              cout << "same" << endl;} //????same
    return 0;
}
