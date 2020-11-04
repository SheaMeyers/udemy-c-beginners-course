#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    double height;
    double width;

    sscanf(argv[1], "%lf", &height);
    sscanf(argv[2], "%lf", &width);

    double perimeter = (width + height) * 2.0;
    double area = width * height;

    printf("Height is: %lf\n", height);
    printf("Width is: %lf\n", width);
    printf("Permimeter is: %lf\n", perimeter);
    printf("Area is: %lf\n", area);

    return 0;
}