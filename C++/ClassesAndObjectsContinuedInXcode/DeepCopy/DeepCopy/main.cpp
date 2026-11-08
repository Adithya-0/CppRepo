#include "iostream"
using namespace std;

class Deep {
private:
    int *data;
public:
    void set_data_value(int d){
        *data = d;
    }
    int get_value_data(){
        return *(data);
    }
    // Constructor
    Deep(int d);
    //Copy Constructor
    Deep (const Deep &source);
    // Destructor
    ~Deep();
    
};

Deep::Deep(int d){
    data = new int;
    *data = d;
}
Deep::Deep(const Deep &source){
    data = new int;
    *data = *(source.data);
    cout << "Copy constructor - deep" << endl;
}
//When an object is being copied, the Default constructor wont be called, but only the copy constructor will be called, hence the line on 28 where we are intializing the variable data.
//So with the deep copy, the original object's data pointer and the copied object's data pointer are pointing to 2 different locations, but the value stored in the locations they are pointing to will be same
// Dereferencing one object's pointer and altering the value stored, will not affect the value stored in the other object's pointer
Deep::~Deep() {
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_deep(Deep s){
    cout << s.get_value_data() << endl;
}
int main(){
    Deep obj1 {100};
    display_deep(obj1);
    
    Deep obj2 {obj1};
    obj2.set_data_value(1000);
}


