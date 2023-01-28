#include "tetromino.h"

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
