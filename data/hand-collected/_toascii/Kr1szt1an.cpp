#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 20

//Protot�pusok
void int_to_arr(int, char *);
void reverse(char *);
void int_to_arr_V2(int, char *);

int main(int argc, char ** argv)
{
    int number;
    char string[MAX_STRING_LENGTH];

    //Ha nincs megadva sz�m kil�p�s
    if (argc < 2)
    {
        puts("Hianyzo bemeno parameter!");
        return EXIT_FAILURE;
    }

    //Megadott sz�m ment�se v�ltoz�ba
    number = atoi(argv[1]);

    int_to_arr(number, string);
    printf("%d", number);
    printf("%s", string);
    int_to_arr_V2(number, string);
    printf("%d", number);
    printf("%s", string);
    return EXIT_SUCCESS;
}

void int_to_arr(int number, char * string)
{
    int i;      //Ciklus v�ltoz�
    int sign;   //El�jelet t�rol� v�ltoz�
    
    if ((sign = number) < 0)    //El�jel t�rol�sa
    {
        number = -number;       //Sz�m abszol�t �rt�k�t vessz�k
    }

    i = 0;

    do //Sz�mjegyek gener�l�sa (ford�tott sorrendben)
    {
        string[i++] = number % 10 + '0';  //K�vetkez� sz�mjegy
    } while ((number /= 10) > 0);

    if (sign < 0)
    {
        string[i++] = '-';  //Ha a sz�m negat�v kitessz�k az el�jelet
    }

    string[i] = '\0';       //String lez�r�sa

    reverse(string);        //String megford�t�sa
}

void reverse(char * string)
{
    char c;
    int i;
    int j;

    for (i = 0, j = strlen(string) - 1; i < j; i++, j--)
    {
        c = string[i];
        string[i] = string[j];
        string[j] = c;
    }
}

void int_to_arr_V2(int number, char * string)
{
    int i;
    int sign;
    unsigned int unumber;

    if ((sign = number) < 0)
    {
        unumber = -number;
    }
    else
    {
        unumber = number;
    }

    i = 0;

    do
    {
        string[i++] = (unumber % 10) + '0';
    } while ((unumber /= 10) > 0);

    if (sign < 0)
    {
        string[i++] = '-';
    }

    string[i] = '\0';

    reverse(string);
}