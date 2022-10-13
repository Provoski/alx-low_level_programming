/**
 * array_iterator - perform a specific operation on all
 * element of an array
 * @array: array element variable
 * @size: size of array
 * @action: pointer to function that acts on the elemnt of array
 * Return: Nothing
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	int index;
	int temp;

	temp = 0;
	for (index = 0; index < size; index++)
	{
		temp = array[index];
		action(temp);
	}
}
