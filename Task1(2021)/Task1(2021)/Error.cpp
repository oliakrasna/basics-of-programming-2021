#include"Error.h"
#include<string>
using namespace std;

Error::Error(ErrorCode code)
{
	this->code = code;
}

string Error::to_str()
{
	switch (code)
	{
	case Incorrect_rating:
		return "Rating is incorrect";
	case Incorrect_point:
		return "Point is incorrect";
	case IndexOutsideLimit:
		return "Index is outside the limit";
	case MaxSizeReached:
		return "Max size reached";
	default:
		return "";
	}
}