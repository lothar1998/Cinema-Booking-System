//
// Created by Piotr on 12.11.2019.
//

#ifndef SIMPLE_EXAMPLE_ROOM_H
#define SIMPLE_EXAMPLE_ROOM_H

#include <vector>
#include "Movie.h"
#include "Seat.h"
#include "Description.h"


class Room{
public:
    Room() = default;

    virtual Movie getMovie() = 0;
    virtual void setMovie(Movie movie) = 0;
    virtual std::vector<Seat> & getSeats() = 0;
    virtual Description getDescription() = 0;
};

#endif //SIMPLE_EXAMPLE_ROOM_H
