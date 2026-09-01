#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int c=0;

void app_main(void)
{
    while (true) {
        printf("Hola soy el programa principal! Iteración: %d\n", c);
        sleep(5);
        c++;
    }
}
