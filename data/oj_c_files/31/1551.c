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



struct record
{
	char stuinfo[50];
	struct record *pnext;
};


int main()
{
	record *stu,*head,*ptemp;
	head=(struct record*)malloc(sizeof(struct record));
	head->pnext=NULL;
	ptemp=(struct record*)malloc(sizeof(struct record));
	stu= (struct record*)malloc(sizeof(struct record));
	gets(stu->stuinfo);
	while(strcmp(stu->stuinfo, "end")){
		if (head->pnext==NULL)
			{
				head->pnext=stu;
				stu->pnext=NULL;
		}
		else 
		{
			ptemp=head->pnext;
			head->pnext=stu;
			stu->pnext=ptemp;
		}
		stu= (struct record*)malloc(sizeof(struct record));
		gets(stu->stuinfo);		
	}
	ptemp=head;
	while(ptemp->pnext!=NULL){
		ptemp=ptemp->pnext;
		printf("%s\n", ptemp->stuinfo);		
	}

		
	return 0;
}