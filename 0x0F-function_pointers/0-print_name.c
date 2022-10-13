/**
 * print_name - it prints a name
 * @name: name variable
 * @f: a pointer that point to a funtion that print
 * Return: Nothing, just print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
