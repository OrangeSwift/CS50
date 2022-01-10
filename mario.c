#include <stdio.h>
#include <cs50.h>

void buildPyramid(int height);

int main(void)
{
    // int Variable height
    int height;

    // do while loop that prompts the user constantly for the correct entry
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Call buildPyramid
    buildPyramid(height);
}

//  function buildPyramid
void buildPyramid(int height)
{
    // Loop to add a new line
    for (int i = 0; i < height; i++)
    {
        // for loop add spaces
        for (int k = height - i; k > 1; k--)
        {
            printf(" ");
        }
        // for loop to add hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
} 
