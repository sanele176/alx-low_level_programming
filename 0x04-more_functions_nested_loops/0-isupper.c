#include "main.h"

/**
 * _isupper checks for uppercase character
 * @c is an variable that holds character
 * */

int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z'){
		return (1);
	}
	return (0);
}
