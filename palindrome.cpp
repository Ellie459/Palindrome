/* Ellie Goto
   9/14/26
   You will enter a series of characters and this will take out all the non-alphabets.
   It will then compare if it is a palindrome or not. */

#include <iostream>

using namespace std;

/* This compares if the string is a palindrrome or not
 It checks by looking at the start and the end of the string.
 if start string is equal to end string, it goes to the next one.
 If it is equal the whole time, it returns
 1 (true), and if it is not equal, it returns 0 (false). */
 
int compare(char *a)
{
  char *b;
  int flag = 1;

  b = a;
  while (*(b + 1) != '\0') b++;

  while (b > a)
    {
      if (*a != *b) flag = 0;
      a++;
      b--;
    }
  return flag;
}

int main()
{
  char characters[80];

  // makes the user enter a series of characters
  cout << "Enter character: ";
  cin.getline(characters, 80);

  // cout << "You entered: " << characters << endl;

  // turns everything into lower cases
  for (auto& x : characters)
    {
      x = tolower(x);
	}
  //cout << "It is now: "<< characters << endl;

  int j = 0;

  // takes every non-alphabets in the characters
  for (int i = 0; characters[i] != '\0'; ++i)
    {
      if (characters[i] >= 'a' && characters[i] <= 'z')
	{
	  characters[j++] = characters[i];
	}
    }

  characters[j] = '\0';

  //cout << "Finish: " << characters << endl;

  //cout << "check if palindrome: " << compare(characters) << endl;


  // prints out if the entered string is a palindrome or not
  if (compare(characters) == 1) {
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a palindrome" << endl;
  }

  
  return 0;
}
