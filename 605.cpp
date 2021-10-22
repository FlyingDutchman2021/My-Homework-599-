#include <iostream>
using namespace std;

int greatestCommonDivisor(int x,int y){
    if (y == 0){
        return x;
    }else{
        return greatestCommonDivisor(y,x % y);
    }
}






int main(){

    int num1,num2;

    while(1){
        num1=0,num2=0;

        cin>>num1;
        if (num1 == 0){
            break;
        }
        cin>>num2;

        cout<<greatestCommonDivisor(num1,num2)<<endl;
    }


    return 0;
}