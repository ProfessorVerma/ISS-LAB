#include <stdio.h>
#include <string.h>

void vulnerable() {
    int isAdmin = 0;
    char buffer[8];

    printf("Enter your name: ");
    gets(buffer);

    printf("Hello %s\n", buffer);
    printf("isAdmin value: %d\n", isAdmin);

    if(isAdmin == 1094795585) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }
}

int main() {
    vulnerable();
    return 0;
}