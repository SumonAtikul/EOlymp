#include<stdio.h>
int main()
{
    int n, arr[105];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            printf("%d ", arr[i]);
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            printf("0 ");
        }
    }
    return 0;
}
