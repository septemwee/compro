#include <stdio.h>

int s = 10;  // ตัวแปร global


int test() {
    printf("%d\n", s); 
    return 0;   
}

int main() {
    int num1,num2,num3;


    int c = 100;       // ตัวแปร local
    float b = 5.55;
    char a = 'a'; 

    printf("%d\n", s);
    printf("%d\n", c); 
    printf("%.2f\n", b); 
    printf("%c\n", a);  

    test();

    return 0;
}





