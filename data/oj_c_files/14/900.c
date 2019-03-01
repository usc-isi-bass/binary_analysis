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



struct Student
{
	int number;
	int math;
	int chinese;
	int total;
	struct Student *next;


};

void main()
{
	int i=0,n,max;

	struct Student *linkHead, *linkTail, *student,*ppre,*pmax,*premax;
	

	scanf("%d",&n);

	linkHead = linkTail = NULL;
	//????????????
while(i<n)
{
	student = (struct Student *)malloc(Len);
    			 
	scanf("%d %d %d",&student->number, &student->math, &student->chinese);
 
	student->total=student->math+student->chinese;

	student->next = NULL;
	if (linkTail == NULL)
	//????????????
	linkHead = linkTail = student;
	else 
	{
	
	//?????????????????????
	linkTail->next = student;
	linkTail = student;

	}
	
	i++;
	
}

i=0;

while(i<3)
{
student=linkHead;
ppre=student;

max=0;
pmax=linkHead;
premax=linkHead;



while(student != NULL )
{
	
	if(student->total>max) 
	{
		max=student->total;
		pmax=student;
		premax=ppre;
	}	
	ppre=student;
	student=student->next;
	
}		
		
	printf("%d %d\n", pmax->number, pmax->total);
	
	
	if(pmax==linkHead)            //????????????
			linkHead=student->next;
	else premax->next=pmax->next;  //???i??????????????i?????????????????????????????????????????flag?????????????????

		
	i++;	
	


}

	

}