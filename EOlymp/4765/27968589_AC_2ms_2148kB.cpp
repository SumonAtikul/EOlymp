#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n, arr[105], c=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i+1]){
            printf("%d ", arr[i]);
        }
    }
    return 0;




}