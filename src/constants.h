#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <SDL/SDL.h>

class Constants {
	public:
		static const uint16_t INTELLIGENCE_BLINKY     = 90;    // intelligence for each ghost
		static const uint16_t INTELLIGENCE_PINKY      = 60;
		static const uint16_t INTELLIGENCE_INKY       = 30;
		static const uint16_t INTELLIGENCE_CLYDE      = 0;
		static const uint16_t INIT_UP_DOWN            = 0;     // initial up/down cycles before the ghost will be allowed to leave the castle
		static const uint16_t INIT_UP_DOWN_INKY       = 5;
		static const uint16_t INIT_UP_DOWN_CLYDE      = 11;
		static const int MIN_FRAME_DURATION           = 30;    // duration of a loop in milliseconds (i.e. minimum time between frames)
		static const uint16_t START_OFFSET            = 4500;  // waiting time when the level starts, in ms
		static const uint16_t START_OFFSET_2          = 1500;  // waiting time after respawn, in ms
		static const uint16_t WAIT_FOR_NEW_LEVEL      = 1000;  // waiting time between eating last pill and display of the new level
		static const uint16_t PAUSE_AFTER_BONUS_SCORE = 400;   // waiting time after eating a ghost or a fruit
		static const int YELLOW                       = 1;     // colors for init text
		static const int RED                          = 2;
		static const int INITIAL_LIVES                = 3;     // number of times the player must die to get the "game over"
		static const int PACMAN_INITIAL_X             = 310;   // starting position of Pacman
		static const int PACMAN_INITIAL_Y             = 339;
		static const int PACMAN_V_FAST                = 100;   // pacman's speed when not eating
		static const int PACMAN_V_SLOW                = 90;    // pacman's speed while eating
		static const uint16_t PACMAN_WECHSEL_RATE     = 7;     // load a new image for pacman after a movement of this number of pixels
		static const int BLINKY_INITIAL_X             = 310;   // starting positions of the ghosts
		static const int BLINKY_INITIAL_Y             = 174;
		static const int PINKY_INITIAL_X              = 310;
		static const int PINKY_INITIAL_Y              = 222;
		static const int INKY_INITIAL_X               = 280;
		static const int INKY_INITIAL_Y               = 222;
		static const int CLYDE_INITIAL_X              = 340;
		static const int CLYDE_INITIAL_Y              = 222;
		static const int TOTAL_NUM_GHOSTS             = 4;     // total number of ghosts in the game
		static const int GHOSTS_V_NORMAL              = 90;    // normal speed of the ghosts
		static const int GHOSTS_V_SLOW                = 50;    // speed at hunting mode
		static const int NUMBER_RAILS                 = 91;    // number of rails
		static const int NUMBER_RAILS_PILLS           = 69;    // number of pill-filled rails
		static const int NUMBER_PILLS                 = 246;   // number of pills
		static const int NORMAL_PILL_SCORE            = 10;    // score that will be added if Pacman eats a normal pill
		static const int SUPER_PILL_SCORE             = 50;    // score that will be added if Pacman eats a superpill
		static const int LEFT_TUNNEL_BLOCK_X          = 100;   // position of tunnel blocks
		static const int RIGHT_TUNNEL_BLOCK_X         = 515;
		static const int TUNNEL_BLOCK_Y               = 215;
		static const int TUNNEL_BLOCK_WIDTH           = 30;
		static const int TUNNEL_BLOCK_HEIGHT          = 30;
		static const int CASTLE_X                     = 310;   // target point within castle (for returning ghosts)
		static const int CASTLE_Y                     = 190;
		static const int INIT_TEXT_X                  = 320;   // center position of init text
		static const int INIT_TEXT_Y                  = 268;
		static const int FRUIT_X                      = 310;   // position (upper left corner) of the fruit that can be eaten
		static const int FRUIT_Y                      = 257;
		static const int INFO_FRUIT_X                 = 525;   // position (upper left corner) of the level's info fruit
		static const int INFO_FRUIT_Y                 = 430;
		static const int LIVES_X                      = 530;   // position (upper left corner) of the lives display
		static const int LIVES_Y                      = 110;
		static const int LIVES_DISTANCE               = 3;     // distance between lives pictures
		static const int WINDOW_WIDTH                 = 640;   // screen settings
		static const int WINDOW_HEIGHT                = 480;
		static const int BITS_PER_PIXEL               = 24;
		static const int MAX_UPDATE_RECTS             = 200;

	private:
		Constants();
		~Constants();
};

#endif