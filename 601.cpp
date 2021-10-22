#include <iostream>
using namespace std;

int main(){

    int input;

    while(1){
        cin>> input;
        if (input == -1){
            break;
        }

        if (input % 2 == 0){
            cout<<input<<" is an even integer"<<endl;
        }else{
            cout<<input<<" is an odd integer"<<endl;
        }
    }



    return 0;
}