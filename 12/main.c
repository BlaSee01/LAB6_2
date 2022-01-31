#include <stdio.h>

int silnia(int x){

    if(x <= 0){
        return 0;
    }

    int s = 1;

    for(int i = 1 ; i <= x ; i++){
        s=s*i;
    }

    return s;

}

int main()
{

    int a = 5;

    printf("%d" , silnia(a));

    return 0;
}
