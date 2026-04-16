#include<iostream>
using namespace std;

int linear_search_last(int* a,int n,int x){
    for(int i = n -1 ; i>=0;i--){
        if(a[i]==x) return i+1;
    }
    return -1;
}

int main(){
    int a[] = {1,5,6,8,5,5,6,1,1,5,6};
    int n = sizeof(a)/sizeof(int);
    cout<<linear_search_last(a,n,6)<<endl;
    cout<<linear_search_last(a,n,5)<<endl;
    cout<<linear_search_last(a,n,8)<<endl;
    cout<<linear_search_last(a,n,0)<<endl;
}