#include <stdio.h>
int main()
{
    int arr_num = 0, arr[5];
    int i, j, k;
    printf("Input number of element to be store in array : ");
    scanf("%d", &arr_num);
    printf("-----------------\n");
    for (i = 0; i < arr_num; i++){
        printf("Arr Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("-----------------\n");
     for(i = 0; i < arr_num; i++){
        k = 1;
        //printf("%d \n", k);
        for (j = i+1; j <= arr_num; j++){
            
           if( arr[i] == arr[j] ){
                k++;
                arr[j] = 0;
                
            }
        }
        if (arr[i] != 0){
            printf("%d --> %d\n", arr[i], k);
        }
    }
    return 0;
}
