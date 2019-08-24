// Validate if the three provided sides can make a valid triangle
#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int COUNT = 3;

bool valid_triangle(float side1, float side2, float side3);

int main(void)
{
    float sides[COUNT];
    
    // Get scores from user
    for (int i = 0; i < COUNT; i++)
    {   
        do 
        {
            sides[i] = get_int("Length of side %i: ", i + 1);
        }
        while (sides[i] <= 0);
    }
    
    printf("\n\n%d\n\n", valid_triangle(sides[0], sides[1], sides[2]));
}

bool valid_triangle(float side1, float side2, float side3) 
{
    if(side1 > 0 && side2 > 0 && side3 > 0 && (side1 + side2) > side3 && (side2 + side3) > side1 && (side3 + side1) > side2 )
    {
        return true;
    }
    return false;
}

