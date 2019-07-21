
//Practice with enums
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT};

    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("The value of Xerox is: %d\n", xerox);
    printf("The value of Google is: %d\n", google);
    printf("The value of Ebay is: %d", ebay);

    return 0;
}