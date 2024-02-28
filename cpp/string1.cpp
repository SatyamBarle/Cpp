#include<iostream>
//length of string 
using namespace std;
int len( char name[]){
    int count =0;
    for(int i=0; name[i]!='\0';i++){
        count++;

    }
    cout<<count<<endl;
}
int main(){
 char name[10];
 cin>>name;
 int length=0;
 for(int i=0;name[i]!='\0';i++){
    if(name[i]!='\0'){
        length++;
    }
    
 }
 cout<<length<<endl;
 len(name);
 return 0;

}