#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #include <windows.h>
    #define clear "cls"
    #define sleep(ms) Sleep(ms)
#else
    #include <unistd.h>
    #define clear "clear"
    #define sleep(ms) usleep((ms) * 1000)
#endif

int main()
{
    system("chcp 65001 > nul");
    char username[21];
    char input[100];
    char notepad[] = "notepad";

    printf("Enter your username (Max 20 characters): ");
    scanf(" %20[^\n]", username);
    printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n"
           "Welcome, %s!\n"
           "▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n", username);

    sleep(1000);

    printf("Write 'help' to get a list of available commands.\n");
    sleep(1000);
    printf("Write 'exit' to exit program.\n");

   while(1)
   {
       printf("\n%s:", username);
       scanf("%s", input);

       if (strcmp(input, "help") == 0)
   {
       printf("\nnotepad - Just notepad -_-\n"
              "clear - Clear terminal\n"
              "C - Open disk 'C'\n"
              "browser - Open your browser\n"
              "newname - Change your username\n"
              "color1 - Change color on terminal to default (white)\n"
              "color2 - Change color on terminal to green\n"
              "color3 - Change color on terminal to blue\n"
              "color4 - Change color on terminal to red (VERY SCARY)\n");
   }

    else if (strcmp(input, "exit") == 0)
    {
        printf("\nGoodbye, %s!\n", username);
        sleep(1000);
        exit(0);
    }

       else if (strcmp(input, "clear") == 0)
       {
           system(clear);
           printf("Write 'help' to get a list of available commands.\n");
           sleep(1000);
           printf("Write 'exit' to exit program.\n");
       }

      else if (strcmp(input, notepad)==0)
       {
            system("start notepad");
       }

        else if (strcmp(input, "C")==0)
        {
            system("start C:\\");
        }

       else if (strcmp(input, "browser")==0)
       {
           system("start https://");
       }

       else if (strcmp(input, "newname")==0)
       {
           system(clear);
           printf("Enter your new username (Max 20 characters): ");
        scanf(" %20[^\n]", username);
           system(clear);
           printf("▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n"
           "Welcome, %s!\n"
           "▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬\n", username);
           sleep(1000);
           printf("Write 'help' to get a list of available commands.\n");
           sleep(1000);
           printf("Write 'exit' to exit program.\n");
       }

       else if (strcmp(input, "color2")==0)
       {
           system("color 2");
       }

       else if (strcmp(input, "color3")==0)
       {
           system("color 3");
       }

       else if (strcmp(input, "color4")==0)
       {
           system("color 4");
       }

       else if (strcmp(input, "color1")==0)
       {
           system("color 7");
       }

       else
       {
           printf("Not a valid command (%s)!\n", input);
       }
   }

    return 0;
}
