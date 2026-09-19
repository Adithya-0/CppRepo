#include <iostream>
using namespace std;
void reverseString(char *str);
int main(){
    char message[] = "pointer";
    char *arr_ptr {nullptr};
    arr_ptr = &(message[0]); // &message[0] (Address of the first character) --> &(message[0]) will be same as &message
    //What it is: A pointer to a single character (type char*).
    //What cout prints: The text string "pointer".
    //Why: std::cout has a special built-in rule for char*. 
    //Instead of printing the memory address, it assumes a char* points to a text string,
    // so it prints every character until it hits the hidden null terminator (\0)..
    reverseString(arr_ptr);
    cout << message << endl;
    return 0;
}

void reverseString(char *forward_ptr){
    int i =0;
    char helper{};
    char *end_ptr {nullptr};
    while (true){
        if ((*(forward_ptr + i)) == '\0'){
            end_ptr = (forward_ptr + i);
            break;
        }
        i = i + 1;
    }
    end_ptr = end_ptr - 1;
    while (true){
        if (forward_ptr >= end_ptr){
            break;
        } 
        helper = *end_ptr;
        *end_ptr = *forward_ptr;
        *forward_ptr = helper;
        forward_ptr = forward_ptr + 1;
        end_ptr = end_ptr - 1;
        

    }
    
}


