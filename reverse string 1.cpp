//
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cout<<"Enter any string : ";
getline(cin,s);
cout<<"reverse string : ";
for(int i=s.length()-1;i>=0;i--){
cout<<s.at(i);
}
return 0;
}
