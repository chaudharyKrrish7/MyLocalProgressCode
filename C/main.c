#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*data types and variables*/
char charName[] = "after";
int charAge = 5;
double decNum = 45.89;
char testVar = 'K';
float divNum = 5/2;

int main(){


    printf("my name is %s \n" , charName);
    printf("hy my name is\"demo text to check\n");
    printf("my age is %d \n" , charAge);
    printf("%d \n" , 5609 );
    printf("my fav %s is %d and %f" , "food" , 567 , 0.56);

    printf("%f \n" , 5 * 9.5);
    printf("%d\n" , 5 * 9);
    printf("%d\n" , divNum);

    printf("%f\n" , pow(2,2));
    printf("%f\n" , sqrt(4));
    printf("%f\n" , ceil(56.8));
    printf("%f\n" , floor(56.8));

    const int num = 5 ;
    /*num = 8 ;*/

    /*--------USER INPUT-------*/
    int age ;
    printf("enter ur numer\n");
    scanf("%d", &age);
    printf("your age is : %d\n" , age);

    char grade ;
    printf("enter ur numer\n");
    scanf("%c", &grade);
    printf("your age is : %c\n" , grade);


    char nameStr[20];
    printf("enter ur name\n");
    fgets(nameStr , 20 , stdin);
    printf("ur name is %s\n" , nameStr);



    return 0;
}
