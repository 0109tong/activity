#include <bits/stdc++.h>
using namespace std;

int main (){
    string n,ne;
    int s,l;
    cin>>n;
    s = n.size();
    l = n.find_last_of("0");
    while (l == (s-1)){
        n.erase(s-1,1);
        l = n.find_last_of("0");
        s = n.size();
    }
    s = n.size();
    ne = string(n.rbegin(), n.rend());
    if (n == ne){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
