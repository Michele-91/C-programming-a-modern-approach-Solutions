/**************************************************************************************
Write a program that generates a "random walk" across a 10x10 array. The array will
contain characters (all '.' initially). THe program must randomly "walk" from element
to element, always going up, down, left, or right by one element. The elements visited
by the program will be labeled with the letter A through Z, in the order visited.
Before performing a move, check that (a) it won't go outside the array, and (b) it
doesn't take us to an element that already has a letter assigned. If either condition
is violated, try moving in another direction. If all four directions are blocked, the
program must terminate.
**************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define NUM_DIRECTIONS 4

int main()
{
    int x, y, i, j, next_move;
    char walk[10][10];
    char trail;


    srand((unsigned)time(NULL));

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            walk[i][j] = '.';
        }
    }

    trail ='A';
    x = 0;
    y = 0;
    walk[x][y] = trail;
    for(i = 1; i < 26; i++)
    {
        next_move = rand() % NUM_DIRECTIONS;
        switch(next_move)
        {
            /*I decided to make the program move by two elements instead of one
            because the end result looks better*/
            case 0: x -= 2; break;
            case 1: y += 2; break;
            case 2: x += 2; break;
            case 3: y -= 2; break;
        }

        walk[x][y] = trail;
        trail++;
    }

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }



   return 0;
}





