#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    vector <string> names;
    for (int i = 0;i<n;i++){
        string w;
        cin>>w;
        names.push_back(w);

    }
    for (int i = 0; i<n;i++){
        bool check = false;
        for (int l= 0;!check &&l<i;l++){
            if (names[l]== names[i] ){
                cout<<"YES"<<"\n";
                check = true;
            }

        }
        if (!check){
            cout<<"NO"<<"\n";
        }
    }
}
