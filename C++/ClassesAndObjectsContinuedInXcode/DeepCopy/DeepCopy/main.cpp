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


