#include<iostream>
using namespace std;
string  f( string &s,int idx, int n){
    if(idx==n) return "";
    string c="";
    c+=s[idx];
   return   ((s[idx]=='a')?" ":c)+ f(s,idx+1,n) ;
}
int main(){
 string  s = "abara";
 int n= sizeof(s)/sizeof(s[0]);
 cout<< f(s, 0 ,n)<<endl;
 return 0;
}