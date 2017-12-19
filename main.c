#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable - placeholder for something else
    //all variables: start with a letter, only _ as acceptable symbol, no spaces, don't name after a function
    int age;
    int currentYear = 2017;
    int birthYear = 1980;
    
    age = currentYear - birthYear; // boom! just coded an age calculator!
    
    printf("Quentin is %d years old.\n", age);
    
    return 0;
}
