cmake_minimum_required(VERSION 3.13)  # CMake version check
project(simple_example)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 17)            # Enable c++14 standard

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp room/CinemaRoom.cpp room/CinemaRoom.h room/Seat.cpp room/Seat.h movie/Movie.h
        movie/Movie.cpp room/Room.cpp room/Room.h seance/Seance.cpp seance/Seance.h room/RoomFactory.h
        room/CinemaRoomFactory.h room/CinemaRoomFactory.cpp db/Database.cpp db/Database.h sqlite/sqlite3.c sqlite/sqlite3.h
        sqlite/sqlite3ext.h db/QueryLoader.cpp db/QueryLoader.h db/QueryParser.cpp db/QueryParser.h exception/InitializeDatabaseException.h
        command/Command.cpp command/Command.h command/InitializeAdminAccount.cpp command/InitializeAdminAccount.h command/InitializeCinemaSystem.cpp
        command/InitializeCinemaSystem.h command/InitializeRooms.cpp command/InitializeRooms.h command/ReturnRoom.cpp command/ReturnRoom.h
        command/SelectOccupiedRooms.cpp command/SelectOccupiedRooms.h command/CreateSeance.cpp command/CreateSeance.h command/RegisterUserCommand.cpp
        command/RegisterUserCommand.h command/LoginUserCommand.cpp command/LoginUserCommand.h command/CreateMovieCommand.cpp
        command/CreateMovieCommand.h command/DeleteMovieCommand.cpp command/DeleteMovieCommand.h command/ListMoviesCommand.cpp
        command/ListMoviesCommand.h command/DeleteSeance.cpp command/DeleteSeance.h command/OrderSeat.h command/OrderSeat.cpp
        command/CreateMovieCommand.h command/DeleteMovieCommand.cpp command/DeleteMovieCommand.h command/ListMoviesCommand.cpp command/ListMoviesCommand.h
        command/DeleteSeance.cpp command/DeleteSeance.h command/ListSeancesCommand.cpp command/ListSeancesCommand.h
        command/CreateMovieCommand.h command/DeleteMovieCommand.cpp command/DeleteMovieCommand.h command/ListMoviesCommand.cpp
        command/ListMoviesCommand.h command/DeleteSeance.cpp command/DeleteSeance.h command/ListSeancesCommand.cpp
        command/ListSeancesCommand.h command/SeancePropertiesCommand.cpp command/SeancePropertiesCommand.h workflow.h command/SelectMovieCommand.cpp command/SelectMovieCommand.h)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(simple_example ${SOURCE_FILES})

#set(CMAKE_PREFIX_PATH /home/ubuntu/mysql-connector-c++-8.0.18-linux-glibc2.12-x86-64bit)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(simple_example Threads::Threads)

target_link_libraries(simple_example ${CMAKE_DL_LIBS})
