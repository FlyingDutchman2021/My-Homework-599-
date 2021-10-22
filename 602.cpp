#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout<<fixed<<showpoint<<setprecision(1);
    double x1,y1,x2,y2,distanceSquare;

    while(1){
        cin>>x1;
        if(x1 == -1){
            break;
        }
        cin>>y1>>x2>>y2;
        distanceSquare = pow(x1-x2, 2) + pow(y1-y2, 2);
        cout<<sqrt(distanceSquare)<<endl;

    }



    return 0;
}