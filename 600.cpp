#include <iostream>
using namespace std;

int main(){

    int input1, input2;

    while(1){
        input1=0, input2=0;
        cin>>input1;
        if (input1 == 0){
            break;
        }
        cin>>input2;

        if (input2 % input1 == 0){
            cout<<input2<<" is a multiple of "<<input1<<endl;
        }else{
            cout<<input2<<" is not a multiple of "<<input1<<endl;
        }
    }


    return 0;
}