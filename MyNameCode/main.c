#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    enum gender {male, female};

    enum gender mygender, yourgender;
    mygender = male;
    yourgender = male;

    bool isMale = (mygender == yourgender);
    return 0;
}
