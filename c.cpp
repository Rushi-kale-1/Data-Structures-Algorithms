#include <bits/stdc++.h>
using namespace std;

void recursive (int num ){
    //base case 
    if (num >10){
        return;
    }
    cout << num<<endl;
    num++;
    recursive(num);
}

int main (){
    recursive(1);
}