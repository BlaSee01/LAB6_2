#include <stdio.h>

int troj(int x){

    int a = 0;

    for(int i = 1 ; i <= x ; i++){

        a+=i;
        printf("%d " , a);
    }

    return 0;

}

int main()
{
    troj(8);    //  WYPISUJE TYLE NAJMNIEJSZYCH LICZB TWORZACYCH TROJKAT ILE WYNOSI PARAMETR

    return 0;
}
