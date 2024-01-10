#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)
#define packageA 24.50
#define packageB 26.00
#define packageC 27.50
#define packageD 29.00
#define deliveryFees 5.00

void main()
{
	char surname[30];
	char phoneNumber[12];
	char address1[40];
	char address2[40];
	char address3[40];
	int quantitySoldA=0, quantitySoldB=0, quantitySoldC=0, quantitySoldD=0, customerNo, totalQty;
	float packageCharges, totalToPay, delivery, discounts, totalAmount, priceA, priceB, priceC, priceD, salesAmountA, salesAmountB, salesAmountC, salesAmountD;
	char yesno;
	int i = 0; //i for increment for customer number

	do {
		int qtyA = 0, qtyB = 0, qtyC = 0, qtyD = 0, totalCustomer=0; 
		char package;


			printf("                     _______  __   __            \n");
			printf("                    |       ||  | |  |           \n");
			printf("                    |    ___||  |_|  |           \n");
			printf("                    |   | __ |       |           \n");
			printf("                    |   ||  ||       |           \n");
			printf("                    |   |_| ||   _   |           \n");
			printf("                    |_______||__| |__|           \n");
			printf("                  -vegetables and fruits -              \n");
			printf("                          WELCOME                       \n");
			printf("\n");
			printf("                  Vegetable Ordering System              \n");
			printf("\n");
			printf("\n");
			printf("  <MENU PRICES> \n");

			printf("  Customer No:  ");
			scanf(" %d", &customerNo);
			i++;
			totalCustomer += customerNo;
			rewind(stdin);
			printf("  Enter surname : ");
			scanf(" %[^\n]", surname);
			rewind(stdin);

			printf("  Enter phone number : ");
			scanf(" %[^\n]", phoneNumber);
			rewind(stdin);

			printf("  Enter address : \n");
			printf("        address 1 : ");
			scanf(" %[^\n]", address1);
			rewind(stdin);

			printf("        address 2 : ");
			scanf(" %[^\n]", address2);
			rewind(stdin);

			printf("        address 3 : ");
			scanf(" %[^\n]", address3);
			rewind(stdin);

			printf("\n");
			do {
				int q = 0; //quantity initialized to 0

				printf("  Package A, B, C, D (X=exit): ");
				scanf(" %c", &package);
				package = toupper(package);

				if (package == 'A' || package == 'B' || package == 'C' || package == 'D' || package == 'X'|| package == 'x') {
					if (package == 'A' || package == 'B' || package == 'C' || package == 'D') {
						printf("  Quantity : ");
						scanf(" %d", &q);


						if (package == 'A') {
							qtyA += q;
						}

						else if (package == 'B') {
							qtyB += q;
						}

						else if (package == 'C') {
							qtyC += q;
						}

						else if (package == 'D') {
							qtyD += q;
						}

					}
				}
				else {
					puts("Invalid package! Please enter the package again!");
					printf("  Package A, B, C, D (X=exit): ");
					scanf(" %c", &package);
					package = toupper(package);
					if (package == 'A' || package == 'B' || package == 'C' || package == 'D') {
						printf("  Quantity : ");
						scanf(" %d", &q);


						if (package == 'A') {
							qtyA += q;
						}

						else if (package == 'B') {
							qtyB += q;
						}

						else if (package == 'C') {
							qtyC += q;
						}

						else if (package == 'D') {
							qtyD += q;
						}

					}
				}

			} while (package == 'A' || package == 'B' || package == 'C' || package == 'D');

			printf("\n");
			printf("              INVOICE              \n");
			printf("\n");
			printf("  Name      : Mr / Ms %s\n", surname);
			printf("  Telephone : %s\n", phoneNumber);
			printf("  Address   : %s\n", address1);
			printf("              %s\n", address2);
			printf("              %s\n", address3);

			//calculations
			priceA = qtyA * 24.50; //total price of A
			priceB = qtyB * 26.00; //total price of B
			priceC = qtyC * 27.50; //total price of C
			priceD = qtyD * 29.00; //total price of D

			quantitySoldA += qtyA; //add up the quantity of product A
			quantitySoldB += qtyB; //add up the quantity of product B
			quantitySoldC += qtyC; //add up the quantity of product C
			quantitySoldD += qtyD; //add up the quantity of product D


			packageCharges = priceA + priceB + priceC + priceD;

			if (packageCharges < 80) {
				delivery = deliveryFees;
				discounts = 0.00;
				totalToPay = packageCharges + delivery;
			}
			else {
				delivery = 0.00;
				discounts = packageCharges * 0.15;
				totalToPay = packageCharges + delivery - discounts;
			}

			printf("\n");

			if (qtyA) {
				printf("\n\tPackage A : %d @ RM24.50 = RM % 6.2f", qtyA, priceA);
			}

			if (qtyB) {
				printf("\n\tPackage B : %d @ RM26.00 = RM % 6.2f", qtyB, priceB);
			}

			if (qtyC) {
				printf("\n\tPackage C : %d @ RM27.50 = RM % 6.2f", qtyC, priceC);
			}

			if (qtyD) {
				printf("\n\tPackage D : %d @ RM29.00 = RM % 6.2f", qtyD, priceD);
			}


			printf("\n");
			printf("\n");
			printf("\t\tPACKAGE Charges = RM %6.2f \n", packageCharges);
			printf("\t\tDelivery Fees   = RM %6.2f \n", delivery);
			printf("\t\tDiscounts       = RM %6.2f \n", discounts);
			printf("\t\tTotal to Pay    = RM %6.2f \n", totalToPay);
			printf("\n");

			printf("     THANK YOU, HAVE A NICE DAY!!            \n");

			printf("\n\n Next customer (Y=yes?) : ");
			scanf(" %c", &yesno);
			yesno = toupper(yesno);

		} while (yesno == 'Y');


			//calculations
			salesAmountA = quantitySoldA * packageA;
			salesAmountB = quantitySoldB * packageB;
			salesAmountC = quantitySoldC * packageC;
			salesAmountD = quantitySoldD * packageD;
			totalQty = quantitySoldA + quantitySoldB + quantitySoldC + quantitySoldD;
			totalAmount = salesAmountA + salesAmountB + salesAmountC + salesAmountD;


			printf("\n");
			printf("           DAILY SALES SUMMARY REPORT      \n");
			printf("Total Number of Customers = %d\n", i);
			printf("PACKAGE\t\tQuantity Sold\tSales Amount\n");
			printf("   A\t\t%d\t\t%-0.2f\n", quantitySoldA, salesAmountA);
			printf("   B\t\t%d\t\t%-0.2f\n", quantitySoldB, salesAmountB);
			printf("   C\t\t%d\t\t%-0.2f\n", quantitySoldC, salesAmountC);
			printf("   D\t\t%d\t\t%-0.2f\n", quantitySoldD, salesAmountD);
			printf("========\t==============\t============\n");
			printf(" TOTAL\t\t%d\t\t%-0.2f\n", totalQty, totalAmount);
			printf("\t\t<ENDING message>\n");

		system("pause");
	}
