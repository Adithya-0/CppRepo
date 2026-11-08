#include "iostream"
using namespace std;

class Move {
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
    Move(int d);
    //Copy Constructor
    Move (const Move &source);
    // Move constructor
    Move (Move &&source) noexcept;
    // Destructor
    ~Move();
    
    
};

Move::Move(int d){
    data = new int;
    *data = d;
}
Move::Move(Move &&source) noexcept{
    data = source.data;
    source.data = nullptr;
    cout << "Move constructor called" << endl;
}
Move::Move(const Move &source){
    data = new int;
    *data = *(source.data);
    cout << "Copy constructor - deep" << endl;
}
//When an object is being copied, the Default constructor wont be called, but only the copy constructor will be called, hence the line on 28 where we are intializing the variable data.
//So with the deep copy, the original object's data pointer and the copied object's data pointer are pointing to 2 different locations, but the value stored in the locations they are pointing to will be same
// Dereferencing one object's pointer and altering the value stored, will not affect the value stored in the other object's pointer
Move::~Move() {
    
    if(data == nullptr){
        cout << "Destructor freing data for nullptr" << endl;
    } else{
        cout << "Destructor freeing data for " << *data << endl;
    }
    delete data;
}

void display_deep(Move s){
    cout << s.get_value_data() << endl;
}
int main(){
    vector<Move> vec;
    vec.push_back(Move(10));
    vec.push_back(Move(30));
    vec.push_back(Move(40));

    
}
    

