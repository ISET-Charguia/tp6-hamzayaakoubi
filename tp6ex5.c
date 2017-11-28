/*
 ============================================================================
 Name        : tp6ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int nbOccurences(char ch1[], char ch2[]);
int main(void) {
	char ch1[30];
	char ch2[20];
	do {
		printf("donner la premier chaine");
		gets(ch1);
		printf("donner la deuxiéme chaine");
		gets(ch2);

	} while (strlen(ch1) < strlen(ch2));
	printf("nb occ %d", nbOccurences(ch1, ch2));
}
int nbOccurences(char ch1[], char ch2[]) {
	int i = 0;
	int nb_occ = 0;
	int j, c;
	while (ch1[i] != '\0') {

		if (ch1[i] == ch2[0]) {

			j = i;
			c = 0;
			while (ch2[c] != '\0' && ch1[j] == ch2[c]) {

				c++;
				j++;
			}
			printf("%d %d\n",c,strlen(ch2));
			if (c == strlen(ch2)) {
				nb_occ++;
			}
		}
		i++;
	}
	return nb_occ;
}
