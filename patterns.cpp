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

void pattern5(int n){
    for(int i = n; i>0; i--){
    for(int j = i; j>0; j--){
      cout<<"*";
    }
    cout<<"\n";
  }
}

void pattern6(int n){
   for(int i = n; i>0; i--){
    for(int j = 1; j<=i; j++){
      cout<<j;
    }
    cout<<"\n";
  }
}

void pattern7(int n){
    for(int k = 1; k<n; k++){
    for(int i = n-k; i>=0; i--){
      cout<<" ";
    }
    for(int j = 1; j<(2*k); j++){
      cout<<"*";
    }
    cout<<"\n";
  }
}

void pattern8(int n){
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

void pattern12(int n){
for(int i = 1; i<n; i++){
  for(int x = 1; x<=i; x++){
    cout<<x;
  }
  for(int y = (2*n)-2*i; y>1; y--){
    cout<<" ";
  }
  for(int x = i; x>=1; x--){
    cout<<x;
  }
  cout<<"\n";
}
}

void pattern13(int n){
  int x = 0;
  int k = 0;
  for(int i=1; i<=n; i++){
    cout<<i<<" ";
      if(k<x){
        k++;
        continue;
      } else{
        cout<<"\n";
        x++;
        k=0;
      }
    
  }
}

void pattern14(int n){
  for(int i = 0; i<n; i++){
    for(char j = 'A'; j<= 'A'+i; j++){
      cout<<j;
    } 
    cout<<"\n";
  }
}

void pattern15(int n){
  for(int i = n; i>0; i--){
    for(char j = 'A'; j< 'A' + i; j++){
      cout<<j;
        }
        cout<<"\n";
  }

}

void pattern16(int n){
char x = 'A';
for(int i = 1; i<n; i++){
  for(int j = 0; j<i; j++){
    cout<<x;
  }
  cout<<"\n";
  x = 'A' + i;
}
}

void pattern17(int n){
  for(int i = 0; i<n; i++){
    char a = 'A';
    for(int j = n-i; j>0; j--){
      cout<<" ";
    }
    for(int k = 0; k<2*i + 1; k++){
      if(k< i){
        cout<<a;
        a++;
      } else {
        cout<<a;
        a-= 1;
      }
    }
    cout<<"\n";
  }
}

void pattern18(int n){
  for(int i = 0; i<=n; i++){
    for(char j = 'A'+n-i; j<'A'+n; j++){
      cout<<j;
    }
    cout<<"\n";
  }
}

void pattern19(int n){
  for(int i = 0; i<=2*n; i++){
    for(int j = 0; j< (2*n-i)/2; j++){
      cout<<"*";
    }
    for(int j = 0; j<i; j++){
      cout<<" ";
    }
    for(int j = 0; j<i; j++){
      cout<<" ";
    }
    for(int j = 0; j< (2*n-i)/2; j++){
      cout<<"*";
    }
    cout<<"\n";
  }
}



int main(){
  pattern19(5);
  return 0;
}