#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    char date[11];
    int i, j;

    
    printf("[Please enter the current date in the \"yyyy-mm-dd\" format]: ");
    scanf("%10s", date);

    printf("[Please enter your name]: ");
    scanf("%49s", name);

    printf("**The input has been processed successfully.**\n");

    
    printf("\n/////////////////////////////////////////////////////////////\n");
    printf("[Magrathea ver 0.1]\n");
    printf("Magrathea, where a shining planet is created in a wasteland with no grass,\n");
    printf("a place where unseen potential is discovered and gems are polished by the hands of experts.\n");
    printf("Welcome to Magrathea.\n");
    printf("/////////////////////////////////////////////////////////////\n\n");

    printf("[User]: %s\n", name);
    printf("[Execution Time]: %s\n", date);

    
    sleep(3);
    system("cls");


    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }

    return 0;
}
