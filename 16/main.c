#include <stdio.h>

int troj(int x){

    if(x<1)     return 0;
    if(x==0)    return 1;

    return troj(x-1)+x;

    return 0;

}

int main()
{
    printf("%d", troj(3));

    return 0;
}
