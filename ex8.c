#include <stdio.h>

int main(void){

    int running = 1;
    while (running){
        
        int usr;
        printf("=== monowire menu ===\n");
        printf("1. Scan Wi-Fi\n");
        printf("2. Hack planet\n");
        printf("3. System info\n");
        printf("4. Shutdown\n");
        printf("Select: ");
        scanf("%d", &usr);

        switch (usr){
            case 1:
                printf("[+] Scanning... Found 0 networks.\n");
                break;
            case 2:
                printf("[!] Hacking NASA... 10%%... 100%%... Done.\n");
                break;
            case 3:
                printf("System: STM32F103, RAM: 20KB\n");
                break;
            case 4:
                printf("Bye!\n");
                running = 0;
                break;
            default:
                printf("Unknown command!\n");
        }
    }
    return 0;
}
                
