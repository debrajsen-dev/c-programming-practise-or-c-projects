#include <stdio.h>

void a();
void b();
void c();

void a(){
    printf("good_morning\n");
}
void b()
{
    printf("good_afternoon\n");
}
void c()
{
    printf("good_night\n");
    
}

int main(){
    {
         a();
         b();
        c();
        

    }

    return 0;
}