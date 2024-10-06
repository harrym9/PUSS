#include <stdio.h>

int main()
{
    int bilinc, kanama, agri, yas, puan=10;
    printf("Bilinci yerinde mi? (0 hayir, 1 evet): ");
    scanf("%d", &bilinc);

    if (bilinc==0){
        printf("Acil Müdahele!\n");
        return 0;}

    printf("Kanamasi var mi? (0 yok, 1 az, 2 cok): ");
    scanf("%d", &kanama);
    printf("Agrisi var mi? (0 yok, 1 az, 2 cok): ");
    scanf("%d", &agri);
    printf("Hasta yasi: ");
    scanf("%d", &yas);

    if(kanama==2 || agri ==2 && yas>=65)
    {
        puan += 40;
        printf("Kirmizi alan, Hasta aciliyet skoru: %d",puan);
    }
    else if (kanama==1 || agri ==2)
    {
        puan += 20;
        printf("Sari alan, Hasta aciliyet skoru: %d",puan);
    }
    else if (kanama==1 || agri ==1)
    {
        puan += 10;
        printf("Yeşil alan, Hasta aciliyet skoru: %d",puan);
    }
    else
    {
        printf("Nasil yardimci olabilirim?");
    }
    return 0;
}
