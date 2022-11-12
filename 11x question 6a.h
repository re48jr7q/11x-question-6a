#ifndef X_QUESTION_6A
#define X_QUESTION_6A

enum CardSuitClubs
{
	C_2,
	C_3,
	C_4,
	C_5,
	C_6,
	C_7,
	C_8,
	C_9,
	C_10,
	C_jack,
	C_queen,
	C_king,
	C_ace,

	C_total,
};
enum CardSuitDiamonds
{
	D_2,
	D_3,
	D_4,
	D_5,
	D_6,
	D_7,
	D_8,
	D_9,
	D_10,
	D_jack,
	D_queen,
	D_king,
	D_ace,

	D_total,
};
enum CardSuitSpades
{
	S_1,
	S_2,
	S_3,
	S_4,
	S_5,
	S_6,
	S_7,
	S_8,
	S_9,
	S_10,
	S_jack,
	S_queen,
	S_king,
	S_ace,

	S_total,
};
enum CardSuitHearts
{
	H_2,
	H_3,
	H_4,
	H_5,
	H_6,
	H_7,
	H_8,
	H_9,
	H_10,
	H_jack,
	H_queen,
	H_king,
	H_ace,

	H_total,
};
template<typename T>
struct Card
{
	T rank{};
	T suit{};
};
#endif
