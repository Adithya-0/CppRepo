#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <char> vec {'f' , 'r' , 'a' , 'n' , 'k'};
    vector <char> vowels {'a' , 'e' , 'i' , 'o' , 'u'};
    int i = 0;
    do {
        if (vec.size() == 0){
            cout << "No vowel was found";
            break;
        }
        if ((vec[i] == vowels[0] ) || (vec[i] == vowels[1]) || (vec[i] == vowels[2]) || (vec[i] == vowels[3]) || (vec[i] == vowels[4])){
           cout << "Vowel found: " << vec[i] << endl;
           break;
        } 
        if (i == (vec.size()) - 1 ){
            cout << "No vowel was found" << endl;
        }
        i++;
    } while (i < vec.size());

    return 0;
}