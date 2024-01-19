#include <stdio.h>

int main() {
    int a=10,b= -3,c= 19;

    
    int max = (a>b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The maximum number is: %d\n", max);

    return 0;
}
