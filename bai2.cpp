#include<stdio.h>
#include<string.h>
void chuhoacanchuyen(char s[]) {
	for(int i=0;i<strlen(s);i++) {
		if(s[i] >= 97 && s[i] <= 122) {
			s[i] -= 32;
		}
	}
}
int main () {
	char s[80];
	printf("nhap chuoi : ");
	gets(s);
	chuhoacanchuyen(s);
	
	printf("Chuoi sau khi doi :%s",s);	
}

