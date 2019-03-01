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



typedef struct
{
	int ID;
	int chinese;
	int math;
	int sum;
}Student;

Student topThree[3];
int studentNum;

void initialise()
{
	for(int i = 0; i < 3; i ++)
	{
		topThree[i].sum = -1;
	}
}

void updateTopThree(Student stu)
{
	for(int i = 0; i < 3; i ++)
	{
		if(stu.sum > topThree[i].sum)
		{
			for(int j = 2; j > i; j --)
			{
				topThree[j] = topThree[j-1];
			}

			topThree[i] = stu;
			
			break;
		}
	}
}

void getStudentData()
{
	Student temp;

	scanf("%d", &studentNum);
	for(int i = 0; i < studentNum; i ++)
	{
		scanf("%d %d %d", &temp.ID, &temp.chinese, &temp.math);
		temp.sum = temp.chinese + temp.math;
		updateTopThree(temp);
	}
}

void printStudentData()
{
	for(int i = 0; i < 3 && i < studentNum; i ++)
	{
		printf("%d %d\n", topThree[i].ID, topThree[i].sum);
	}
}

int main()
{
	initialise();
	getStudentData();
	printStudentData();

	return 0;
}

