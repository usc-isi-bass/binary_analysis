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
    int num;
    char word[1000][50]={' '};
    int length[1000]={0};
    cin >> num;
    int i;
    for (i=0;i<num;i++)
    {
        cin >> word[i];
        length[i] = strlen(word[i]) + 1;
    }
    int sumlength = 0;
    for (i=0;i<num;i++)
    {
        sumlength+=length[i];
        if (sumlength > 81)
        {
            cout << endl;
            cout << word[i] << " ";
            sumlength = length[i];
        }
        else
        {
            if (sumlength == 81)
            {
                cout << word[i];
                cout << endl;
                sumlength = 0;
            }
            else
            {
                cout << word[i];
                if (sumlength+length[i+1]<=81 && i!=num-1)
                {
                     cout << " ";
                }
            }
        }
    }    return 0;
}
        
        
