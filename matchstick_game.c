#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, sticks = 21, choose, left;
    printf("\t\t\t\t\t<-*****MATCHSTICKS GAME*****->\n");
    printf("\t\tINSTRUCTION:-PICKS UP NUMBERS 1,2,3 OR 4 AND SAME THING COMPUTER DOES\n");
    printf("\t\t\t\tWHO FORCED TO PICK THE LAST STICKS HE/SHE/IT LOOSER\n");

    do
    {
        srand(time(0));
        number = rand() % 4 + 1;
        printf("choose no. of sticks b/w 1 to 4\n");
        scanf("%d", &choose);
        if (choose>=1&&choose<=4)
        {
        left = sticks - choose;
        printf("number of sticks choosen by computer %d\n", number);
        sticks = left - number;
            
        }
        else
        {
            printf("choose the number of sticks 1,2,3 or 4 only\n");
        }
        
    } while (sticks >= 0);
    if (left==0)
    {
        printf("you loose the game");           
    }
    else
    {
        printf("you win the game");           
        
    }
    
    getch();

    return 0;
}