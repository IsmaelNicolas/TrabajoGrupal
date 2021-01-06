#if !defined(__ID_verificator_h)
#define __ID_verificator_h

using namespace std;

class ID_verificator{
public:
	bool ID_verify(char* ID);
protected:
	bool is_between(int min, int number, int max);
	int next_ten(int number);
	bool check_last_digit(char* ID);
};

#endif
