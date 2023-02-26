#include "main.h"

/**
 * _islower - Chect is a charater a alowercase letter. Return 1 if true else 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	} else
	{
		return (0);
	}
}
