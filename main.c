#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int flag_menu = 0;
	int id = 0;
	int size = 0;


	do {
		printf("\n Vvedite nomer zadani9 \n");
		scanf_s("%d", &flag_menu);
		

		if (flag_menu == 1) {
			char str[100];
			printf("Vvedite stroky \n ");
			fflush(stdin);
			id = 0;
			while (getchar != '\n') {
				fgets(str, 100, stdin);
				id++;
				if (id >= 2) {
					break;
				}
			}
			
			printf("Vvedena9 stroka = \n");
			puts(str);

			size = strlen(str);

			for (int i = 0; i < size; i++) {
				if (str[i] == ' ') {
					str[i] = '\t';
				}
			}

			printf("Polu4ena9 stroka = \n");
			puts(str);

		}


		if (flag_menu == 2) {
			char str[100];
			printf("Vvedite stroky \n ");
			fflush(stdin);
			id = 0;
			while (getchar != '\n') {
				fgets(str, 100, stdin);
				id++;
				if (id >= 2) {
					break;
				}
			}

			printf("Vvedena9 stroka = \n");
			puts(str);

			size = strlen(str);

			int kol_number = 0;
			int kol_chars = 0;
			int kol_simbols = 0;
			char t ="";
			for (int i = 0; i < size; i++) {
				t = str[i];
				if (t >='a' && t<='z') {
					kol_chars++;
				}
				if (t <= '9' && t >= '1') {
					kol_number++;
				}
				if ((t<'a' && t>'Z')&& (t<'1' && t>'9') ) {
					kol_simbols++;
				}
			}

			printf("koli4estvo numbers= %d", kol_number);
			printf("\n Koli4estvo chars = %d", kol_chars);
			printf("\n Koli4estvo simbols=  %d", kol_simbols);



		}



		if (flag_menu == 3) {

			char str[100];
			printf("Vvedite stroky \n ");
			fflush(stdin);
			id = 0;
			while (getchar != '\n') {
				fgets(str, 100, stdin);
				id++;
				if (id >= 2) {
					break;
				}
			}

			printf("Vvedena9 stroka = \n");
			puts(str);

			size = strlen(str);
			int ind = 0;

			for (int i = 0; i < size; i++) {
				if (str[i] == ' ') {
					ind++;
				}
			}
			printf("Koli4estvo slov = %d", ind);
			ind = 0;

		}

		if (flag_menu == 4) {

			char str[100];
			printf("Vvedite stroky \n ");
			fflush(stdin);
			id = 0;
			while (getchar != '\n') {
				fgets(str, 100, stdin);
				id++;
				if (id >= 2) {
					break;
				}
			}

			printf("Vvedena9 stroka = \n");
			puts(str);

			size = strlen(str);
			int ind = 0;
			ind = 0;
			for (int i = 0; i < size-1; i++) {
				if (str[i] == str[size-i-2]) {
					ind=0;
				}
				else {
					ind = 1;
				}
			}
			if (ind == 0) {
				printf("Stroka 9vl9etsa polindromom");

			}
			else {
				printf("Stroka NE 9vl9etsa polindromom");
			}

		}


		if (flag_menu == 5) {

			char str[100];
			printf("Vvedite stroky \n ");
			fflush(stdin);
			id = 0;
			while (getchar != '\n') {
				fgets(str, 100, stdin);
				id++;
				if (id >= 2) {
					break;
				}
			}

			printf("Vvedena9 stroka = \n");
			puts(str);

			size = strlen(str);
			int ind = 0;
			ind = 0;

			printf("Vvedite nomer ydol9emoi poziciu ");
			scanf_s("%d", &ind);
			ind--;
			for (int i = 0; i < size; i++) {
				if (i >= ind) {
					str[i] = str[i + 1];
				}
			}
			printf("Polu4ena9 stroka = \n");
			puts(str);

		}

		if (flag_menu == 6) {
			char str[100];
			printf("Vvedite stroky \n ");
			fflush(stdin);
			id = 0;
			while (getchar != '\n') {
				fgets(str, 100, stdin);
				id++;
				if (id >= 2) {
					break;
				}
			}

			printf("Vvedena9 stroka = \n");
			puts(str);

			size = strlen(str);
			int ind = 0;
			ind = 0;
			char str_2;
			printf("Vvedite  ydol9emoi simvol ");
			scanf_s("%c", &str_2);
			
			for (int i = 0; i < size; i++) {
				if (str[i]==str_2) {
					str[i] = ' ';
				}
			}
			printf("Polu4ena9 stroka = \n");
			puts(str);

		}


		if (flag_menu == 7) {

			char str[100];
			printf("Vvedite stroky \n ");
			fflush(stdin);
			id = 0;
			while (getchar != '\n') {
				fgets(str, 100, stdin);
				id++;
				if (id >= 2) {
					break;
				}
			}

			printf("Vvedena9 stroka = \n");
			puts(str);

			size = strlen(str);
			int ind = 0;
			ind = 0;

			printf("Vvedite nomer  poziciu \n");
			scanf_s("%d", &ind);
			fflush(stdin);
			ind--;
			char str_2;
			char t;
			printf("Vvedite   simvol \n ");
			fflush(stdin);
			scanf_s("%c", &str_2);
			fflush(stdin);
			for (int i = 0; i < size; i++) {
				if (i == ind) {
					t = str[i];
					str[i] = str_2;
					for (int j = size; j >=i; j--) {
						str[j] = str[j - 1];
					}
					str[i + 1] = t;

				}
				
			}

			printf("Polu4ena9 stroka = \n");
			puts(str);

		}
	


	} while (flag_menu != 0);
	
	
	return(0);
}
