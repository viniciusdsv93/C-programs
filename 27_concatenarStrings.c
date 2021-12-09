# include <stdio.h>

int main(void) {

	void concatenarStrings(char string1[], int t1,
					       char string2[], int t2,
					       char string3[]);
					   
	char pal1[] = {'d','o','i','s',' '};
	char pal2[] = {'t','r','e','s'};
	char pal3[9];
	
	concatenarStrings(pal1, 5, pal2, 4, pal3);
	
	int i;
	for (i = 0; i < 9; i++) {
		printf("%c", pal3[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}

void concatenarStrings(char string1[], int t1,
					   char string2[], int t2,
					   char string3[]) {
	
	int i, j;
	
	for (i = 0; i < t1; i++) {
		string3[i] = string1[i];
	}
	
	for (j = 0; j < t2; j++) {
		string3[j + t1] = string2[j];
	}
}

