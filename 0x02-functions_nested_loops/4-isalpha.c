/**
 * _isalpha - Checks for alphabetic characters.
 * @c: The character to be checked.
 * Return: 1 if c is lowercase or uppercase
 * 0 if otherwise.
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
