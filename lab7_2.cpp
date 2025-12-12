#include<iostream>
#include<string>
using namespace std;
int calcuGear(string id){
    int firstChar = int(id[0]);
    int secChar = int(id[1]);
    int firstInt,secInt;
    firstInt = (firstChar-48)*10;
    secInt = (secChar-48);
    return (firstInt+secInt)-12;
}
int main(){
    string name, movie, day, id, note;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin, name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your   student ID?\n";
    cout << name << ": ";
    getline(cin, id);
    cout << "Fahsai: I think you may be GEAR "<< calcuGear(id) <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin, movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin, day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching "<< movie << " with you.\n";
    cout << name << ": ";
    getline(cin, note);
    cout << "Fahsai: 555+ see you " << day <<". Bye Bye \\(^ ^)/\n";
    return 0;
}

