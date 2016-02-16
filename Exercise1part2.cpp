#include <iostream>
#include <iomanip>
using namespace std;

void reverse(int );

void exercise1part2(){
    int number;
    char choice;
    do{
        cout <<"This program will reverse the digists in a number you type in.\n\n";
        cout <<"Number to reverse: ";
        cin >> number;
        cout<<"Reversed number: ";
        reverse (number);
    
        cout<<"\n\nAgain? (y/n) ";
        cin >> choice;
    }while(choice == 'y');
    cout << ". . . done\n";
    
}

void reverse(int n){
    if(n%10 >0){cout <<n%10;}
    
    if (n>0){reverse(n/10);}
    
    
    
    
}