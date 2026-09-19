#include "iostream"
#include "string"
using namespace std;
string isPalindrome(const string *str , int pointer , string new_str = "");
int main(){
    string str = "abba";
    string new_str = "";
    new_str = isPalindrome(&str , str.size() - 1 );
    cout << boolalpha;
    if (new_str == str){
        cout << true << endl;
    }
    else {
        cout << false << endl;
    }
}

string isPalindrome(const string *str , int pointer , string new_str){
    if(pointer < 0){
        return new_str;
    } else {
        new_str = new_str + str[pointer];
        pointer--;
        return isPalindrome(str, pointer , new_str);
    }
}


