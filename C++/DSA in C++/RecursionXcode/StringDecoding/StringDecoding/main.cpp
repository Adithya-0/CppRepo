#include "iostream"
#include "string"
using namespace std;
int no_of_alphabets(char *ptr , char *left_brack);
string append_to_string(char *ptr , string new_str , int no_of_alphabets);
string append_to_string_times_the_num(string new_str , string old_str , int num);
string control(char *ptr , char *end_ptr , string full_str);
int main(){
    string s = "3[ab]2[bc]1[ef]";
//    char *ptr = &(s[0]);
//    int num = no_of_alphabets(ptr, nullptr);
//    string str = append_to_string(&(s[2]), "", num);
//    string full_str = append_to_string_times_the_num("", str, 3);
//    cout << full_str << endl;
    char *end_ptr = &(s[0]) + s.size() - 1;
    string str = control(&(s[0]), end_ptr , "");
    cout << str << endl;
    
}

int no_of_alphabets(char *ptr , char *left_brack){
    if (*ptr != ']'){
        if (*ptr == '['){
            left_brack = ptr;
        }
        ptr++;
        return no_of_alphabets(ptr , left_brack);
        
    }
    return ptr - left_brack - 1;
}

string append_to_string(char *ptr , string new_str ,  int no_of_alphabets){
    if (no_of_alphabets > 0){
        new_str = new_str + *ptr;
        ptr++;
        return append_to_string(ptr, new_str , no_of_alphabets -1);
    } else {
        return new_str;
    }
    
    
}

string append_to_string_times_the_num(string new_str , string old_str , int num){
    if (num >= 1){
        new_str = new_str + old_str;
        return append_to_string_times_the_num(new_str , old_str , num-1);
    } else {
        return new_str;
    }
}

string control(char *ptr , char *end_ptr , string full_str){
    if (ptr <= end_ptr){
        if (*ptr == '['){
            int no_of_alpha = no_of_alphabets(ptr, nullptr);
            string str = append_to_string(ptr+1, "", no_of_alpha);
            string new_str = append_to_string_times_the_num("", str, (*(ptr-1)) - '0');
            full_str = full_str +  new_str;
        }
        ptr++;
        return control(ptr, end_ptr , full_str);
    }
    else {
        return full_str;
        
    }
}


