//
//  Movies.hpp
//  Section13Challenge
//
//  Created by Adithya R on 04/10/26.
//

#ifndef Movies_hpp
#define Movies_hpp
#include "Movie.hpp"
#include <stdio.h>
#include <string>
#include <vector>
class Movies{
private:
    std::vector<Movie> movies_vec;
public:
    void addMovie(const Movie &movie);
    void display();
    void increment(std::string movieName);
};
#endif /* Movies_hpp */
