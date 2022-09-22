#include "main.h"
/**
 * main - program entry point
 * Return: 0 on success;
 */

int main(void)
{
	int s1[] = {46,5,4,34,5,6,5,56};
	
	reverse_array(s1, sizeof(s1)/sizeof(int));
	return 0;
}
