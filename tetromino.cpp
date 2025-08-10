#include "tetromino.hpp"

const std::array<std::string_view, 7> Tetromino::tetrominoes = {
    "    IIII        ",
    "ZZ  ZZ   ",
    " SSSS    ",
    "OOOO",
    " T TTT   ",
    "  LLLL   ",
    "J  JJJ   "
};

const std::array<int, 7> Tetromino::tetrominoSideLengths = {4, 3, 3, 2, 3, 3, 3};

Tetromino::Tetromino(int tnum)
	: tnum{tnum}, sprite{tetrominoes.at(tnum)}
{
	sidelen = tetrominoSideLengths.at(tnum);
}

char Tetromino::getSpriteChar(int i) const
{
	return sprite.at(i);
}

int Tetromino::getSpriteLen() const
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

