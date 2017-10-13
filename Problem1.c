#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int x1, x2, minZ;
	minZ = 0;
	x1 = 1;
	x2 = 1;
	double toplam = 0.95*x1 + 0.99*x2;

	for (x2 = 1; toplam <= 250; x2++)
	{
		for (x1 = 1; x1 <= 3 * x2; x1++)
		{
			toplam = 0.95*x1 + 0.99*x2;

			if (toplam >= 250)
			{
				printf("x1 karisim miktari = %d \nx2 karisim miktari= %d\n", x1, x2);
				minZ = 175 * x1 + 200 * x2;
				printf("Minimum Z = 175*%d(x1) + 200*%d(x2) = %d\n", x1, x2, minZ);
				printf("%f\n", toplam);
			}
		}
	}

	return 0;
}


/* Programın Çıktısı */

/*

x1 karisim miktari = 195
x2 karisim miktari= 66
Minimum Z = 175*195(x1) + 200*66(x2) = 47325
Toplam : 250.590000

x1 karisim miktari = 196
x2 karisim miktari= 66
Minimum Z = 175*196(x1) + 200*66(x2) = 47500
Toplam : 251.540000

x1 karisim miktari = 197
x2 karisim miktari= 66
Minimum Z = 175*197(x1) + 200*66(x2) = 47675
Toplam : 252.490000

x1 karisim miktari = 198
x2 karisim miktari= 66
Minimum Z = 175*198(x1) + 200*66(x2) = 47850
Toplam : 253.440000


*/
