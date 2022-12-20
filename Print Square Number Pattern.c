#include <stdio.h>
int main()
{
    int row, col, num;
    for(row=1;row<=5;row++)
    {
        num = row;
		for(col=1;col<=5;col++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

