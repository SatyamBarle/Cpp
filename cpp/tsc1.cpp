#include<iostream>
using namespace std;
/*int sum_range(int x, int y){
    int sum=0;
    for(int i=x;i<=y;i++){
        sum+=i;
    }
    return sum;
}*/
int sum_optimized(int x, int y){
    int result =0;
    int n= y-x+1;
    int a=x;
    result=(n*(2*a+n-1))/2;
    return result ;
}
int main(){
cout<<sum_optimized(2,8)<<endl;
return 0;

}