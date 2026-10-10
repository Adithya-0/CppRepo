//
//  Movie.hpp
//  Section13Challenge
//
//  Created by Adithya R on 04/10/26.
//

#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <string>
class Movie{
private:
    std::string movieName;
    std::string movieRating;
    int numberOfTimesWatched;
public:
    Movie(std::string movieName = "None" , std::string movieRating = "U" , int numberOfTimesWatched = 1);
    std::string getMovieName() const;
    std::string getMovieRating() const;
    int getNumberOfTimesWatched() const;
    void incrementNumberOftimesWatched();
};
#endif /* Movie_hpp */
