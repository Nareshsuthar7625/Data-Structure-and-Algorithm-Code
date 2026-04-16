#include<iostream>
using namespace std;

int Binary_search(int* a,int i,int l,int x){
    if(l==i){
        if(x == a[i]) return i;
        else return -1;
    }
    else{
        int mid = (i+l)/2;
        if(x == a[mid]) return mid;
        if(x < a[mid]){
            return Binary_search(a,i,mid-1,x);
        }
        else{
            return Binary_search(a,mid+1,l,x);
        }
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(int) - 1;
    cout<<Binary_search(a,0,n,1)<<endl;
    cout<<Binary_search(a,0,n,2)<<endl;
    cout<<Binary_search(a,0,n,3)<<endl;
    cout<<Binary_search(a,0,n,4)<<endl;
    cout<<Binary_search(a,0,n,5)<<endl;
    cout<<Binary_search(a,0,n,6)<<endl;
    cout<<Binary_search(a,0,n,7)<<endl;
    cout<<Binary_search(a,0,n,8)<<endl;
    cout<<Binary_search(a,0,n,9)<<endl;
    cout<<Binary_search(a,0,n,55)<<endl;
    cout<<Binary_search(a,0,n,-10)<<endl;
}