#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,a,b;
    cin>>n;
    int arr[n];
    a = 0;
    b = 0;
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0;i<n;i++){
        if (arr[i]>=arr[i+1]){
            b+= arr[i];
            a += b;
            cout<<"a"<<a<<endl;
            b = a-b;
            a = a-b;
            cout<<"b"<<b<<endl<<"a"<<a<<endl;
        }
        else if (i<(n-1)){

            b+= arr[i+1];
            cout<<arr[i+1]<<"i+1"<<endl;
            a += b;
            b = a-b;
            a = a-b;
            cout<<"bb"<<b<<endl<<"aa"<<a<<endl;
            arr[i] = arr[i+1];
        }
        else {
            b+= arr[i];
        }
    }
    cout<<a<<endl<<b<<endl;

}
