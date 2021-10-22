#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){


    double input1, input2, result;
    cout<<fixed<<showpoint<<setprecision(1) ;
    
    while (true){

        input1=0, input2=0, result=0;

        cin>>input1;
        if (input1 == 0)
        {
            break;
        }
        cin>>input2;

        result = input1* input1 + input2 * input2;
        cout<<sqrt (result)<<endl;


        
    }
    


    return 0;
}