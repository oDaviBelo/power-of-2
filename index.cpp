#include <iostream>
#include <iomanip>

using namespace std;

int pot(int a,int x);

int main(){
    int a = 2;
    int x;
    pot(a,x);
    return 0;
}

int pot(int aa, int xx){

    int a = aa;
    a = 2;
    int x = xx;
    cin>>x;
    int sum;

    for(int i = 0; i<x;i++){
        a *= 2;
    }

    cout<<sum<<endl;

    return 0;
}