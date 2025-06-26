#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int SIZE=5;
    int numbers[SIZE], sum=0;
    for(int i=0;i<SIZE;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<SIZE;i++){
        sum=sum+numbers[i];
    }

    printf("Average: %.2f", (float)sum/SIZE);
    return 0;
}
