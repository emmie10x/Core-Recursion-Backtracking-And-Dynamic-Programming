#include<iostream>

using namespace std;

int decrease(int n){
    if(n==0) return 0;
    cout<<n<<" ";
    return decrease(n-1);
}

int main(){
    int n;
    cin>>n;
    decrease(n);
    return 0;
}