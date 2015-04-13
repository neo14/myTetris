#ifndef _DRAW_TETRIS_H_
#define _DRAW_TETRIS_H_

#include "header.h"
#include "console.h"


class DrawTetris {
public:
	DrawTetris();
	void start(void); //������Ϸ
	void DrawScoreAndLevel(void); // ���Ƶ÷ֺ��Ѷȼ���
	void DrawNext(void); // ���� "next��" �е�ͼ��
	void DrawOver(void); // ��Ϸ����
	void DrawBlock(WORD color);  //��ש��
	bool InRange(int x, int y, int c, int z); // ������x,y,c,z�Ƿ����
	void RemoveRow(void); // ����
	void MoveTrans(void); // ��ʱ�뷭ת
	void MoveLeft(void);  // ������
	void MoveRight(void); // ������
	void MoveDown(void); // ������
	void DealKey(void); // �������̣���Ӧ����

private:
	int score, level;
	char data[19][11];
	int next;
	int x, y, c, z; // x����,y����,c��ǰ����,z����
    Console console;
};

const WORD COLOR_A = /*FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY;*/FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY;
const WORD COLOR_B = FOREGROUND_GREEN | FOREGROUND_INTENSITY; //�䵽�ײ��ķ����� ��ɫ
const WORD COLOR_C = FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE; //������ķ����� ��ɫ
const char FULLLINE[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };



const char bg[] =
"��������������������������              "
"��������������������������  ��������    "
"�������������������������� MUSIC:       "
"��������������������������   ����: =    "
"��������������������������    �� : -    "
"��������������������������  PLAY: Enter "
"�������������������������� PAUSE: Space "
"��������������������������  QUIT: Esc   "
"�������������������������� �Σţأ�     "
"��������������������������������������  "
"��������������������������������������  "
"��������������������������������������  "
"��������������������������������������  "
"�������������������������� �̣ţ֣ţ�   "
"��������������������������������������  "
"����������������������������       0��  "
"��������������������������������������  "
"�������������������������� �ӣãϣң�   "
"��������������������������������������  "
"����������������������������   00000��  "
"��������������������������������������  ";

const char bk[7][4][4][4] = {
	{
		{ { 0, 1, 1, 0 }, { 1, 1, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 0, 0, 0 }, { 1, 1, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 0, 1, 1, 0 }, { 1, 1, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 0, 0, 0 }, { 1, 1, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 0, 0 } }
	}
	,
	{
		{ { 1, 1, 0, 0 }, { 0, 1, 1, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 0, 1, 0, 0 }, { 1, 1, 0, 0 }, { 1, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 1, 0, 0 }, { 0, 1, 1, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 0, 1, 0, 0 }, { 1, 1, 0, 0 }, { 1, 0, 0, 0 }, { 0, 0, 0, 0 } }
	}
	,
	{
		{ { 1, 1, 1, 0 }, { 1, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 0, 0, 0 }, { 1, 0, 0, 0 }, { 1, 1, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 0, 0, 1, 0 }, { 1, 1, 1, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 1, 0, 0 }, { 0, 1, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 0, 0 } }
	}
	,
	{
		{ { 1, 1, 1, 0 }, { 0, 0, 1, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 1, 0, 0 }, { 1, 0, 0, 0 }, { 1, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 0, 0, 0 }, { 1, 1, 1, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 0, 1, 0, 0 }, { 0, 1, 0, 0 }, { 1, 1, 0, 0 }, { 0, 0, 0, 0 } }
	}
	,
	{
		{ { 1, 1, 0, 0 }, { 1, 1, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 1, 0, 0 }, { 1, 1, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 1, 0, 0 }, { 1, 1, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 1, 0, 0 }, { 1, 1, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } }
	}
	,
	{
		{ { 0, 1, 0, 0 }, { 1, 1, 1, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 0, 1, 0, 0 }, { 1, 1, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 1, 1, 0 }, { 0, 1, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 0, 0, 0 }, { 1, 1, 0, 0 }, { 1, 0, 0, 0 }, { 0, 0, 0, 0 } }
	}
	,
	{
		{ { 1, 1, 1, 1 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 0, 0, 0 }, { 1, 0, 0, 0 }, { 1, 0, 0, 0 }, { 1, 0, 0, 0 } },
		{ { 1, 1, 1, 1 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } },
		{ { 1, 0, 0, 0 }, { 1, 0, 0, 0 }, { 1, 0, 0, 0 }, { 1, 0, 0, 0 } }
	}
};


#endif /* _DRAW_TETRIS_H_ */