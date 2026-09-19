#include <iostream>
#include <vector>

int main(){
    std::vector <char> vowels; // empty vector
    std::vector <char> vowels1(5); // 5 elements all intialized to 0
    std::vector <char> vowels2{'a' , 'e' , 'i' , 'o' , 'u'};
    vowels.push_back('i');
    std::cout << "Vowels vector now has the character " << vowels.at(0) << " in it" << std::endl;
    std::cout << "There are " << vowels2.size() << " elements in vowels2" << std::endl;
    std::cout << vowels2[0] << std :: endl ;
    std::cout << vowels2[4] << std::endl;
    std::vector <int> test_scores(3,100); // 3 elements all initialized to 100
    /****** HAVE TO DO ALL THIS BECAUSE NUMBERS IS NOT INITIALIZED */
    // std::cout << "Enter 3 numbers" << std::endl;
    //std::vector <int> numbers;
    // int x = 0;
    // std::cin >> x;
    // numbers.push_back(x);
    // int y = 0;
    // std::cin >> y;
    // numbers.push_back(y);
    // int z = 0;
    // std::cin >> z;
    // numbers.push_back(z);
    /**********************************************/


    /************************IF NUMBERS IS INTIALIZED***************/
    std::vector <int> numbers(3);
    std::cout << "Enter 3 numbers" << std::endl;
    std::cin >> numbers.at(0);
    std::cin >> numbers.at(1);
    std::cin>> numbers.at(2);
    /****************************************************************/

    // Example of a 2-D vector
    std::vector <std::vector<int>> movie_ratings {
        {1,2,3,4},
        {1,2,4,4},
        {1,2,5,4}
    };
    std::cout << movie_ratings.at(2).at(2) << std::endl; 

    

}