//3. take the value stored at x, multiply it by 10
#include <stdio.h>

void function(int *x) {
    *x = (*x) * 10;  
}

int main() {
    int a = 25;
    function(&a);
    printf("The value of a is %d\n", a);
    return 0;
}
