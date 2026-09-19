#include <iostream>

using namespace std;
int main(){
    char vowels[] {'a' , 'e' , 'i' , 'o' , 'u'};
    cout << "The last vowel is " << vowels[4] << endl;
    // cin >> vowels[5] // out of bounds - dont do this;
    // cout << vowels[5] << endl;

    double hi_temps[] {90.1 , 89.8 , 77.5 , 81.6};
    cout << "The first high temp is " << hi_temps[0] << endl;

    hi_temps[0] = 100.02;
    cout << "The first high temp is now " << hi_temps[0] << endl;

    cout << "===============" << endl;
    int test_scores [5]; // declaring without initizalizing is dangerous
    cout << "The first element is " << test_scores[0] << endl;
    cout << "The second element is " << test_scores[1] << endl;
    cout << "The third element is " << test_scores[2] << endl;
    cout << "The fourth element is " << test_scores[3] << endl;
    cout << "The fifth element is " << test_scores[4] << endl;
    cout << endl;
    cout << "=================" << endl;

    int test_scores1 [5] {0}; // declaring without initizalizing is dangerous
    cout << "The first element is " << test_scores1[0] << endl;
    cout << "The second element is " << test_scores1[1] << endl;
    cout << "The third element is " << test_scores1[2] << endl;
    cout << "The fourth element is " << test_scores1[3] << endl;
    cout << "The fifth element is " << test_scores1[4] << endl;
    cout << endl;
    cout << "=================" << endl;

    int test_scores2 [5] {100 , 90 , 80 , 70 , 60};      // declaring without initizalizing is dangerous
    cout << "The first element is " << test_scores2[0] << endl;
    cout << "The second element is " << test_scores2[1] << endl;
    cout << "The third element is " << test_scores2[2] << endl;
    cout << "The fourth element is " << test_scores2[3] << endl;
    cout << "The fifth element is " << test_scores2[4] << endl;
    cout << endl;
    cout << "=================" << endl;

    
    cout << "Enter 5 test scores" << endl;
    cin >> test_scores2[0];
    cin >> test_scores2[1];
    cin >> test_scores2[2];
    cin >> test_scores2[3];
    cin >> test_scores2[4];

    cout << "The new element at the 5th position is " << test_scores2[4] << endl;
    cout << "Notice what the value of the array name is: " << test_scores2 << endl;
    

    return 0;
}