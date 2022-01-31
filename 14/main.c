#include <stdio.h>
#include <stdlib.h>

int ciag(int x){

    if(x<3)   return 1;

    return ciag(x-2)+ciag(x-1);

}

int main()
{

    printf("%d" , ciag(8));

    return 0;
}
