#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    char date[11];
    int i;

    // Get date input
    printf("[Please enter the current date in the \"yyyy-mm-dd\" format]: ");
    scanf("%10s", date);

    // Clear input buffer (to prevent leftover '\n' affecting fgets)
    getchar();

    // Get name input using fgets
    printf("[Please enter your name]: ");
    fgets(name, sizeof(name), stdin);

    // Manually remove the trailing '\n' (without string.h)
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    printf("**The input has been processed successfully.**\n");

    // Simple delay (approximately 3 seconds)
    for (volatile long long i = 0; i < 3000000000LL; i++);

    // Cross-platform terminal clear
    #ifdef _WIN32
        system("cls");       // Windows
    #else
        system("clear");     // macOS / Linux
    #endif

    // Display header with new style
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("*                                                                                                       *****\n");
    printf("**                                        [Magrathea ver 0.1]                                            **** \n");
    printf("***                   Magrathea, where a shining planet is created in a wasteland with no grass,          ***\n");
    printf("****           a place where unseen potential is discovered and gems are polished by the hands of experts, **  \n");
    printf("*****                                        Welcome to Magrathea.                                          *\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    
    // Display user info with line of equal signs
    printf("[User]: %-40s[Execution Time]: %s\n", name, date);
    printf("=============================================================================================================\n");

    return 0;
}