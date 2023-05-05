/**
 * get_endianness - check the endianness
 *
 * return 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
