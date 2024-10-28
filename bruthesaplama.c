#include <stdio.h>
#include <string.h>
int main()
{

double brutmaas;
double net_maas;
double maas;
 printf("Maasini giriniz:");
 scanf("%lf",&maas);
   

    double sgk_primi_orani = 0.14;
    double issizlik_primi_orani = 0.01;
    double gelir_vergisi_orani = 0.15; // İlk dilim için %15 örneği
    double damga_vergisi_orani = 0.00759;

    // Kesintiler hesaplanıyor
    double sgk_primi = maas * sgk_primi_orani;
    double issizlik_primi = maas * issizlik_primi_orani;
    double gelir_vergisi = maas * gelir_vergisi_orani;
    double damga_vergisi = maas * damga_vergisi_orani;

    // Net maaş hesaplanıyor
    net_maas = maas - (sgk_primi + issizlik_primi + gelir_vergisi + damga_vergisi);

    // Sonuçları ekrana yazdır
    printf("SGK Primi Kesintisi: %.2lf\n", sgk_primi);
    printf("İşsizlik Primi Kesintisi: %.2lf\n", issizlik_primi);
    printf("Gelir Vergisi Kesintisi: %.2lf\n", gelir_vergisi);
    printf("Damga Vergisi Kesintisi: %.2lf\n", damga_vergisi);
    printf("Net Maaş: %.2lf\n", net_maas);




return 0;

}