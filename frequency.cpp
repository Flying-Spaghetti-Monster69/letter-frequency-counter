#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    string noseXd;
    map<char, int> frequency;
    cout<<"welcome, write something to see it's letter frequency"<<endl;
    getline(cin, noseXd);

    // iterates through every letter of the string
    for (int i = 0; i < noseXd.length(); ++i){
        // saves the letter in the position of the iterator of the string to the letter variable, ej = miguel, i = 0, saves m
        char letter = noseXd[i];

        //checks if the letter is in the map, when it's new, the character is added and it's int is 0
        if (frequency.find(letter) == frequency.end()){
            frequency[letter] = 0;
        }

        frequency[letter]++;
    }

    for (auto itr = frequency.begin(); itr != frequency.end(); ++itr)
    {
        cout<<itr->first<<": "<<itr->second<<endl;
    }
    
}