#include <bits/stdc++.h>
using namespace std;
int main (){
    vector <vector<int>> mat={{1,1,1},{1,0,1},{1,1,1}};
    for (int i=0;i<mat.size();i++){
        for (int j=0;j<mat[0].size();j++){
            cout<< mat[i][j]<<" ";
        }
    }
}