#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r,sum=0;
    int n1=n;
    while(n1!=0){
        r=n1%10;
        sum=sum+(r*r*r);
        n1=n1/10;
    }
    if(n==sum){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not arm"<<endl;
    }
    return 0;
}