/***********************************************************************
Modify Programming Project 9 from Chapter 8 so that it includes the
following functions:
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
main first calls generate_random_walk, which initializes the array to
contain '.' characters and then replaces some of these characters by
the letters A through Z, as described in the original project.
main then calls print_array to display the array on the screen.
***********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define NUM_DIRECTIONS 4

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main()
{
    char walk[10][10];
    srand((unsigned)time(NULL));
    generate_random_walk(walk);
    print_array(walk);

    return 0;
}

void generate_random_walk(char walk[][10])
{
    int x, y, i, j, next_move;
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
            case 0: x -= 1; break;
            case 1: y += 1; break;
            case 2: x += 1; break;
            case 3: y -= 1; break;
        }

        trail++;
        walk[x][y] = trail;
    }

    return;

}

void print_array(char walk[][10])
{
    int i, j;

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}
