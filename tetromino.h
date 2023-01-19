#ifndef TETROMINO_H
#define TETROMINO_H
#include <string>
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
	char getSpriteLen() const;
	void reset(int tnum);

private:
	std::string sprite;
	static const std::array<std::string, 7> tetrominoes;
	static constexpr std::array<int, 7> tetrominoSideLengths {{4, 3, 3, 2, 3, 3, 3}};
};

#endif
