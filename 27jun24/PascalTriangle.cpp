#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long factorial (int c){
    static map<int,long long> mp;

    if (mp.find(c)!=mp.end()){
        return mp[c];
    }
    long long fact=1;
    for (int i=1; i<=c; i++){
        fact*=i;
    }
    mp[c]=fact;
    return fact;

}

long long ncr (int n, int r){
    r = min(r, n-r);
    long long value = factorial(n);
    value = value /(factorial(r)*(factorial(n-r)));

    return value;
}


int main()
{
    for (int i=0;i<5;i++){
        
        for (int j=0;j<=i;j++){
            cout << ncr(i,j)<<" ";
        }
        cout<<endl;
    }

} // namespace std
