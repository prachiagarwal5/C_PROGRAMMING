#include <stdio.h>

int main()
{
    char a;
    printf("Enter the character:");
    scanf("%c",&a);
    switch(a){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("VOWEL");
        break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'j':
        case 'z':
        printf("consonent");
        break;
        default:
        printf("invalid character");
        break;
    }
 return 0;
}
