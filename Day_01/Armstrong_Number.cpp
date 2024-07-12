#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num=0,n=0,rem=0,res=0;          //Declaring & Defining Variables

    cout<<"Enter Number: ";             //Prints "Enter Number:" on Console
    cin>>num;                           //Gets input in "num" variable

    n=num;                              //Stores original value in "n" variable

    while (num!=0){                     //Loop will run until value in num=0
        rem=num%10;                     //seperates the reminder
        res+=pow(rem,3);                //Calculates the cube of the seperated reminder & stores in "res" Variable
        num=num/10;                     //Removes the last number in the "num" variable
    }

    (res==n) ? cout<<n<<" is Armstrong Number" : cout<<n<<" is not Armstrong Number";  //ternary operator

    return 0;
}