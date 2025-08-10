#ifndef TETROMINO_H
#define TETROMINO_H

#include <string_view>
#include <array>

class Tetromino {
public:
	int tnum {};
	int x {4};
	int y {1};
	int rot {0};
	int sidelen;

	Tetromino(int tnum);

	char getSpriteChar(int i) const;
	int getSpriteLen() const;
	void reset(int tnum);

private:
	std::string_view sprite;
	// Piece "sprites" based on the Super Rotation System:
	// https://tetris.fandom.com/wiki/SRS
	static const std::array<std::string_view, 7> tetrominoes;
	static const std::array<int, 7> tetrominoSideLengths;
};

#endif

