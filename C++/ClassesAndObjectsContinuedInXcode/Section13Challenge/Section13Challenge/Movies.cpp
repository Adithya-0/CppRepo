//
//  Movies.cpp
//  Section13Challenge
//
//  Created by Adithya R on 04/10/26.
//

#include "Movies.hpp"
#include <iostream>
void Movies::addMovie(const Movie &movie){
    for(int i = 0; i < movies_vec.size() ; i++){
        if(movie.getMovieName() == movies_vec[i].getMovieName()){
            std::cout << "Movie already exists" << std::endl;
            return;
        }
    }
    movies_vec.push_back(movie);
    std::cout << "Added " << movie.getMovieName() << "." << std::endl;
}
void Movies::display(){
    if(movies_vec.size() == 0){
        std::cout << "Nothing to display." << std::endl;
    }
    for(int i = 0 ; i < movies_vec.size() ; i++){
        std::cout << movies_vec[i].getMovieName() << ", " << movies_vec[i].getMovieRating() << ", " << movies_vec[i].getNumberOfTimesWatched() << std::endl;
    }
}

void Movies::increment(std::string movieName){
    bool found = false;
    for(int i = 0 ; i <movies_vec.size() ; i++){
        if(movies_vec[i].getMovieName() == movieName){
            found = true;
        }
        if(i == movies_vec.size() - 1 && found==false){
            std::cout << "No movie found for " << movieName   << std::endl;
        }
    }
    for(int i =0; i < movies_vec.size() ; i++){
        if(movies_vec[i].getMovieName() == movieName){
            movies_vec[i].incrementNumberOftimesWatched();
        }
    }
}
