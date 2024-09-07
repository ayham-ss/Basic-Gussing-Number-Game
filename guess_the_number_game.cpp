#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

int tries_num=4;
int entered_answer;
int correct_answer;

srand(time(0));
correct_answer = rand()%20+5;
cout <<"****************************************" << endl
    << "******Welcome To The Guessing Game******" << endl
    << "****************************************" << endl
    << endl << "Pick A Number Between 1..20" << endl << endl;
for(int i=1; i <=tries_num; i++){
    cout << "Try#" << i << ": ";
    cin >> entered_answer;
    if(entered_answer==correct_answer){
        cout << endl << "\t" <<"||||///**You Won!!, Bitch (-_*)**\\||||" << endl << endl;
        break;
    }
    else{
        if(entered_answer>correct_answer) cout << "Too High!" << endl;
        if(entered_answer<correct_answer) cout << "Too Low!" << endl;
        cout << "Wrong Guess Try Again.." << endl;
    }
}
if(!(entered_answer==correct_answer)){cout << endl << "Game Over, Bitch! (-_*)" << endl << endl;}

return 0;
}