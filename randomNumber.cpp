#include <bits/stdc++.h>

using namespace std;
void findRandom(int userNumber , int randomNumber){
    if(userNumber == randomNumber)
    cout << "GREAT!!, you found it👍"<< endl;
         else if((userNumber + 10) >= randomNumber || (userNumber - 10) <= randomNumber)
        cout << "Nice try!! , you are too close!!"<< endl;
        else
        cout<< "Umm, Try more!!, you are too far"<< endl;


}

int main()
{
    int userNumber, N = 100;
    int randomNumber = rand() % N;
    cout << "Guess the number" << endl;
    cout<< "Enter the number you guessed"<< endl;
    cin >> userNumber;
   
    findRandom(userNumber , randomNumber);
  while(userNumber != randomNumber){
      cout << "Guess the number" << endl;
      cin >> userNumber;
       findRandom(userNumber , randomNumber);
      
  }

    return 0;
}
