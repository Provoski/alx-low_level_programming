/**
 * _isalpha - check lower alphabet
 * Description: check if inputed letter is lower or capital
 * @c: value to check
 * Return: 0 if capital or 1 if lower
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
