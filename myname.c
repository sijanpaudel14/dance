#include <stdio.h>
void name(char[]);
int main()
{
	system("cls");
	char s[20];
	scanf("%s", &s);
	name(s);
	// printf("%s",s);
	int x=5;
	printf("%d",x);
	return 0;
}
void name(char s[20])
{
	printf("%s", s);
}