#pragma once
#ifndef ERROR_H
#define ERROR_H

#include<string>
using namespace std;

enum ErrorCode
{
	Incorrect_rating,
	Incorrect_point,
	Incorrect_price,
	Incorrect_quantity,
	IndexOutsideLimit,
	MaxSizeReached,
	ZeroQuantity
};

class Error
{
private:
	ErrorCode code;
public:
	Error(ErrorCode code);
	string to_str();
};

#endif