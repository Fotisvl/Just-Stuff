#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Get valid pyramid height from user
    int h;
    do
    {
        h = get_int("Height: \n");
    }
    while (h < 1 || h > 8);
    //Builds each pyramid floor with, respects pyramid's eventual height
    for (int i = 0; i < h; i++)
    {
        //Prevents scope issue with integer n
        int n;
        //Adds space before blocks, if height necessitates
        for (n = 0; n < h - i - 1; n++)
        {
            printf(" ");
        }
        //Creates first pyramid's blocks
        for (int j = 0; j < h - n; j++)
        {
            printf("#");
        }
        //Creates space between pyramids (Always static)
        printf("  ");
        //Creates second pyramid's blocks
        for (int f = 0; f < h - n; f++)
        {
            printf("#");
        }
        printf("\n");
    }
}
