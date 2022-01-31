#include <stdio.h>

void zamiana (int x){

int i = 0;
int t [255];

    while(x>0){
        t[i++]=x%2;
        x=x/2;
     }

    for(int j = i-1; j >= 0; j--){
        printf("%d",t[j]);
    }
}

int main()
{

    zamiana(30);

    return 0;

}
