#include <cs50.h>
#include <stdio.h>

// im going to add print_row, be prepare
void print_row(int spaces, int bricks);

// the main code
int main(void)
{
    // do this, once
    int height;
    do
    {
        height = get_int("Height :");
    }
    while (height <= 0);

    // print row for get_int
    for (int i = 0; i < height; i++)
    {
        print_row(height - i - 1, i + 1);
    }
}

// here it is
void print_row(int spaces, int bricks)
{
    // prints spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // print bricks
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("\n");
}
