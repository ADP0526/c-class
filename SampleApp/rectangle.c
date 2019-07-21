
//This program claculated the area of a rectangle
#include <stdio.h>

int main() 
{
    double height = 2.7;
    double width = 25;
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("Perimeter is: %f\n", perimeter);
    printf("Area is: %f", area);

    return 0;
}