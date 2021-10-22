#include <iostream>
#include <vector>
using namespace std;

void findPrimes(int max=2){
    vector<int> primes;
    primes.clear();
    primes.push_back(2);
    bool continueOrNot = true;

    for(int numberCounter = 3; numberCounter <= max; numberCounter++){
        continueOrNot = true;
        for(int primeCounter = 0; continueOrNot == true; primeCounter ++){

            if (numberCounter % primes[primeCounter] == 0){
                continueOrNot = false;
            }

            if (primeCounter == primes.size()-1){
                continueOrNot = false;
                primes.push_back(numberCounter);
            }



        }



    }

    for (int prime : primes){
        cout<<prime<<endl;
    }

    cout<<endl;

    

}






int main(){

    int max;



    while(true){

     max = 0;

     cin>>max;
        if (max == -1){
         break;
        }

    findPrimes(max);

    }


    return 0;
}