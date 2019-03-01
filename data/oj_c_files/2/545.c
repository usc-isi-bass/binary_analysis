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

struct book
{
	int id;
	char str[27];
}bo[1000];
struct people
{
	int name;
	int number;
	int book_number[1000];
}people[26];
int main ( )
{
	int n, i, j, k, m, max = 0;
	char a[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'};
	cin >> n;
	for(i = 0;i < n;i++)
	{
		cin >> bo[i].id >> bo[i].str;
	}
	for(i = 0;i < 26;i++)//???
	{
		people[i].number = 0;
	}
	for(i = 0;i < n;i++)
	{
		m = strlen(bo[i].str);
		for(j = 0;j < m;j++)
		{
			for(k = 0;k < 26;k++)//???????????
			{
				if(bo[i].str[j] == a[k])
				{
					people[k].book_number[people[k].number] = bo[i].id;
					people[k].number++;
				}
			}
		}
	}
	j = 0;
	for(i = 0;i < 26;i++)//?????????
	{
		if(people[i].number > max)
		{
			j = i;
			max = people[i].number;
		}
	}
	cout << a[j] << endl;
	cout << people[j].number << endl;
	for(i = 0;i < people[j].number;i++)
	{
		cout << people[j].book_number[i] << endl;
	}
	return 0;
}