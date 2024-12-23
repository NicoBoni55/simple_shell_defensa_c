#include "shell.h"

int main () {

    size_t n = 0;
    char *cadena = NULL;
    ssize_t leer_linea;

    while (1)
    {
        printf("$shell ");
        leer_linea = getline(&cadena, &n, stdin);

        if (leer_linea == -1) {
            printf("error en getline");
        }
        printf("este es el buff %s \n este es el size %ld \n", cadena, n);
        free(cadena);
    }
}