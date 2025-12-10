#include<bits/stdc++.h>
using namespace std;

int main(){
  for(int k = 6; k>0; k--){
    for(int i = 0; i<6-k; i++){
      cout<<" ";
    }
    for(int j = 2*k-1; j>0; j--){
      cout<<"*";
    }
    cout<<"\n";
  }
}