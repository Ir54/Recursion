#include<iostream>
using namespace std;

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    else{
        return arr[n-1]+sum(arr, n-1);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n =5;
    cout<< "sum of array "<<sum(arr, 5)<<endl;
    return 0;

}