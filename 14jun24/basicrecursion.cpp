#include <bits/stdc++.h>
using namespace std;

void recursive (long long num , long long fact){
    //base case 
   if (fact>1000){
    return ;
   }
    cout << fact<<endl;
    recursive(num+1, fact*(num+1));

}

int main (){
    recursive(1,1);
}