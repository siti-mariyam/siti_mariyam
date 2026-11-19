#include <stdio.h>

int main() {
    char nama[50];
    int porsi;
    float kalori, karbo, protein, lemak;
    float total_kalori, total_karbo, total_protein, total_lemak;
    float rata_rata_kalori;
    int sisa_modulus;

    printf("=== PORSIMAKANKU ===\n");

    printf("Nama makanan: ");
    scanf(" %[^\n]", nama);

    printf("Jumlah porsi: ");
    scanf("%d", &porsi);

    printf("Kalori per porsi: ");
    scanf("%f", &kalori);

    printf("Karbohidrat per porsi: ");
    scanf("%f", &karbo);

    printf("Protein per porsi: ");
    scanf("%f", &protein);

    printf("Lemak per porsi: ");
    scanf("%f", &lemak);

    // *
    total_kalori = kalori * porsi;
    total_karbo = karbo * porsi;
    total_protein = protein * porsi;
    total_lemak = lemak * porsi;

    // /
    rata_rata_kalori = total_kalori / porsi;

    // %
    sisa_modulus = (int)total_kalori % 100;

    // +
    float total_gizi = total_karbo + total_protein + total_lemak;

    // -
    float selisih = total_kalori - total_gizi;

    printf("\n=== HASIL DATA ===\n");
    printf("Nama makanan       : %s\n", nama);
    printf("Jumlah porsi       : %d\n", porsi);
    printf("Total kalori       : %.2f kkal\n", total_kalori);
    printf("Total karbohidrat  : %.2f g\n", total_karbo);
    printf("Total protein      : %.2f g\n", total_protein);
    printf("Total lemak        : %.2f g\n", total_lemak);
    printf("Rata-rata kalori   : %.2f kkal\n", rata_rata_kalori);
    printf("Total gizi         : %.2f g\n", total_gizi);
    printf("Selisih             : %.2f\n", selisih);
    printf("Sisa modulus       : %d\n", sisa_modulus);

    return 0;
}