#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int angka;
    int a,b,c,d;
    int i,j,k, n;
    int t[5];
    menu:
    puts("======================");
    puts("Tugas Quiz ASD");
    puts("======================\n");
    puts("1. Level 1");
    puts("2. Level 2");
    puts("3. Level 3");
    puts("4. Exit");
    printf("\nMasukkan Angka :");
    scanf("%d", &angka);
    system("cls");
    puts("======================\n");


    switch(angka){
    	case 1:
            system("cls");
    	    level1:
    		printf("Masukkan sebuah angka: ");
    		scanf("%d", &n);

    		for (i = 0; i <=n; i++){
    			for(j = 0; j <= i; j++){
    				printf("%d ", i+j);
				}
				printf("\n");
			}

            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto level1;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto menu;
            }
    		break;
    	case 2:
    	    system("cls");
    	    level2:
    		printf("Masukkan sebuah angka : ");
    		scanf("%d", &n);

    		for (i = 0; i <=n; i++){
    			for(j = 0; j <= i; j++){
    				printf("%d ", i*j);
				}
				printf("\n");
			}
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto level2;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto menu;
            }
    		break;
    	case 3:
    	    system("cls");
    	    level3:
    		printf("Masukkan angka (maks 9): ");
    		scanf("%d", &n);

    		for (i = 1; i <= n; i++) {
        		for (j = i; j < n; j++) {
            		printf(" ");
        	}

        		for (k = 1; k <= (2 * i - 1); k++) {
            		printf("%d", (k > i) ? 2 * i - k : k);
        		}
				printf("\n");
			}
			for (i = n - 1; i >= 1; i--) {
        		for (j = i; j < n; j++) {
            		printf(" ");
        	}

        		for (k = 1; k <= (2 * i - 1); k++) {
            		printf("%d", (k > i) ? 2 * i - k : k);
        		}

        printf("\n");
    }
            printf("\n");
            printf("ulang?(y/t)");
            scanf("%s", &t);
            if(strcmp(t,"y")==0||strcmp(t,"Y")==0){
                system("cls");
                goto level3;
            }if(strcmp(t,"t")==0||strcmp(t,"T")==0){
                system("cls");
                goto menu;
            }
    		break;
    	case 4:
    	    system("cls");
    		printf("TERIMA KASIH --- GOOD LUCK \n\n");
    		printf("Press any key to exit...\n");
    		getchar();
   			return 0;
    		break;
    	default:
    		printf("Masukkan angka yang benar!");
	}

	return 0;
}
