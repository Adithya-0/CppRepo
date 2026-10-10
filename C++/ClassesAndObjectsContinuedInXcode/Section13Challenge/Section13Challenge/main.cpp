//
//  main.cpp
//  Section13Challenge
//
//  Created by Adithya R on 04/10/26.
//

#include <iostream>
#include "Movies.hpp"
int main(int argc, const char * argv[]) {
    Movies movies;
    movies.display();
    movies.addMovie({"Cindrella" , "13" , 1});
//    movies.increment("XXXXX");
    movies.addMovie({"TASM2" , "13" , 1});
    movies.addMovie({"Top gun" , "13" , 15});
    movies.increment("Cindrella");
    movies.increment("Top gun");
    std::cout << "=========================" << std::endl;
    movies.display();
    
    movies.addMovie({"Cindrella" , "13" , 1});
    movies.increment("XXXXX");
    Movies movies2;
    movies2.display();
}
