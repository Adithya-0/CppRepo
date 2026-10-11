#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

int calculate_if_parts_are_even(int w);

int main() {
    string text = "leet code";
    string brokenLetters = "lt";
    vector<int> indices {};
    bool skip_leeters = false;
    int total_words{};
    int typable_word{};
    for(int i = 0 ; i < text.size() ; i++){
        if(text[i] == ' '){
            total_words++;
            indices.push_back(i);
        }
    }
    total_words = total_words + 1;
    typable_word = total_words;
    for (int i = 0 ; i < text.size(); i ++){
        if(skip_leeters){
            if(text[i] != ' '){
                continue;
            }
            skip_leeters = false;
        }
        for(int j = 0 ; j<brokenLetters.size() ; j++){
            if(text[i] == brokenLetters[j]){
                typable_word = typable_word - 1;
                skip_leeters = true;
                break;
            }
        }
        
        
       
    }
    cout << typable_word << endl;
    
    

    
}

