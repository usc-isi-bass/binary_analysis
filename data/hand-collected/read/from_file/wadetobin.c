#include <stdio.h>
#include <stdlib.h>

typedef struct player{
    char Fname[25];
    char Lname[25];
    int Singles;
    int Doubles;
    int Triples;
    int Homeruns;
    int At_Bats;
    float Slugging_Percentage;
}Player;


void read_from_file(char* filename, Player* players, int index, int size) //reading whats in the files
{
    int i = 0;
    FILE *ptr;
    
    if((ptr = fopen(filename, "r")) == NULL)
    {
        return;
    }

    for(i=0; i < size/3; i++)
    {
        fscanf(ptr,"%s %s %d %d %d %d %d", (players + index + i) -> Fname, (players + index + i) -> Lname, &(players + index + i) -> Singles, &(players + index + i) -> Doubles, &(players + index + i) -> Triples, &(players + index + i) -> Homeruns, &(players + index + i) -> At_Bats); //scans the names and numbers of each of the input files 
    }


    fclose(ptr);
}
