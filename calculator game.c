#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5
int add(),sub(),mul(),divide();
int result,num,ans,num1,num2,i,count,score=0;
float AVE;
char name[MAX][31];


int main()
{
    int choice;
    printf("\n_________________________________");
    printf("\n____________CAL-GAME_____________");
    printf("\n________BY DARYLL FORTUNADO______");
    printf("\n_________________________________");
    printf("\nEnter your name :");
    scanf("%s", &name[i] );
    printf("\nHow many number would you like to answer :");
    scanf("%d", &count );
    do{

    printf("\n_______________________");
    printf("\n|       Menu          |");
    printf("\n|1. Addition          |");
    printf("\n|2. Subtraction       |");
    printf("\n|3. Multiplication    |");
    printf("\n|4. Division          |");
    printf("\n|5. Exit              |");
    printf("\n-----------------------");
    printf("\nEnter your choice:     ");

    scanf("%i", &choice);

    switch(choice){
        case 1: add(); printf("\n%s you've got %i out of %d %.2f%% ",name[i],score,count,AVE);break;
        case 2: sub(); printf("\n%s you've got %i out of %d %.2f%% ",name[i],score,count,AVE);break;
        case 3: mul(); printf("\n%s you've got %i out of %d %.2f%% ",name[i],score,count,AVE);break;
        case 4: divide(); printf("\n%s you've got %i out of %d %.2f%% ",name[i],score,count,AVE);break;
        case 5: exit(0); break;
        default: printf("invalid choice"); break;
    }
    }while(choice!=5);
}
int add(){
    score=0;
    system("cls");
    printf("You select addition");
    for(int i=0 ; i<count ; i++){
        num1=randnum();
        num2=randnum1();


        printf("\n%i. %i + %i = ", i+1, num1, num2);
        scanf("%d", &ans);
        result = num1 + num2;

        if(result == ans){
            score++;

        }
    }
    AVE=(score*100)/count;

}
int sub(){
    score=0;
    system("cls");
    printf("You select Subtraction");
    for(int i=0 ; i<count ; i++){
        num1 = randnum();
        num2 = randnum1();

        if(num2>num1){
            num1 = num2 + num1;
        }

        printf("\n%i. %i - %i = ", i+1, num1, num2);
        scanf("%d", &ans);
        result = num1 - num2;

        if(result == ans){
            score++;
        }
    }
    AVE=(score*100)/count;

}
int mul(){
    score=0;
    system("cls");
    printf("You select Multiplication");
    for(int i=0 ; i<count ; i++){
        num1 = randnum();
        num2 = randnum1();

        printf("\n%i. %i X %i = ", i+1, num1, num2);
        scanf("%d", &ans);
        result = num1 * num2;

        if(result == ans){
            score++;
        }
    }
    AVE=(score*100)/count;

}
int divide(){
    score=0;
    system("cls");
    printf("You select Division");
    for(int i=0 ; i<count ; i++){
        num1 = randnum();
        num2 = randnum1()%10;

        while(num1%num2){
           num1 = num1 * num2;
        }

        printf("\n%i. %i / %i = ", i+1, num1, num2);
        scanf("%d", &ans);
        result = num1 / num2;

        if(result == ans){
            score++;
        }
    }
    AVE=(score*100)/count;
}


int randnum(int x){
    srand(time(0));
    x=rand()%25;
    return x;
}
int randnum1(int y){
    srand(time(0));
    y=rand()%25+1;
    return y;
}


