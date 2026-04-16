#include<iostream>
using namespace std;

int linear_search(int* a,int n,int x){
    
    for(int i = 0;i<n;i++){
        if(a[i]==x) return i+1;
    }
    return -1;
}

int main(){
    int a[] = {5,3,1,2,7};
    int n = sizeof(a)/sizeof(int);
    cout<<linear_search(a,n,5)<<endl;
    cout<<linear_search(a,n,9)<<endl;
    cout<<linear_search(a,n,2)<<endl;
}