#include<iostream>
using namespace std;
int tho(int k){
    if(k==1||k==2) return 1;

    else
  return tho(k-1)+tho(k-2);
}
int main(){
    int k;
    cin>>k;
    cout<<tho(k);
    return 0;}

