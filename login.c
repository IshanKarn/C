#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void repeat(char, int);
void validateLogin(char[], char[]);

int tabcount = 40;
int strxcount = 100;
char user[100] = "ishan";
char pass[100] = "ab@12";

int main()
{
    char username[100];
    char password[100];
    char c;
    char temp_pass[] = "";
    printf("\n");
    repeat('*',strxcount);
    printf("\n");
    repeat(' ',tabcount);
    printf("%s","LOGIN TO PROJECT\n");
    repeat('*',strxcount);
    printf("\n");
    repeat(' ',tabcount);
    printf("%s","Username - ");
    scanf("%s", &username);
    printf("\n");
    repeat(' ',tabcount);
    printf("%s","Password - ");
    scanf("%s", &password);
    while ((c=getch())!='.')
        strncat(temp_pass,&c,1);
    
    system("cls");
    validateLogin(username, password);
        
    return 0;
}

void repeat(char character, int count)
{
    for (int i=0; i<count; i++)
        printf("%c", character);
}

void validateLogin(char username[], char password[])
{
    if (strcmp(username,user)==0 && strcmp(password,pass)==0)
        printf("Welcome To The Project!\n");
    else
        printf("Sorry! Invalid Username / Password!\n");
}
