#include<iostream>
using namespace std;
int main(){
    int r1,c1,c2;
    cin>>r1>>c1>>c2;
    int a[r1][c1];
    int b[c1][c2];
    int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
     for(int i=0;i<c1;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        int val=0;
        for(int k=0;k<c1;k++){
            val+=a[i][k]*b[k][j];
            c[i][j]=val;
        }
    }
}
for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
return 0 ;

    
    


}