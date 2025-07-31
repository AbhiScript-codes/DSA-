#include<iostream>
#include<algorithm>
 void sort(int *arr ,int n){
    if(n==0 || n==1) return;
     
    for(int i =1;i<=n-1;i++){
        int j=i;
        while(j > 0 && arr[j] < arr[j - 1]) {
            std::swap(arr[j],arr[j-1]);
            j--;
        }

    }
    sort( arr+1 , n-1);

 }
 int main(){
    int arr[5]={5,4,3,2,1};
    sort(arr, 5);
    for(int i=0;i<5;i++){
        std::cout<< arr[i];
    }
  
    return 0;
 }