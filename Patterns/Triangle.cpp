#include<bits/stdc++.h>
using namespace std;

int main(){
  for(int k = 1; k<6; k++){
    for(int i = 5-k; i>=0; i--){
      cout<<" ";
    }
    for(int j = 1; j<(2*k); j++){
      cout<<"*";
    }
    cout<<"\n";
  }
}