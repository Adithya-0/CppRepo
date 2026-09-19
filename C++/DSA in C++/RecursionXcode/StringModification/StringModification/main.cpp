#include "iostream"
#include "string"
using namespace std;
void stringMod(char *reader , char *writer , char *end_ptr);
int main(){
    string s = "axbxcxdx";
    stringMod( &(s[0]), &(s[0]), &(s[s.size() - 1]));
    cout << s << endl;
}

void stringMod(char *reader , char *writer , char *end_ptr){
    if (reader <= end_ptr){
        if (*reader == 'x'){
            reader++;
            stringMod( reader, writer ,end_ptr);
        } else {
            *writer = *reader;
            writer++;
            reader++;
            stringMod( reader, writer ,end_ptr);
        }
    } else {
        if (writer <= end_ptr){
            *writer = 'x';
            writer++;
            stringMod( reader , writer , end_ptr);
        }
    }
    
}
