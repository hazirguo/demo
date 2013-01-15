#include <stdio.h>
#include <WINDOWS.H>
#include <LOCALE.H> 

typedef wchar_t* string;

void addChar(string inputStr, wchar_t letter)
{
int len = wcslen(inputStr);
inputStr = (string)realloc(inputStr, (len+2) * sizeof(wchar_t));

*(inputStr + len) = letter;
*(inputStr + len + 1) = L'\0';
}

void main()
{
setlocale(LC_ALL, "");
//  printf("什么情况？？");

string inputStr = (string)malloc(sizeof(wchar_t));
*inputStr = '\0';

long int i;
for (i = 0; i < 1000; i++)
{
addChar(inputStr, L'汗');
wprintf(L"%s\n", inputStr);
}

free(inputStr);
}
