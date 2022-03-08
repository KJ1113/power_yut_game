#pragma once
#include "Board_Piece.h"

class Board
{
private:
	Board_Piece bp[11][11];
public:
	Board_Piece &getBoardPiece(int y , int x);
	pair<int, int> getMovePoint(int y ,int x, int yut_num);
	void pieceInit();
	void lastPiece_check(Mal* point_mal); // (ù��°&������ ���� �ʱ�ȭ)

	Board();
	~Board();
};