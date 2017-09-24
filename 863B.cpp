#include <bits/stdc++.h>
using namespace std;



int main (){
    int n;
    cin>>n;
    n = 2*n;
    int m[n];
    int k[n];
    for (int i = 0; i<n;i++){
        cin>>m[i];
    }
    for (int i = 0,t= 0; t<n;t++){

        while (i<n){
            k[t][i]= abs(m[i]-m[t]);
            i++;
        }

    }




}
