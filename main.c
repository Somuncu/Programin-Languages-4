#include <stdio.h>
#include <stdlib.h>
#include<string.h>

// ÖMER BULUT --> 05160000909   &&  BURAK ÖZÇELİK --> 05160000905

int main()
{
    int x,z;
    int flag=0;
       char sayi[100],*p;
   char harf;
   printf("Sayinizi giriniz: " );
   gets(sayi);
   int uzunluk;
  // printf("uzunluk:%d",sayi[uzunluk-1]);
do{
fflush(stdin);
printf("\nSayiyi bir artirmak istiyorsaniz 'c' veya 'C' ye uygulamadan cikmak istiyorsaniz (x)'e basiniz ");
 scanf("%c",&harf);
uzunluk=strlen(sayi);

 if(harf=='c' || harf=='C')
{

 if(sayi[uzunluk-1]!=57){
            sayi[uzunluk-1] = sayi[uzunluk-1] + 1;
           // printf("\sayi:%s",sayi);
          }

else if(sayi[uzunluk-1]==57)
{
         for(int i=1;i<=uzunluk;i++)
        {
                   if(sayi[uzunluk-i]==57)
                    {
                    sayi[uzunluk-i]=48;
                            if(sayi[uzunluk-i-1]!=57)
                            {
                                sayi[uzunluk-i-1]=sayi[uzunluk-i-1]+1;
                                break;
                            }
                    }
          }

for(z=0;z<uzunluk;z++){
        if(sayi[z]==48)
       {
            flag=flag+1;
       }
      }
if(flag==uzunluk)
{
    sayi[0]=49;
    sayi[uzunluk]=48;
        sayi[uzunluk+1]=0;
}
}
printf("%s",sayi);
}
else if(harf!='c' && harf!='x')
{
    printf("\n Yanlis karakter girdiniz...");
}

}while(harf!='x');


   printf("\nCikis yapilmistir son sayi = %s",sayi);
    return 0;
}
