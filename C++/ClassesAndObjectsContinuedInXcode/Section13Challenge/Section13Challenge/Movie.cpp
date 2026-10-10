//
//  Movie.cpp
//  Section13Challenge
//
//  Created by Adithya R on 04/10/26.
//

#include "Movie.hpp"
Movie::Movie(std::string movieName , std::string movieRating , int numberOfTimesWatched ){
    (*this).movieName = movieName;
    (*this).movieRating = movieRating;
    (*this).numberOfTimesWatched = numberOfTimesWatched;
}
std::string Movie::getMovieName() const{
    return movieName;
}
std::string Movie::getMovieRating() const {
    return movieRating;
}

int Movie::getNumberOfTimesWatched() const{
    return numberOfTimesWatched;
}
void Movie::incrementNumberOftimesWatched(){
    numberOfTimesWatched++;
}


