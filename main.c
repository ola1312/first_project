#include <stdio.h>

int main(void)
{
  for (int i = 0; i < 10; i++)
    puts ("MASŁO!");
  
puts("Ktoś tu nie lubi masła?");
puts("Jeśli tak naciśnij y, jeśli nie n:");
char znak = getchar ();
switch (znak)
{
case 'y':
puts("Super, ja też!");
break;
case 'n':
puts("Ojoj, przykro mi...");
}
printf("\n");
int wybor;
puts("Dokonaj wyboru:");
scanf("%d", &wybor);
switch (wybor)
{
case 1:
puts("JEDEN!");
break;
case 2:
puts("DWA!");
break;
default:
puts("ZŁY WYBÓR!");
}
printf("\n");
puts("Kolejne liczby naturalne mniejsze od 100, będące wielokrotnością 3:");
for(int n = 1; n<100; n++)
if(n % 3 == 0)
printf("%d ", n);
return 0;
}