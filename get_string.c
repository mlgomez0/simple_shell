#include "holberton.h"
/**
  * get_string - receives a string from the promt and save it in a buffer
  * Return: a pointer of a string of char
  */
char *get_string(int *i)
{
	char *_str = NULL;
	size_t _size_str = 0;

	*i = getline(&_str, &_size_str, stdin);
	return (_str);
}
