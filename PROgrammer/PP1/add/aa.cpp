#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a,b;
  for(int i=0;i<n;++i){
    cin>>a>>b;
    cout<<(a^(a & b))+(b^(a & b))<<endl;
  }
}
