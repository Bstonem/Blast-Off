#include <iostream>
using namespace std;

int main(){

    int startNum; //This will be a user entered number.

    cout << "Please enter a number to begin countdown! ";
    cin >> startNum; //User number input.

    //Following loop will begin at User entered number and count down until 0, which will be the message "Blast off!!!""
    for (int i = startNum; i>0; i--){
        cout << i << '\n';
    }

    cout << "Blast off!!!";

    return 0;
}