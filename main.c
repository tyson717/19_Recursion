#include <stdio.h>

unsigned factorial(unsigned n) {
    //n! = n x (n-1)x...x1
    //Recursive Factorial Definition
    // n! = nx (n-1)! //Recursive part , recurrence relation
    // 0! =1;// Base case(s)
    if (n==0){
        return 1;
    }
    return n* factorial(n-1);
}

int main() {
    printf("%u\n", factorial(6));
    return 0;
}
