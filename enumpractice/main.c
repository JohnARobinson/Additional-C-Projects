#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft};

    enum company GOOGLE = Google;
    enum company XEROX = Xerox;
    enum company EBAY = Ebay;
    printf("%d\n", GOOGLE);
    printf("%d\n", Xerox);
    printf("%d\n", Ebay);
    return 0;
}
