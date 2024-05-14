#include <stdio.h>
#include <stdlib.h>


int main(){

    char color[15];
    char pluralNoun[20];
    char celebrity[20];

    printf("enter a color : ");
    scanf("%s" , color);

    printf("enter a plural noun : ");
    scanf("%s" , pluralNoun);

    printf("enter a celebrity: ");
    scanf("%s" , celebrity);

    printf("roses are %s\n",color);
    printf("%s are blue\n",pluralNoun);
    printf("i love %s\n",celebrity);

    return 0;

}
