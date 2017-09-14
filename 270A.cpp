#include <bits/stdc++.h>
using namespace std;

int main (){
    int test;
    cin>>test;
    int test_value[test];
    int temp;
    for (int i = 0;i<test;i++){
        cin>>test_value[i];
    }
    for (int i = 0;i<test;i++) {
        temp = test_value[i];

        if (360%(180-temp) == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}



