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
void quicks(int arr[],int n){

   int stack[n];
    int top=-1;

    stack[++top]=0;
    stack[++top]=n-1;

    while(top>=0){
         int high=stack[top--];
        int low=stack[top--];
       int p=partition(arr,low,high);
        
       if(p-1>low){
         stack[++top]=low;
    stack[++top]=p-1;
       }
         
       if(p+1<high){
         stack[++top]=p+1;
    stack[++top]=high;
       }
    }



}
int main(){
    int arr[5]={1,3,2,43,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicks(arr,n);
    for(int z=0;z<n;z++){
  cout<<arr[z]<<endl;
    }
    return 0;

}
