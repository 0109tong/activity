#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    cin>>test;
    float test_value[test];
    float temp;
    for (int i = 0;i<test;i++){
        cin>>test_value[i];
    }
    for (int i = 0;i<test;i++) {
        temp = test_value[i];
        temp = 2.0/(1-(temp/180));
        if (temp - (int)temp == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
