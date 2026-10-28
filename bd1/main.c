#include <stdio.h>


double scoreToPoint(int score)
{
    if (score >= 94)
        return 4.0;
    else if (score >= 90)
        return 3.7;
    else if (score >= 87)
        return 3.3;
    else if (score >= 83)
        return 3.0;
    else if (score >= 80)
        return 2.7;
    else if (score >= 77)
        return 2.3;
    else if (score >= 73)
        return 2.0;
    else if (score >= 70)
        return 1.7;
    else if (score >= 67)
        return 1.3;
    else if (score >= 63)
        return 1.0;
    else if (score >= 60)
        return 0.7;
    else
        return 0.0;
}

int main(void)
{
   
    int n, i, score, credit;
    int max1, max2, max3;

    
    double totalCredits, totalPoints, gpa, point;

    
    do
    {
        printf("Хичээлийн тоо (5-10): ");
        scanf("%d", &n);
    } while (n < 5 || n > 10);

   
    totalCredits = 0;
    totalPoints  = 0;
    max1 = -1;
    max2 = -1;
    max3 = -1;
   
    for (i = 1; i <= n; i++)
    {
        do
        {
            printf("%d-р хичээлийн оноо (0-100): ", i);
            scanf("%d", &score);
        } while (score < 0 || score > 100);

        do
        {
            printf("%d-р хичээлийн кредит (1-6): ", i);
            scanf("%d", &credit);
        } while (credit < 1 || credit > 6);

        point = scoreToPoint(score);
        printf("Хичээл %d: оноо = %d, голч = %.1f\n", i, score, point);

        totalPoints  = totalPoints + point * credit;
        totalCredits = totalCredits + credit;

        if (score > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = score;
        }
        else if (score > max2)
        {
            max3 = max2;
            max2 = score;
        }
        else if (score > max3)
        {
            max3 = score;
        }
    }

    gpa = totalPoints / totalCredits;

    printf("\nНийт кредит: %6.1f\n", totalCredits);
    printf("GPA: %6.2f\n", gpa);
    printf("Шилдэг 3 оноо: %d, %d, %d\n", max1, max2, max3);

    return 0;
}

