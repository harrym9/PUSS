#include <stdio.h>

int main()
{
    int consciousness, bleeding, pain, age, score=10;
    printf("Is the patient conscious? (0 no, 1 yes): ");
    scanf("%d", &consciousness);

    if (consciousness == 0){
        printf("Emergency Intervention!\n");
        return 0;}

    printf("Is there bleeding? (0 none, 1 little, 2 a lot): ");
    scanf("%d", &bleeding);
    printf("Is there pain? (0 none, 1 little, 2 a lot): ");
    scanf("%d", &pain);
    printf("Patient's age: ");
    scanf("%d", &age);

    if(bleeding == 2 || (pain == 2 && age >= 65))
    {
        score += 40;
        printf("Red zone, Patient urgency score: %d", score);
    }
    else if (bleeding == 1 || pain == 2)
    {
        score += 20;
        printf("Yellow zone, Patient urgency score: %d", score);
    }
    else if (bleeding == 1 || pain == 1)
    {
        score += 10;
        printf("Green zone, Patient urgency score: %d", score);
    }
    else
    {
        printf("How can I assist?");
    }
    return 0;
}