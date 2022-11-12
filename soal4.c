#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
    int a, limapuluh, duapuluh, sepuluh, lima, dua, seribu, limaratus,seratus;
    limapuluh = 0;
    duapuluh = 0;
    sepuluh = 0;
    lima = 0;
    dua = 0;
    seribu = 0;
    limaratus = 0;
    seratus = 0;
    printf("jumlah uang kembali = Rp.");
    scanf("%d", &a);
    printf("Pecahan uang kembali: \n");
    while (a > 0) {
        while (a >= 50000) {
            a = a - 50000;
            limapuluh++;
        }
            while (a >= 20000 && a < 50000) {
                a = a - 20000;
                duapuluh++;
            }
                while (a >= 10000 && a < 20000) {
                    a = a - 10000;
                    sepuluh++;
                }
                    while (a >= 5000 && a < 10000) {
                        a = a - 5000;
                        lima++;
                    }
                        while (a >= 2000 && a < 5000) {
                            a = a - 2000;
                            dua++;
                        }
                            while (a >= 1000 && a < 2000) {
                                a = a - 1000;
                                seribu++;
                            }
                                while (a >= 500 && a < 1000) {
                                    a = a - 500;
                                    limaratus++;
                                }
                                    while (a >= 100 && a < 500) {
                                        a = a - 100;
                                        seratus++;
                                    }
    }
    printf("%d Lembar 50000", limapuluh);
    printf("\n%d Lembar 20000", duapuluh);
    printf("\n%d Lembar 10000", sepuluh);
    printf("\n%d Lembar 5000", lima);
    printf("\n%d Lembar 2000", dua);
    printf("\n%d Lembar 1000", seribu);
    printf("\n%d Lembar 500", limaratus);
    printf("\n%d Lembar 100", seratus);
    getch();
    return 0;
}