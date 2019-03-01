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

/*
 *?????
 *???2010 - 12 - 31
 *?????????    ????
 */
char line[101];
char boy;
char girl;
int sign[101] = {0};
int len;
void answer(int);
int main()
{
	cin.getline(line,101);
	int i;
	len = strlen(line);
	boy = line[0];             //??????????boy
	for(i = 1; i < len; i++)
	{
		if(line[i] != boy)
		{
			girl = line[i];         //????????boy?????Girl??????????????????
			break;
		}
	}
	answer(i);
	return 0;
}
void answer(int g)
{
	int i,j;
	for(i = g; i < len; i++)
	{
		if((sign[i] == 0)&&(line[i] == girl))               //???????sign???????????????
		{
			sign[i]++;
			for(j = i; j >= 0; j--)
			{
				if((sign[j] == 0)&&(line[j] == boy))
				{
					sign[j]++;
					cout << j << " " << i << endl;
					answer(i);                              //?????????????
					break;
				}
			}
		}
	}
	return;
}