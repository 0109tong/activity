#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> num;
    vector<long long> v;
    long long ma = 0, mi = 0;
    for (int i = 0;i<3;i++){
        long long a;
        cin>>a;
        num.push_back(a);
    }
    for (int i = 0;i<n;i++){
        long long w;
        cin>>w;
        v.push_back(w);
        ma = v[i];
        mi = v[i];

    }
    for (int i = 0;i<n;i++){
        if (ma < v[i]){
            ma = v[i];
        }

        if (mi > v[i]){
            mi = v[i];
        }
    }
    long long out = 0;
    for (int i = 0,t;i<3;i++){
        if (num[i]<0){
            t = num[i]*mi;
            out +=t;
        }
        else if (num[i] > 0){
            t = num[i] * ma;
            out += t;
        }

    }
    cout<< out;
}

