#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
 for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
      cout<<"*";
    }
    cout<<"\n";
  }
}

void pattern2(int n){
  for(int i = 1; i<=n; i++){
    for(int j = 0; j<i; j++){
      cout<<"*";
    }
    cout<<"\n";
  }
}

void pattern3(int n){
  for(int i = n; i>0; i--){
    for(int j = i; j>0; j--){
      cout<<"*";
    }
    cout<<"\n";
  }
}

void pattern4(int n){
    for(int i = 1; i<=n; i++){
    for(int j = 1; j<=i; j++){
      cout<<i;
    }
    cout<<"\n";
  }
}

void pattern9 (int n){
  for(int k = 0; k<n; k++){
    for(int i = n-k; i>0; i--){
      cout<<" ";
    }
    for(int j = 1; j<(2*k); j++){
      cout<<"*";
    }
    cout<<"\n";
  }
    for(int k = n; k>0; k--){
    for(int i = 0; i<n-k; i++){
      cout<<" ";
    }
    for(int j = 2*k-1; j>0; j--){
      cout<<"*";
    }
    cout<<"\n";
  }
}

void pattern11(int n){
for(int i = 0; i<n; i++){
  
    
    for(int j = 0; j<=i; j++){
  if(j%2!=0){
    cout<<"1";
  } else{
    cout<<"0";
  }
    }
  
  cout<<"\n";
}
}

int main(){
  pattern9(5);
  return 0;
}