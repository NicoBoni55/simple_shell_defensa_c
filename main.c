#include "shell.h"

int main (int ac, char **av) {

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
        get_environ();
        free(cadena);
    }
    free(cadena);
}