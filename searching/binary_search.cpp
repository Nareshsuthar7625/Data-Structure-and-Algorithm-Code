#include<iostream>
using namespace std;

int binary_search(int* a,int n , int x){
    int low = 0 , high = n-1;
    int mid;
    while(high>=low){
        mid = (low+high)/2;
        if(x == a[mid]) return mid+1;
        if(x > a[mid]) low = mid + 1;
        if(x < a[mid]) high = mid - 1;
    }
    return -1;
}


int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(int);
    cout<<binary_search(a,n,1)<<endl;
    cout<<binary_search(a,n,2)<<endl;
    cout<<binary_search(a,n,3)<<endl;
    cout<<binary_search(a,n,4)<<endl;
    cout<<binary_search(a,n,5)<<endl;
    cout<<binary_search(a,n,6)<<endl;
    cout<<binary_search(a,n,7)<<endl;
    cout<<binary_search(a,n,8)<<endl;
    cout<<binary_search(a,n,9)<<endl;
    cout<<binary_search(a,n,55)<<endl;
    cout<<binary_search(a,n,-10)<<endl;
}
