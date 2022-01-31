#include <stdio.h>

void ciag (int x){

    int y = 1;
    int pom = y;
    int pom1;

    printf("1 1 ");

    for(int i = 1 ; i < x-1 ; i++){

        pom1 = y;
        y = y+pom;
        pom = pom1;

        printf("%d " , y);

    }
}

int main()
{

    ciag(7);

    return 0;
}
