#include "tetromino.h"

// Piece "sprites"
// Based on the Super Rotation System:
// https://tetris.fandom.com/wiki/SRS
const std::array<std::string, 7> Tetromino::tetrominoes = {
	"    IIII        ",
	"ZZ  ZZ   ",
	" SSSS    ",
	"OOOO",
	" T TTT   ",
	"  LLLL   ",
	"J  JJJ   "
};

Tetromino::Tetromino(int tnum)
	: tnum{tnum}, sprite{tetrominoes.at(tnum)}
{
	sidelen = tetrominoSideLengths.at(tnum);
}

char Tetromino::getSpriteChar(int i) const
{
	return sprite.at(i);
}

char Tetromino::getSpriteLen() const
{
	return sprite.size();
}

void Tetromino::reset(int tnum)
{
	x = 4;
	y = 1;
	rot = 0;
	sidelen = tetrominoSideLengths.at(tnum);
	sprite = tetrominoes.at(tnum);
}
