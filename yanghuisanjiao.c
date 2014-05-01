#include <stdio.h>

int array[15];

void print_each_line(int n)
{
    int i;
    for(i = 0; i <= n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void cal_each_line(int i)
{
    int j, temp1, temp2;
    temp1 = 1;
    if(i == 0) {
        return;
    }

    else {
        for(j = 0; j <= i; j++)
        {
            if(j == 0 || j == i){
                array[j] = 1;
            } else {
                temp2 = array[j];
                array[j] = temp1 + temp2;
                temp1 = temp2;
            }
        }
    }
}

int main()
{
    int n, i;
    printf("Please input n:\n");
    scanf("%d", &n);
    array[0] = 1;
    for(i = 0; i < n; i++)
    {
        cal_each_line(i);
        print_each_line(i);
    }
    return 0;
}
