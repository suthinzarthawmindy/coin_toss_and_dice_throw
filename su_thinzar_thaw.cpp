//Name- Su Thinzar Thaw
//Student Number- 40392455
//Individual Project for Object Oriented Programming

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "thrown.h"
#include "CoinToss.h"
#include "OneDice.h"
#include "TwoDices.h"
using namespace std;

int main (){
    int StudentNumber;
    srand(time(NULL));
    // ask the user's student number
    cout << "Please enter your student number: ";
    cin >> StudentNumber;
    
    //student nuumber must be betweem 2 digits and 8digits, if not the program is aborted.
    if (StudentNumber<10 || StudentNumber>99999999){
        cout <<"The student number is invalid. The program must be aborted."<<endl;
        return 1;
    }

    //calculate the remainder to decide to toss coin, one dice or two dices
    int remainder= StudentNumber %3; 

    //Convert an integer to a string 
    string strStudentNumber = to_string(StudentNumber);
    //divide the student number into two parrts
    int j=0;
    if(strStudentNumber.size()%2==0){
        j= strStudentNumber.size()/2;
    }
    else{
        j=strStudentNumber.size()/2+1;
    }
    //multiply each digit of each part and summation in ascending order
    int total=0;
    for (int i=0; i<strStudentNumber.size()/2; i++){
        total += (strStudentNumber[i]-'0') * (strStudentNumber[j]-'0'); j+=1;
    } 
    // number of tosses or throws
    int n;
    n = (total%50)+20;
    cout<< "the number of tosses or throws is " << n <<endl;

    //if remainder is 0, it will be coin toss.
    if (remainder==0){
        CoinToss coinToss;
        int result_for_cointoss[]={};
        for (int i = 0; i < n; i++) {
            coinToss.thrownOneCoin();
            result_for_cointoss[i] = coinToss.giveOneCoinThrownResult();
            cout<< "The element stored in Coin toss is " << result_for_cointoss[i] <<endl;
        }
    }

    // if remainder is 1, it will be one dice.
    else if (remainder==1){
        OneDice oneDice;
        int result_for_onedice[]={};
        for (int i = 0; i < n; i++) {
            oneDice.thrownOneDice();
            result_for_onedice[i] = oneDice.giveOneThrownResult();
            cout<< "The element stored in One dice is " << result_for_onedice[i] <<endl;
        }
    }

    // if remainder is 2, it will be two dices.
    else if (remainder==2){
        TwoDices twoDices;
        int result_for_twodice[][2]={};
        for (int i = 0; i < n; i++) 
        {
            twoDices.thrownTwoDices();
            result_for_twodice[i][0] = twoDices.giveFirstThrownResult();
            result_for_twodice[i][1] = twoDices.giveSecondThrownResult();
            cout<< "The element stored in Two dice is " << result_for_twodice[i][0] << "\t"<< result_for_twodice[i][1] <<endl;
        }
    }

return 0;
}