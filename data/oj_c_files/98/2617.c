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
    int n, i, l, j, num = 0;
    char ch[45], *p;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> ch;
        l = strlen(ch);
        p = ch;
        
        if(num == 0)
        {
            for(j = 0; j < l; j++)
            {
                cout << *p++;
                num++;
            }
        }
            
        else if(num > 0 && num + l + 1 <=80)
        {
            cout << " ";
            num++;
                
            for(j = 0; j < l; j++)
            {
                cout << *p++;
                num++;
            }
        }
            
        else if(num > 0 && num + 1 + l > 80)
        {
            cout << endl;
            num = l;
            for(j = 0; j < l; j++)
            {
                cout << *p++;
            }
        }
    }
    
    return 0;
}
