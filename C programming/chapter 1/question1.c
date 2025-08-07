#include <stdio.h>

int main() {
    int length, breadth;

    // a. Using hard coded inputs
    length = 10;
    breadth = 5;
    printf("Area using hardcoded values (length=10, breadth=5): %d\n", length * breadth);

    // b. Using user-supplied inputs
    printf("Enter length and breadth of the rectangle:\n ");
    scanf("%d %d", &length, &breadth);
    printf("Area using user inputs: %d\n", length * breadth);

    return 0;
}
