#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char name[20] = "elroi";
    printf("Length: %lu\n", strlen(name));
    char nameco[20];
    strcpy(nameco, name);
    printf("the copy: %s\n", nameco);
    return 0;
}
