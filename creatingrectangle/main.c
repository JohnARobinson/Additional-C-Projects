#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double width= atoi(argv[1]); // converts argv to double
    double height= atoi(argv[2]);
    double perimeter=0.0, area=0.0;
    perimeter = 2*(height+width);
    area = width * height;
    printf("perimeter = %.2f\n", perimeter);
    printf("area = %.2f\n", area);
    return 0;
}

/* og code
int main(int argc, char *argv[])
{
    double width=2.0, height=2.0, perimeter=0.0, area=0.0;
    printf("enter the width");
    scanf("%f", &width);
    printf("enter the height");
    scanf("%f", &height);
    perimeter = 2*(height+width);
    area = width * height;
    printf("perimeter = %.2f\n", perimeter);
    printf("area = %.2f\n", area);
    return 0;
}
*/
