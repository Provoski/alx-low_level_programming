/**
 * _isalpha - check lower alphabet
 * Description: check if inputed letter is lower or capital
 * @c: value to check
 * Return: 0 if capital or 1 if lower
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && (c > 90))
	{
		return (1);
	}
	else
	{
		return (1);
	}
	return (0);
}
