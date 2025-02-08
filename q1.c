#include<iostream>
using namespace std;
bool checkprime(int n){
  for(int i=2;i<n;i++){
    if(n%i==0){
    return false;
  }
}
return true;
}
int printallfactor(int n){
  for(inti=1;i<=n;i++){
if(n%i==0){
cout<<i;
}
cout<<endl;
  }
}
int nextprime(int n){
   int next=n+1;
   while(!checkprime(next)){
    next++;
   }
   return next;
}
int main(){
int num;
cout<<"Enter a number "<<endl;
cin>>num;
bool prime=checkprime(num);
if(prime){
    cout<<"A prime number "<<endl;
    cout<<"Next prime number greater than "<<num<<" is"<<nextprime(num)<<endl;
}else {
    cout<<num<<" is Not a prime number "<<endl;
    printallfactor(num);
}
}
