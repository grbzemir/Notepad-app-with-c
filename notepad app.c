#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

void yeni()
{
    char dosyaAdi[20];
    char metin[1000];
    int secim;
    char ch;
    system("cls");

    printf("yeni belge olustrma sayfasi \n");
    printf("dosya adi giriniz : ");
    scanf("%s", dosyaAdi);

    FILE *ptr = fopen(dosyaAdi, "w");

    if(ptr != NULL)
    {
    
    system("cls");
    printf("%s isimli dosya olusturuldu \n", dosyaAdi);

    bas:

    printf("1- metin ekle \n");
    printf("2-dosya icerigini goruntule \n");
    printf("3-dosya icerigi temizleme \n");
    printf("4-ana menuye don \n");
    printf("seciminiz : ");
    scanf("%d", &secim);

    if(secim==1)
    {
        printf("metin girişi yapınız : ");
        scanf("%s", metin);
        ptr=(fopen(dosyaAdi, "a"));
        fclose(ptr);
        system("cls");
        printf("metin eklendi \n");
    }
    else if(secim==2)
    {
        ptr=fopen(dosyaAdi, "r");
        system("cls");
        printf("dosya icerigi : \n");
        while((ch=fgetc(ptr))!=EOF)
        {
            ch=fgetc(ptr);
            printf("%c", ch);
        }
        fclose(ptr);
    }
    else if (secim==3)
    {
        ptr=fopen(dosyaAdi, "w");
        fclose(ptr);
        system("cls");
        printf("dosya icerigi temizlendi \n");
    }
    else if(secim==4)
     {
        system("cls");
        fclose(ptr);
        return 0;
     }
     else 
     {
       system("cls");
       fclose(ptr);
       printf("hatali secim yaptiniz ! \n");  
     }
    
    goto bas;

    }
    else
    {
        
        printf("dosya olusturulamadi \n");
    }


}

void ac()
{
    
    char dosyaAdi[20];
    char metin[1000];
    int secim;
    char ch;
    system("cls");

    printf("belge acma sayfasi  \n");
    printf(" acmak istediginiz dosya adi giriniz : ");
    scanf("%s", dosyaAdi);

    FILE *ptr = fopen(dosyaAdi, "r");

    if(ptr != NULL)
    {
    
    system("cls");
    printf("\n%s isimli dosya acildi \n", dosyaAdi);

    bas:

    printf("1- metin ekle \n");
    printf("2-dosya icerigini goruntule \n");
    printf("3-dosya icerigi temizleme \n");
    printf("4-ana menuye don \n");
    printf("seciminiz : ");
    scanf("%d", &secim);

    if(secim==1)
    {
        printf("metin girişi yapınız : ");
        scanf("%s", metin);
        ptr=(fopen(dosyaAdi, "a"));
        fclose(ptr);
        system("cls");
        printf("metin eklendi \n");
    }
    else if(secim==2)
    {
        ptr=fopen(dosyaAdi, "r");
        system("cls");
        printf("dosya icerigi : \n");
        while((ch=fgetc(ptr))!=EOF)
        {
            ch=fgetc(ptr);
            printf("%c", ch);
        }
        fclose(ptr);
    }
    else if (secim==3)
    {
        ptr=fopen(dosyaAdi, "w");
        fclose(ptr);
        system("cls");
        printf("dosya icerigi temizlendi \n");
    }
    else if(secim==4)
     {
        system("cls");
        fclose(ptr);
        return 0;
     }
     else 
     {
       system("cls");
       fclose(ptr);
       printf("hatali secim yaptiniz ! \n");  
     }
    
    goto bas;

    }
    else
    {
        system("cls");
        printf(" %s isimli dosya bulunamadi \n",dosyaAdi);
    }


}



int menu ()
{

    int secim;
    printf("NOT DEFTERİ \n\n");
    printf("1-Yeni\n");
    printf("2-Aç\n");
    printf("0-cikis\n");
    printf("seciminiz : ");
    scanf("%d", &secim);

    return secim;

}


int main ()
{

 int secim;
 secim = menu();

 while(secim != 0)
{
    switch(secim)
    {
        case 1:
        yeni();
        break;
        case 2:
        ac();
        break;
        case 0:
        printf("cikis yaptiniz \n");
        break;
        default:
        printf("hatali secim yaptiniz\n");
    }
    secim = menu();
}

    return 0;
}