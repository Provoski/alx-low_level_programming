/**
 * _islower - check lower alphabet
 * Description: check if inputed letter is lower or capital
 * @c: value to check
 * Return: 0 if capital or 1 if lower
 */
int _islower(int c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
