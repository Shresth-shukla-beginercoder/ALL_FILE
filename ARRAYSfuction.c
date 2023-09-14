# include<stdio.h>

int print(int*arr, int n);
int main(){
int arr[7] = {1,2,3,4,5,6,7};
print(arr, 7);

    return 0;

}int print(int *arr, int n){
    for(int i = 0; i<n;i++){
        printf("%d\t",arr[i]);

    }printf("\n");

}