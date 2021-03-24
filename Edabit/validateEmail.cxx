/*
https://edabit.com/challenge/SJFpboG5pTixXQFAA
Create a function that accepts a string, checks if it's a valid email address and returns either true or false, depending on the evaluation.

    The string must contain an @ character.
    The string must contain a . character.
    The @ must have at least one character in front of it.
        e.g. "e@edabit.com" is valid while "@edabit.com" is invalid.
    The . and the @ must be in the appropriate places.
        e.g. "hello.email@com" is invalid while "john.smith@email.com" is valid.

If the string passes these tests, it's considered a valid email address.
*/

#include <iostream>

bool validateEmail(const char *s)
{
    // 1. Check if it contains '@' character
    // 2. Check if it contains '.' character
    // 3. Check if there is a character infront of @
    // 4. Check if there is at least one '.' on the right of '@'
    bool result = false;

    // define flags for switch statment
    bool atSymbol = false; // @ character
    bool literal = false;  // character on the left from @
    bool dot = false;      // a dot on the right from @
    int ascii = 0;         //ascii decimal for the character

    // main loop
    while (*s)
    {
        ascii = (int)(*s);
        switch (*s)
        {
        case '@':
            if (!atSymbol && literal)
            {
                atSymbol = true;
                result = true;
            }
            else
            {
                return false;
            }
            break;
        case '.':
            dot = true;
            if (atSymbol)
            {
                result = true;
            }
            else
            {
                return false;
            }
            break;
        default:
            if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122))
                literal = true;
            else if (ascii < 45 || ascii == 47 || (ascii > 57 && ascii < 64) || (ascii > 91 && ascii < 94) || ascii == 96 || ascii > 122)
                return false;
        }
        // move pointer to the next character
        s++;
    }
    if (!dot)
        result = false;

    return result;
}

int main()
{
    // clang-format off
    std::cout << std::boolalpha;
    std::cout << "validateEmail(""@gmail.com"") = "
              << validateEmail("@gmail.com") << std::endl;
    std::cout << "validateEmail(""hello.gmail@com"") = "
              << validateEmail("hello.gmail@com") << std::endl;
    std::cout << "validateEmail(""gmail"") = "
              << validateEmail("gmail") << std::endl;
    std::cout << "validateEmail(""hello@gmail"") = "
              << validateEmail("hello@gmail") << std::endl;
    std::cout << "validateEmail(""hello@edabit.com"") = "
              << validateEmail("hello@edabit.com") << std::endl;
    std::cout << "validateEmail(""hel23_34lo@edabit.com"") = "
              << validateEmail("hel23_34lo@edabit.com") << std::endl;
    std::cout << "validateEmail(""hello&@edabit.com"") = "
              << validateEmail("hello&@edabit.com") << std::endl;
}

/* 
validateEmail("@gmail.com") ➞ false

validateEmail("hello.gmail@com") ➞ false

validateEmail("gmail") ➞ false

validateEmail("hello@gmail") ➞ false

validateEmail("hello@edabit.com") ➞ true
*/