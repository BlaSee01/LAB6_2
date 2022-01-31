#include <stdio.h>
#include <stdlib.h>

float srednia(float tab[], int i){

    float suma = 0;

    for(int a = 0; a < i; a++){
        suma+=tab[a];
    }

    int b = (int)suma;

    suma = suma/i;

    if((int)suma%2==0 || (int)suma%3==0){
        printf("Srednia po zaokragleniu jest podzielna przez 2 lub 3. | Srednia: ");
        return suma;
    }else{
        return suma;
    }

}

int main()
{

    float t [3] = {2.3,5.7,1.6};

    printf("%f",srednia(t,3));

    return 0;
}
