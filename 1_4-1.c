/*C script demos
Scripted by Juan Medina, mail to juansth@gmail.com/*
    
#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 1;
    x += 1; 
    x = ++x;
    printf("now %d\n", x);

    x = ++x;
    printf("now %d\n", x);

    x = ++x;
    printf("now %d\n", x);

    return 0;
}
