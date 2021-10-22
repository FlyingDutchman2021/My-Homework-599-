//I find myself back! Just like I'm coding with Swift 😀😀😀

#include <iostream>
#include <vector>
using namespace std;

void findNextDivisor(int &divisorCount, int &num){
    while (1){
        divisorCount --;
        if (num % divisorCount == 0)
        {
            break;
        } 
    }
}


void updateDivisorVector(int &divisorCount, vector<int> &divisorVector, int &num, int &min){
    bool continueOrNot = true;


    if (num % divisorCount == 0){
        divisorVector.push_back(divisorCount);
        if (divisorCount <= min){
            continueOrNot = false;
        }
    }

    while(continueOrNot == true){

        divisorCount--;
        if (num % divisorCount == 0){
            divisorVector.push_back(divisorCount);
            if (divisorCount <= min){
                continueOrNot = false;
            }
        }
    }
}


void cleanUpVector(vector<int> &divisorVector, int &divisorLast){
    divisorVector.clear();
}



void compareVectorAndNum1DivisorCount(vector<int> &divisorVector, int &num1DivisorCount, bool &findOrNot){
    bool continueOrNot = true;
    while (continueOrNot == true){
        for (int divisor : divisorVector){
            if (divisor == num1DivisorCount){
                cout<<divisor<<endl;
                findOrNot = true;
                continueOrNot = false;
            }
        }
        break;
    }
}










void findTheNumber(int num1=1, int num2=1){
    int num1DivisorCount = num1;
    int num2DivisorCount = num2;
    vector<int> divisorVecotor;
    bool findOrNot = false;

    while (1){
        updateDivisorVector(num2DivisorCount,divisorVecotor,num2,num1DivisorCount);
        compareVectorAndNum1DivisorCount(divisorVecotor,num1DivisorCount,findOrNot);
        if (findOrNot == true){
            break;
        }
        cleanUpVector(divisorVecotor,num2DivisorCount);
        findNextDivisor(num1DivisorCount,num1);

    }





}




int main(){

    int num1,num2;

    while (1){
        num1 = 0;
        num2 = 0;

        cin>>num1;
        if (num1 == -1){
            break;
        }

        cin>>num2;
        findTheNumber(num1, num2);

    }
    return 0;
}