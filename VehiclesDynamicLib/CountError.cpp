#include "CountError.h"

const char* CountError::what() const
{
	return "Должно быть зарегистрировано хотя бы два транспортных средства!";
}