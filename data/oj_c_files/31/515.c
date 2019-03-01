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

struct Stu
{
    char stu[100];
    struct Stu *link;
};
int main()
{
    struct Stu *p1,*p2;
    p2=p1=(struct Stu *)malloc(LEN);
    gets(p1->stu);
    p1->link=NULL;
    for(;;)
    {
        p2=p1;
        p1=(struct Stu *)malloc(LEN);
        gets(p1->stu);
        p1->link=p2;
        if(strcmp(p1->stu,"end")==0) break;
    }
    for(;;)
    {
        puts(p2->stu);
        p2=p2->link;
        if(p2==NULL) break;
    }
    return 0;
}
