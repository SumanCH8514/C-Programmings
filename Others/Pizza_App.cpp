// Code Topic: //,
#include <iostream>
using namespace std;
int main()
{

    int ch1, pz1, cl1, pz_q, cl_q;
    printf("What Do Want to Buy?\n");

    printf("1.Pizza.\n2.Cold Drinks.\n");

    scanf("%d", &ch1);

    switch (ch1)
    {
    case 1:
        printf("Select Items Bellow.\n");
        printf("1.Garlic Pizza. ($200)\n2.Spicy Pizza ($150).\n3.Normal Margarita Pizza ($100).\n");
        scanf("%d", &pz1);
        printf("Enter Quantity [ex: 1,2,..n]: ");
        scanf("%d", &pz_q);
        printf(".........INVOICE..........\n");
        switch (pz1)
        {
        case 1:
            int t = 200 * pz_q;
            printf("Item: Garlic Pizza. ($200) X Qty: %d = Total = %d", pz_q, t);
            break;
        case 2:
            int t = 150 * pz_q;
            printf("Item: Spicy Pizza ($150) X Qty: %d = Total = %d", pz_q, 150 * t);
            break;
        case 3:
            int t = 100 * pz_q;
            printf("Item: Normal Margarita Pizza ($100) X Qty: %d = Total = %d", pz_q, 100 * t);
            break;
        default:
            printf("Please Select Correct Option!");
            break;
        }
        break;
    case 2:
        printf("Select Items Bellow.\n");
        printf("1.Cola 1000ml. ($10)\n2.Sprite 750ml ($7).\n3.7Up 1000ml ($10).\n");
        scanf("%d", &cl1);
        printf("Enter Quantity [ex: 1,2,..n]: ");
        scanf("%d", &cl_q);
        printf(".........INVOICE..........\n");
        switch (cl1)
        {
        case 1:
            printf("Item: Cola 1000ml ($10) X Qty: %d = Total = $ %d", cl_q, 10 * cl_q);
            break;
        case 2:
            printf("Item: Sprite 750ml ($7) X Qty: %d = Total = $ %d", cl_q, 7 * cl_q);
            break;
        case 3:
            printf("Item: 7Up 1000ml ($10) X Qty: %d = Total = $ %d", cl_q, 10 * cl_q);
            break;
        default:
            printf("Please Select Correct Option!");
            break;
        }
        break;
        break;
    default:
        printf("Please Select Correct Option!");
        break;
    }
    return 0;
}
