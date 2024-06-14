#include <iostream>
using namespace std;

int gcd (int num1, int num2){
    int loop = min (num1, num2);
    int gcdn = 1;
    for (int i=1; i<=loop; i++){
        if (num1%i==0 && num2%i==0){
            gcdn = i;
        }
    }
    return gcdn;
}


int lcm (int num1, int num2){
    int loop =max (num1, num2);
    int lcmn = -1;
    for (int i=loop; i<=num1*num2; i++){
        if (i%num1 ==0 && i%num2==0){
            lcmn =i;
            break;
        }
    }
    return lcmn;
}
int main(){
    
    cout<<lcm(1000000, 1500000)<<endl;

}