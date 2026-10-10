//
//  main.cpp
//  ClassTemplates
//
//  Created by Adithya R on 04/10/26.
//

#include <iostream>
using namespace std;
template <typename T>
class Item{
private:
    std::string name;
    T value;
public:
    Item(std::string name_val  , T val) : name{name_val} , value{val}{}
    std::string get_name() const {return name;}
    T get_value() const {return value;}
};

template <typename T1 , typename T2>
struct My_Pair{
    T1 first;
    T2 second;
};
int main(int argc, const char * argv[]) {
    Item<int> item1{"Item1" , 50};
    Item<float> item2{"Item2" , 17.95};
    Item<std::string> item3 {"Frank" , "Professor"};
    Item<Item<std::string>>item4{"Frank" , {"C++" , "Professor"}};
    cout << item1.get_value() << endl;
    cout << item2.get_value() << endl;
    cout << item4.get_value().get_name()  << endl;
    cout << item4.get_value().get_value() << endl;
    vector<Item<float>> vec{};
    vec.push_back({"Adithya" , 50.75});
    vec.push_back({"Other" , 65.9});
    vec.push_back({"One more" , 76.876});
    for(const auto &item : vec){
        cout << item.get_name() <<" " << item.get_value() << endl;
    }
    My_Pair<int , double> my_pair1 {12 , 15.5};
    My_Pair<int , string> my_pair2 {12 , "Pair2"};
    My_Pair<int , string> my_pair3 {12 , "Pair3"};
    My_Pair<int , string> my_pair4 {12 , "Pair4"};
    vector<My_Pair<int, string>> vec1{};
    vec1.push_back(my_pair2);
    vec1.push_back(my_pair3);
    vec1.push_back(my_pair4);
    
}
