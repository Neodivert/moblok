/*
    Module      : Tetris
    Author      : Moisés J. Bonilla Caraballo
    Description : Main game class. It takes the control once SDL was init at main().
*/


/*                                             Includes                                        */
/***********************************************************************************************/

#include"Game.hpp"

/*                                        Global constants                                     */
/***********************************************************************************************/

#ifndef TETRIS_HPP
#define TETRIS_HPP

/*                                        Type declarations                                    */
/***********************************************************************************************/

class Tetris {
    private:
        Game *game_;
        SDL_Surface* screen_;
        Mix_Music *music_;

    public:
        /*                         1. Inicialization and destruction                           */
        Tetris() throw( const char* );
        ~Tetris();

        /*                               2. Other functions                                    */
        void Start();
        void MainMenu();
};


#endif
// TETRIS_HPP
