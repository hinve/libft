#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 0;
    char *str = "C:\\ProgramData\\MySQL\\MySQL Server 8.0\\Uploads";
    
    char *aux = (char *)malloc(strlen(str) + 1);
    
    if (aux == NULL)
        return 1;

    while (str[i]) {
        if (str[i] == '\\')
            aux[i] = '/';
        else if (str[i] == '/')
            aux[i] = '\\';
        else
            aux[i] = str[i];
        i++;
    }

    aux[i] = '\0';

    printf("La string convertida es: %s\n", aux);

    free(aux);

    return 0;
}