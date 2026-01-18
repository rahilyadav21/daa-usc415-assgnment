#include<iostream>
using namespace std;

int partition(int arr[],int low, int high){
int i,j;
int pivot;
i=low-1;
pivot=arr[high];

for(int j=low;j<high;j++){
    if(arr[j]<pivot){
        i++;
        int temp =arr[j];
        arr[j]=arr[i];
        arr[i]=temp;

    }
}
int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i+1;

}
void quicks(int arr[],int low ,int high){
    if(low>high) return;
    int p =partition(arr,low,high);
    quicks(arr,low,p-1);
    quicks(arr,p+1,high);
}
int main(){
    int arr[]={1,34,435,56,67,877,2,2};
     quicks(arr,0,7);
for (int i = 0; i < 6; i++){ cout << arr[i] << " ";}
       
     return 0;
}
