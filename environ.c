#include "shell.h"

char get_environ() 
{
    char *environ = getenv("PATH");

    if (environ == NULL) 
    {
        printf("no existe el environ \n");
        return(-1);
    }
    char *env = strtok(environ, "/");

    if(env != NULL) {
        while (env != NULL)
        {
            env = strtok(NULL, "/");
        }
        
    }
    else 
    {
        printf ("No hay tokens en el PATH\n");
        return (-1);
    }
    return 0;
}