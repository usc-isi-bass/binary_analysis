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

//********************************************************
//*  ???:4.cpp                                        *
//*  ??????    1200012948                             *
//*  ????: 2012 11 13                                *
//*  ????:????                                                                                               *
//********************************************************
//??
int main()
{
	char a[500];
	int l, i, j, m = 0, h, e, k, flag = 0;
	cin.getline (a,500);
    l = strlen(a);   //???????
    for (i = 2; i <= l; i++)
    {
    	for(j = 0; j + i <= l; j++)
    	{
    		flag = 0;
    		h = j;
    		e = j + i - 1;
    		while (a[h] == a[e])
    	    {
    			if(flag == 0)
    			{
    			     m = h;    //m????
    			     flag = 1;
    			}
              //????????

    		    h++;
    		    e--;
    		    if (h >= e)
    		    	break;
    	    }
    	    if (h >= e)
    	    {
                 for (k = m; k <= m + i - 1; k++)
    	         {
    	    	      cout << a[k];
    	         }
                 cout << endl;
    	     }
    	}

    }
    return 0;
}
