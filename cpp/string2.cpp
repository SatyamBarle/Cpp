// reverse the string 
#include<iostream>
using namespace std;
void reverse( char name[]){
    char name2[10];
    int n=0;
    for(int i=0;name[i]!='\0';i++){
         n++;
    }
    cout<<n;
    for(int i=0;i<=n;i++){
        name2[i]=name[n-i];
    }
    cout<<name2;
}
int main(){
    char name[10];
    cin>>name;
    cout<<name;
    reverse(name);
    
}