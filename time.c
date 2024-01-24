#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(){
    char string[30] = " ";
    char opt = '\0';
    char next = '\0';
    
    printf("Write a word : \n");
    scanf(" %s", &string);
    printf("Which letter would you like to swap: \n");
    scanf(" %c", &opt);
    printf("And what letter do you want to replace %c with: \n", opt);
    scanf(" %c", &next);

    for(int i=0;i<=10;i++){
        if(string[i] == opt){
            string[i] = next;
        }
    }
    printf("The word now is %s\n\n", string);
}

void timetable(){
    int num = 0;

    printf("Which time table would you like to calculate: \n");
    scanf("%d", &num);
    for(int i = 1; i<=10; i++){
        printf("%3d * %d = %d\n", num, i, num*i);
    }
    printf("\n");
}

void T(){
    printf("T \n");
    printf("Are you acting surprised!! That's literally all it does!! \n\n");
}

void menu(){
    char option = '\0';
    
    do{
        

        printf("Hello!! Welcome to the crazy game!!\n");
        printf("1 - Swap the letter's in a word: \n");
        printf("2 - Calculate a time table: \n");
        printf("t - Write a T on the screen: \n");
        printf("e - Exit : \n");
        printf("Which Option would you like?\n");
        scanf(" %c", &option);

        switch(option){
            case '1' : swap(); break;
            case '2' : timetable(); break;
            case 't' : T(); break;
            case 'e' : exit(1); break;
            default : exit(2); break;
        }
    }
    while(option != 'e');
}

int main(void){
    menu();
}