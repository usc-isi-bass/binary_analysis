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
	char a[205];
	int i, j, count = 0, max = 0, min = 250, m, n;
	cin.getline(a,205);
	for(i = 0; i < strlen(a); )
	{
		for(j = i; a[j] != '\0'; j++)
		{
		    if(a[j] != ' ' && a[j] != ',')
		    {
				count++;
			}
			else
			{
				if(a[j - 1] != ' ' && a[j - 1] != ',')
				{
				    if(count > max)
			    	{
			    		max = count;
		    			m = i;
		    		}
			    	if(count < min)
		    		{
		    			min = count;
		    			n = i;
		     		}
				}
				break;
			}
		}
		if(a[j - 1] != ' ' && a[j - 1] != ',')
		{
	    	if(count > max)
    		{
		    	max = count;
	    		m = i;
    		}
		    if(count < min)
	    	{
    			min = count;
			    n = i;
		    }
		}
		count = 0;
		i = j + 1;
	}
	for(i = m; (a[i] != ' ' && a[i] != ',' && a[i] != '\0'); i++)
		cout << a[i];
	cout << endl;
	for(i = n; (a[i] != ' ' && a[i] != ',' && a[i] != '\0'); i++)
		cout << a[i];

	return 0;
}