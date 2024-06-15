#include <bits/stdc++.h>
using namespace std;

long long rec(int n,long long fact){
    if (n<1){
        return fact;
    }
    return rec(n-1, fact * n);

}
int main (){
    cout <<rec (15, 1);
}