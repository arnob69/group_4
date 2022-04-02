#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter an integer : ");

    scanf("%d", &x);

    while (x != 0)
    {
        y = x % 10;
        printf("%d", y);
        x = x / 10;
    }
    return 0;
}

/*
 source : book (pic sent by niaj)
 drive link : https://drive.google.com/drive/folders/1G2zALkZOem7zvflccCPkM1bsbKQHBH7L?usp=sharing 
*/