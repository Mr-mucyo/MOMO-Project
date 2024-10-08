
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


void displayMenu();
void sendMoney();
void buy();
void payBill();
void bankServices();
void loansandSavings();
void myMomoAccount();
void pendingApprovals();
void momoPay();
void myMomosecurity();
void insurance();
void momoTermsandconditions();
void macyeMacye();
void babylhealth();
void help();

void goBackToMenu(void (*menuFunction)());

	// Function to display the main menu

    void goBackToMenu(void (*menuFunction)()) {
        menuFunction(); 
    }
    
	void displayMenu() {
		system("cls||clear");
            printf("1) send money\n");
            printf("2) buy\n");
            printf("3) pay bill\n");
            printf("4) bank services\n");
            printf("5) loan and savings\n");
            printf("6) my momo account\n");
            printf("7) pending approvals\n");
            printf("8) momo pay\n");
            printf("9) my momo security\n");
            printf("10) insurance\n");
            printf("11) momo terms and conditions\n");
            printf("12) macye macye\n");
            printf("13) babyl health\n");
            printf("14) help\n");

            int choice;
            printf("Enter your choice: ");
            scanf("%d", &choice);
        
		    if (choice == 1) {
            sendMoney();
            }   
		    else if (choice == 2) {
            buy();
            }   
		    else if (choice == 3) {
            payBill();
            }   
		    else if ( choice == 4) {
            bankServices();
            }   
		    else if (choice == 5) {
            loansandSavings();
		    }   
		    else if (choice == 6) {
			myMomoAccount();
		    }   
		    else if (choice == 7) {
            pendingApprovals();
			}
            else if (choice == 8) {
            momoPay();
			}
            else if (choice == 9) {
            myMomosecurity();
			}
            else if (choice == 10) {
            insurance();
			}
            else if (choice == 11) {
            momoTermsandconditions();
			}
            else if (choice == 12) {
            macyeMacye();
			}
            else if (choice == 13) {
            babylhealth();
			}
            else if (choice == 14) {
            help();
            }
             
            // break;
    }
    
    void sendMoney() {
        // Clear the console screen before displaying
        system("cls||clear");
        int subOption;
            printf("1) MoMo User\n");
            printf("2) Send to eKash\n");
            printf("3) Across the Region\n");
            printf("4) Cancel Voucher\n");
            printf("5) Display Voucher\n");
            printf("6) List Active Voucher\n");
            printf("7) International Transfer\n");
            printf("8) Exchange Rate\n");
            printf("9) Exit\n");
            printf("0) Back\n");

        printf("Enter your choice: ");
        scanf("%d", &subOption);
        // Implement logic based on the selected sub-option
        switch (subOption) {
        case 1:
            {
                char recipientNumber[12]; // Assuming a maximum length of 11 digits for the mobile number
                system("cls||clear");
                printf("Enter recipient's Mobile number (Format 07xxxxxxxx): ");
                scanf("%s", recipientNumber);
                // Check if the entered number is valid
                if ((strncmp(recipientNumber, "078", 3) == 0 || strncmp(recipientNumber, "079", 3) == 0) &&
                    strlen(recipientNumber) == 10) {
                    system("cls||clear");
                    // Prompt the user to enter the amount to send
                    double amount;
                    printf("Enter amount to send to %s: ", recipientNumber);
                    scanf("%lf", &amount);
                    // Calculate the applicable fee
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 20.0;
                    } else if (amount <= 10000) {
                        fee = 100.0;
                    } else if (amount <= 100000) {
                        fee = 300.0;
                    }
                    {
	                system("cls||clear");
                    // Prompt the user to enter the PIN while displaying all relevant details
                    int pin;
                    printf("You entered:\n");
                    printf("Recipient's Mobile number: %s\n", recipientNumber);
                    printf("Amount: %.2lf RWF\n", amount);
                    printf("A fee of %.2lf RWF will be applicable.\n", fee);
                    printf("Enter the PIN to confirm the transaction: ");
                    scanf("%d", &pin);
                    }
                    {
				    system("cls||clear");
                    // Add logic to process the entered PIN
                    // For now, let's print a confirmation message
                    printf("Transaction confirmed. Money sent to %s.\n", recipientNumber);
                    }
                }   else {
                    // Invalid recipient number
                    printf("Receiver not found\n");
                }
                break;
            }
            case 2:
            	{
            		char recipientNumber[12]; // Assuming a maximum length of 11 digits for the mobile number
                    system("cls||clear");
                    printf("Enter Destiantion number or eKash ID:\n ");
                    scanf("%s", recipientNumber);
                    // Check if the entered number is valid
                    if ((strncmp(recipientNumber, "072", 3) == 0 || strncmp(recipientNumber, "073", 3) == 0) &&
                    strlen(recipientNumber) == 10) {
                   system("cls||clear");
                    // Prompt the user to enter the amount to send
                    double amount;
                    printf("Enter amount to send to %s: ", recipientNumber);
                    scanf("%lf", &amount);
                    // Calculate the applicable fee
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 100.0;
                    } else if (amount <= 10000) {
                        fee = 300.0;
                    } else if (amount <= 100000) {
                        fee = 500.0;
                    }
                    {
	                system("cls||clear");
                    // Prompt the user to enter the PIN while displaying all relevant details
                    int pin;
                    printf("You entered:\n");
                    printf("Recipient's Mobile number: %s\n", recipientNumber);
                    printf("Amount: %.2lf RWF\n", amount);
                    printf("A fee of %.2lf RWF will be applicable.\n", fee);
                    printf("Enter the PIN to confirm the transaction: ");
                    scanf("%d", &pin);
                    }
                    {
				    system("cls||clear");
                    // Add logic to process the entered PIN
                    // For now, let's print a confirmation message
                    printf("Transaction confirmed. Money sent to %s.\n", recipientNumber);
                    }
                    } else {
                    // Invalid recipient number
                    printf("customer does not exist in eKash\n");
                    }
                break;
                }
            case 3:
        	{
            system("cls||clear");
            // Display country selection options
            printf("Select destination country:\n");
    printf("1. Kenya\n");
    printf("2. Uganda\n");
    printf("3. Zambia\n");
    printf("4. Tanzania\n");
    printf("5. DR Congo\n");
    printf("6. Cameroon\n");
    printf("7. Cote d'Ivoire\n");
    printf("8. Gambia\n");
    printf("9. Ghana\n");
    printf("10. Guinea bissau\n");
    printf("11. Guinea conakry\n");
    printf("12. Morocco\n");
    printf("13. Mozambique\n");
    printf("14. Niger\n");
    printf("15. Senegal\n");
    printf("16. Sierra Leone\n");
    printf("17. Nigeria\n");

    // Get user's country selection
    int countryOption;
    printf("Enter your choice: ");
    scanf("%d", &countryOption);

    // Further processing based on the selected country
    switch (countryOption) {
        case 1:
             {
              system("cls||clear");
    int kenyaOption;
    printf("\nSend Money to Kenya Sub-Menu:\n");
    printf("1. Mpesa\n");
    // Add more options for other services in Kenya as needed

    printf("Enter your choice: ");
    scanf("%d", &kenyaOption);

    // Implement logic based on the selected option for Kenya
    switch (kenyaOption) {
        case 1:
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

               system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "254", 3) == 0 && strlen(recipientNumber) == 12) {
                  system("cls||clear");


                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                  system("cls||clear");

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in KSH
                    double receiveAmount = amount*0.12;
                   system("cls||clear");

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf KSH\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                      system("cls||clear");
                        //entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                      system("cls||clear");
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
             }
            break;
        // Add cases for other services in Kenya as needed
          }
          break;
            }
        case 2:
        	 {
           system("cls||clear");

    int ugandaOption;
    printf("\nSend Money to uganda Sub-Menu:\n");
    printf("1. MTN\n");
    // Add more options for other services in uganda as needed

    printf("Enter your choice: ");
    scanf("%d", &ugandaOption);

    // Implement logic based on the selected option for uganda
    switch (ugandaOption) {
        case 1:
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

                // Clear the console screen before displaying the prompt
              system("cls||clear");

                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "256", 3) == 0 && strlen(recipientNumber) == 12) {
                    
                   system("cls||clear");

                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");
                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in ugx
                    double receiveAmount = amount/3;
   

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf UGX\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                       system("cls||clear");
                        //entering the pin 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("Transaction successful\n");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                      printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
             }
            break;
        // Add cases for other services in uganda as needed
          }
          break;
     }
      case 3:
        	 {
        system("cls||clear");
    int zambiaOption;
    printf("\nSend Money to zambia Sub-Menu:\n");
    printf("1. MTN\n");
    // Add more options for other services in zambia as needed

    printf("Enter your choice: ");
    scanf("%d", &zambiaOption);

    // Implement logic based on the selected option for Kenya
    switch (zambiaOption) {
        case 1:
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

                  system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "260", 3) == 0 && strlen(recipientNumber) == 12) {
                    // Valid recipient number
                  system("cls||clear");

                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
  
                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in ZMW
                    double receiveAmount = amount*0.020;
                  system("cls||clear");

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf zmw\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                      system("cls||clear");

                        //entering the pin 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                 printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
             }
            break;
        // Add cases for other services in Kenya as needed
          }
          break;
     }
      case 4:
      	{
            system("cls||clear");

    int tanzaniaOption;
    printf("\nSend Money to Tanzania Sub-Menu:\n");
    printf("1. Tigo\n");
    // Add more options for other services in tanzania as needed

    printf("Enter your choice: ");
    scanf("%d", &tanzaniaOption);

    // Implement logic based on the selected option for tanzania
    switch (tanzaniaOption) {
        case 1:
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

                // Clear the console screen before displaying the prompt
                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "255", 3) == 0 && strlen(recipientNumber) == 12) {
                    // Valid recipient number
                                    // Clear the console screen before displaying the prompt
                    system("cls||clear");
                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                                      // Clear the console screen before displaying the prompt
                  system("cls||clear");

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in KSH
                    double receiveAmount = amount*1.99;
                     system("cls||clear");

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf TZS\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");
                        //entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                      system("cls||clear");
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
             }
            break;
        // Add cases for other services in tanzania as needed
          }
          break;
     }
      case 5:
      	{
            system("cls||clear");

    int congoOption;
    printf("\nSend Money to DR congo Sub-Menu:\n");
    printf("1. Airtel\n");
    printf("2.Vodacome\n");
    // Add more options for other services in DR congo as needed

    printf("Enter your choice: ");
    scanf("%d", &congoOption);

    // Implement logic based on the selected option for DR congo
    switch (congoOption) {
        case 1://airtel
        case 2://vodacome
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

               system("cls||clear");

                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "243", 3) == 0 && strlen(recipientNumber) == 12) {
                    // Valid recipient number
                     system("cls||clear");


                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                     system("cls||clear");

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in CDF
                    double receiveAmount = amount*2.1343;
                  system("cls||clear");
                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf CDF\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                       system("cls||clear");
                        //entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
             }
            break;
        // Add cases for other services in DR congo as needed
          }
          break;
     }
        case 6:
		       {
    system("cls||clear");

    int cameroonOption;
    printf("\nSend Money to cameroon Sub-Menu:\n");
    printf("1. Mpesa\n");
    // Add more options for other services in cameroon as needed

    printf("Enter your choice: ");
    scanf("%d", &cameroonOption);

    // Implement logic based on the selected option for cameroon
    switch (cameroonOption) {
        case 1:
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

                  system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "237", 3) == 0 && strlen(recipientNumber) == 12) {
                    // Valid recipient number
                  system("cls||clear");

                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                 system("cls||clear");

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in XAF
                    double receiveAmount = amount*0.47;
                  system("cls||clear");

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf XAF\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                       system("cls||clear");

                        //entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                      system("cls||clear");
                      printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
             }
            break;
        // Add cases for other services in cameroon as needed
          }
          break;
     }    
        case 7:
        		 {
           system("cls||clear");

    int cotedivorieOption;
    printf("\nSend Money to coted'ivorie' Sub-Menu:\n");
    printf("1. MTN\n");
    // Add more options for other services in cote d'ivorie as needed

    printf("Enter your choice: ");
    scanf("%d", &cotedivorieOption);

    // Implement logic based on the selected option for c
    switch (cotedivorieOption) {
        case 1:
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

              system("cls||clear");

                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "225", 3) == 0 && strlen(recipientNumber) == 12) {
                    // Valid recipient number
                     system("cls||clear"); 

                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                  system("cls||clear");

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in XOF
                    double receiveAmount = amount*0.47;
                   system("cls||clear");

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf XOF\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                     system("cls||clear");

                        //entering the pin 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                        printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
		                printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
             }
            break;
        // Add cases for other services in coted'ivorie as needed
          }
          break;
     }
        case 8:
        		 {
       system("cls||clear");

    int gambiaOption;
    printf("\nSend Money to gambia Sub-Menu:\n");
    printf("1. africell\n");
    // Add more options for other services in uganda as needed

    printf("Enter your choice: ");
    scanf("%d", &gambiaOption);

    // Implement logic based on the selected option for uganda
    switch (gambiaOption) {
        case 1:
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "256", 3) == 0 && strlen(recipientNumber) == 12) {
                    // Valid recipient number
                 system("cls||clear");

                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in GMD
                    double receiveAmount = amount*0.053;
                   system("cls||clear");

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf UGX\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                       system("cls||clear");

                        //entering the pin 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                      printf("Transaction successful\n");
                       } else {
                       system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
             }
            break;
        // Add cases for other services in gambia as needed
          }
          break;
     }
        case 9:
      	{
     system("cls||clear");
    int ghanaOption;
    printf("\nSend Money to ghana Sub-Menu:\n");
    printf("1. Airtel tigo\n");
    printf("2.Vodacome\n");
    // Add more options for other services in ghana as needed

    printf("Enter your choice: ");
    scanf("%d", &ghanaOption);

    // Implement logic based on the selected option for ghana
    switch (ghanaOption) {
        case 1://airtel tigo
        case 2://vodacome
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

                  system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "233", 3) == 0 && strlen(recipientNumber) == 12) {
                    // Valid recipient number
                    system("cls||clear");

                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                  system("cls||clear");

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in GHS
                    double receiveAmount = amount*0.0095;
                    system("cls||clear");
                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf GHS\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");

                        //entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
             }
            break;
        // Add cases for other services in ghana as needed
          }
          break;
     }
        case 10:
		 {
          system("cls||clear");
    int guineabOption;
    printf("\nSend Money to guineab Sub-Menu:\n");
    printf("1. MTN\n");
    // Add more options for other services in guinea bissau as needed

    printf("Enter your choice: ");
    scanf("%d", &guineabOption);

    // Implement logic based on the selected option for guinea bissau
    switch (guineabOption) {
        case 1:
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "245", 3) == 0 && strlen(recipientNumber) == 12) {
                    // Valid recipient number
                    system("cls||clear");

                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    // Calculate receive amount in GNF
                    double receiveAmount = amount*6.191;
                  system("cls||clear");

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf UGX\n", receiveAmount);

                    // Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");

                        //entering the pin 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                     printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
                break;
             }
       }
   }
	 
    case 11:
	    {
          system("cls||clear");
    int guineacOption;
    printf("\nSend Money to guineab Sub-Menu:\n");
    printf("1. MTN\n");
    // Add more options for other services in guinea bissau as needed

    printf("Enter your choice: ");
    scanf("%d", &guineacOption);

    // Implement logic based on the selected option for guinea bissau
    switch (guineacOption) {
        case 1:
            {
                char recipientNumber[15]; // Assuming a maximum length of 14 digits for the mobile number with country code

                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                // Check if the entered number is valid
                if (strncmp(recipientNumber, "224", 3) == 0 && strlen(recipientNumber) == 12) {
                    // Valid recipient number
                    system("cls||clear");

                    // Prompt the user to enter the amount in RWF
                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    double receiveAmount = amount*6.80;
                  system("cls||clear");

                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf GNF\n", receiveAmount);

                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");

                        //entering the pin 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                     printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
                break;
             }
         }
     }
             case 12:
             	 {
          system("cls||clear");
    int moroccoOption;
    printf("\nSend Money to guineab Sub-Menu:\n");
    printf("1.Inwi\n");
    

    printf("Enter your choice: ");
    scanf("%d", &moroccoOption);

    
    switch (moroccoOption) {
        case 1:
            {
                char recipientNumber[15]; 

                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                if (strncmp(recipientNumber, "212", 3) == 0 && strlen(recipientNumber) == 12) {
                    
                    system("cls||clear");

                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");

                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    
                    double receiveAmount = amount*0.0075;
                  system("cls||clear");

                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf MAD\n", receiveAmount);

                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");
 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                     printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
                break;
             }
         }
	}
             case 13:
			  {
          system("cls||clear");
    int mozambiqueOption;
    printf("\nSend Money to  Sub-Menu:\n");
    printf("1.vodacom\n");
    

    printf("Enter your choice: ");
    scanf("%d", &mozambiqueOption);

    
    switch (mozambiqueOption) {
        case 1:
            {
                char recipientNumber[15]; 

                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                if (strncmp(recipientNumber, "258", 3) == 0 && strlen(recipientNumber) == 12) {
                    
                    system("cls||clear");

                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");

                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    
                    double receiveAmount = amount*0.05;
                  system("cls||clear");

                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf MZN\n", receiveAmount);

                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");
 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                     printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
                break;
             }	
         }
     }
			 case 14:
			  {
          system("cls||clear");
    int nigerOption;
    printf("\nSend Money to niger Sub-Menu:\n");
    printf("1.Inwi\n");
    

    printf("Enter your choice: ");
    scanf("%d", &nigerOption);

    
    switch (nigerOption) {
        case 1:
            {
                char recipientNumber[15]; 

                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                if (strncmp(recipientNumber, "227", 3) == 0 && strlen(recipientNumber) == 12) {
                    
                    system("cls||clear");

                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");

                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    
                    double receiveAmount = amount*0.73;
                  system("cls||clear");

                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf NGN\n", receiveAmount);

                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");
 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                     printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
                break;
             }
         }
    }
             case 15:
              {
          system("cls||clear");
    int senegalOption;
    printf("\nSend Money to guineab Sub-Menu:\n");
     printf("1.orange\n");
    

    printf("Enter your choice: ");
    scanf("%d", &senegalOption);

    
    switch (senegalOption) {
        case 1:
            {
                char recipientNumber[15]; 

                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                if (strncmp(recipientNumber, "221", 3) == 0 && strlen(recipientNumber) == 12) {
                    
                    system("cls||clear");

                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");

                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    
                    double receiveAmount = amount*0.4742;
                  system("cls||clear");

                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf XOF\n", receiveAmount);

                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");
 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                     printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
                break;
             }
         }
     }
             case 16:
              {
          system("cls||clear");
    int sierraOption;
    printf("\nSend Money to guineab Sub-Menu:\n");
     printf("1.africell\n");
     printf("2.orange\n");
    

    printf("Enter your choice: ");
    scanf("%d", &sierraOption);

    
    switch (sierraOption) {
        case 1:
        case 2:
            {
                char recipientNumber[15]; 

                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                if (strncmp(recipientNumber, "232", 3) == 0 && strlen(recipientNumber) == 12) {
                    
                    system("cls||clear");

                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");

                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    
                    double receiveAmount = amount*15;
                  system("cls||clear");

                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf SLL\n", receiveAmount);

                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");
 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                     printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
                break;
             }
         }
     }
             case 17:
              {
          system("cls||clear");
    int nigeriaOption;
    printf("\nSend Money to guineab Sub-Menu:\n");
    printf("1.MTN\n");
    

    printf("Enter your choice: ");
    scanf("%d", &nigeriaOption);

    
    switch (nigeriaOption) {
        case 1:
            {
                char recipientNumber[15]; 

                system("cls||clear");
                printf("Enter the recipient mobile number including the country code:\n ");
                scanf("%s", recipientNumber);

                if (strncmp(recipientNumber, "234", 3) == 0 && strlen(recipientNumber) == 12) {
                    
                    system("cls||clear");

                    double amount;
                    printf("Enter amount to be sent in RWF: ");
                    scanf("%lf", &amount);
                   system("cls||clear");

                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }

                    
                    double receiveAmount = amount*0.73;
                  system("cls||clear");

                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("Receive amount: %.2lf NGN\n", receiveAmount);

                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                        system("cls||clear");
 
                        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                       system("cls||clear");
                     printf("Transaction successful\n");
                       } else {
                      system("cls||clear");
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 
                   break;
				}
                    printf("Invalid(empty)responce)\n");
                }
                break;
             }
             break;
               }
			 }
		}
	}
	break;
        case 4:
           	{
			
            // Handle Cancel Voucher
            int token;
            int pin;
           system("cls||clear");

            printf("Enter token (which you want to cancel) ");
            scanf("%d",&token);
            system("cls||clear");

            printf("you entered token %d", token);
            printf(" Enter pin");
            scanf("%d", pin);
            printf("You selected Cancel Voucher\n");
            break;
        }
        case 5:
            
            // Handle Display Voucher
            printf("You selected Display Voucher\n");
                system("cls||clear");
              int token;
              int pin;
            printf("Enter token (which you want to display) ");
            scanf("%d",&token);
            system("cls||clear");

            printf("you entered token %d", token);
            printf(" Enter pin");
            scanf("%d", pin);
            token=1234;
            if (token==token)
        {
        	printf("display all information about the voucher\n");
		}
		else{
			printf("voucher with given identity ccould not be found in the systerm");
		}
                     break;
        case 6:
            // Handle List Active Voucher
            printf("You selected List Active Voucher\n");
            system("cls||clear");
            printf("Enter pin");
            scanf("%d\n", &pin);
            break;
        case 7:
            // Handle International Transfer
            printf("You selected International Transfer\n");
            #ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
int region;
back:
printf("1) EastAfrica\n");
printf("2) SouthernAfrica\n");
printf("3) CentralAfrica\n");
printf("0)Back\n");
printf("Reply");
scanf("%d", &region); 
eastafrica:
switch(region){
case 1:
	
	
	    //select count in eastafrica	
					     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif

	printf(" EastAfrica\n");
	printf("1) Kenya\n");
	printf("2) Tanzania\n");
	printf("3) Burundi\n");
	printf("4) Ethiopia\n");
	printf("0) back\n");
int choose;
printf("Reply")	;
scanf("%d",  &choose);
switch(choose){
	case 1:
		{
								     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
printf("  Kenya\n");
printf("1) Airtel Kenya\n");
printf("0) back\n");
printf("reply");
int reply;
scanf("%d/t", &reply);
switch(reply){case 1:
									     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '254')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "254", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 40.0;
                    } else if (amount <= 10000) {
                        fee = 238.0;
                    } else if (amount <= 100000) {
                        fee = 2771.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*0.12;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("The exchange rate is 1RWF = 0.12KSH\n ");
                    printf("Receive amount: %.2lf KSH\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

	break;
	case 0:
										     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
			printf(" EastAfrica\n");
	printf("1) Kenya\n");
	printf("2) Tanzania\n");
	printf("3) Burundi\n");
	printf("4) Ethiopia\n");
	printf("0) back\n");
	
	goto eastafrica;
	break;
}

		}
		break;
		case 2:{
										     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
printf("  Tanzania\n");
printf("1) Vodacom Tanzania\n");
printf("0) back\n");
printf("reply");
int reply;
scanf("%d/t", &reply);
switch(reply){case 1:
									     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '255')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "255", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 15.0;
                    if (amount <= 1000) {
                        fee = 40.0;
                    } else if (amount <= 10000) {
                        fee = 238.0;
                    } else if (amount <= 100000) {
                        fee = 1052.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*1.99;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                     printf("The exchange rate is 1RWF = 1.99TZS\n ");
                    printf("Receive amount: %.2lf TZS\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

	break;
	case 0:
										     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
			printf(" EastAfrica\n");
	printf("1) Kenya\n");
	printf("2) Tanzania\n");
	printf("3) Burundi\n");
	printf("4) Ethiopia\n");
	printf("0) back\n");
	goto eastafrica;
	break;
}

		}
			break;
			case 3:{
												     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
			printf(" Burundi\n");
			printf("1) Eco Burundi\n");
printf("0) back\n");
printf("reply");
int reply;
scanf("%d/t", &reply);
switch(reply){case 1:
									     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '257')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "257", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*2.26;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                     printf("The exchange rate is 1RWF = 2.26BUF\n ");
                    printf("Receive amount: %.2lf BUF\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

	break;
	case 0:
										     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
			printf(" EastAfrica\n");
	printf("1) Kenya\n");
	printf("2) Tanzania\n");
	printf("3) Burundi\n");
	printf("4) Ethiopia\n");
	printf("0) back\n");
	goto eastafrica;
	break;
}

		}
			
				break;
				case 4:{
													     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
					printf(" Ethiopia\n");
				printf("1) TelebirrEthiopia\n");
printf("0) back\n");
printf("reply");
int reply;
scanf("%d/t", &reply);
switch(reply){case 1:
									     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '251')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "251", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 1000) {
                        fee = 120.0;
                    } else if (amount <= 10000) {
                        fee = 450.0;
                    } else if (amount <= 100000) {
                        fee = 700.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*0.044;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                     printf("The exchange rate is 1RWF = 0.044ETB\n ");
                    printf("Receive amount: %.2lf ETB\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

	
	
				
				break;
		case 0://back tp eyhiopian menu 
			
										     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif

	printf(" EastAfrica\n");
	printf("1) Kenya\n");
	printf("2) Tanzania\n");
	printf("3) Burundi\n");
	printf("4) Ethiopia\n");
	printf("0) back\n");
	goto eastafrica;
}
	

}
case 0:
		
						                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

goto back;
	break;
								default:
															                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

									printf("your choice was incorrect");
}
break;
case 2:
                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
southernafrica:	
printf("  SouthernAfrica\n");
printf("1) Malawi\n");
printf("2) Zambia\n");	
printf("3) MBotswan\n");	
printf("4) Zimbabwe\n");	
printf("5) Madagascar\n");	
printf("0) Back\n");
int southern;
printf("Reply\t");
scanf("%d",&southern);
switch(southern){
	case 1:
		 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

		printf("Malawi\n");
		printf("1) Airtel Malawi\n");
		printf("0) back\n");
		int choose;
		printf("Reply\t");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '265')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "265", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 15.0;
                    if (amount <= 1000) {
                        fee = 40.0;
                    } else if (amount <= 10000) {
                        fee = 238.0;
                    } else if (amount <= 100000) {
                        fee = 1052.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*1.33;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                     printf("The exchange rate is 1RWF = 1.33MAK\n ");
                    printf("Receive amount: %.2lf MAK\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

				
				break;
				case 0:
					 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
					goto southernafrica;
					break;
					break;
					default:
						printf("your choise was incorrect");
		}
	break;
	case 2:
							 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
		printf("Zambia\n");
		printf("1) Airtel Zambai\n");
		printf("0) Back\n");
		int zambia;
		printf("Reply\t");
		scanf("%d",&zambia);
				switch(zambia){
			case 1:
				 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '260')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "260", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 5000) {
                        fee = 40.0;
                    } else if (amount <= 10000) {
                        fee = 240.0;
                    } else if (amount <= 40000) {
                        fee = 525.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*0.021;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                     printf("The exchange rate is 1RWF = 0.021ZWW\n ");
                    printf("Receive amount: %.2lf zmw\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

				
				break;
				case 0:
					 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
printf("  SouthernAfrica\n");
					goto southernafrica;
					break;
					default:
						printf("your choice is incorrect");}
		break;
		case 3:
			#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
			printf("botswan\n");
			printf("1) Orange Botswana\n");
			printf("0) Back\n");
			int mbotswan;
			printf("Reply\t");
			scanf("%d",&mbotswan);
			switch(mbotswan){
							case 1:
				 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '267')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "267", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 5000) {
                        fee = 40.0;
                    } else if (amount <= 10000) {
                        fee = 240.0;
                    } else if (amount <= 40000) {
                        fee = 525.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*0.05057;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                     printf("The exchange rate is 1RWF = 0.05057MZN\n ");
                    printf("Receive amount: %.2lf MZN\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

				
				break;
				case 0:
					 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
					goto southernafrica;
					break;
					default:
						printf("your choice is incorrect");
				
			}
			break;
			case 4:
										                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

				printf("Zimbabwe\n");
				printf("1) Eco Cash Zimbabwe\n");
				printf("0) Back\n");
				int zimbabwe;
				printf("Reply\t");
				scanf("%d",&zimbabwe);
				switch(zimbabwe){
												case 1:
				 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '263')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "263", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 5000) {
                        fee = 83.63;
                    } else if (amount <= 10000) {
                        fee = 240.0;
                    } else if (amount <= 500000) {
                        fee = 14835.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*0.00079;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                     printf("The exchange rate is 1RWF = 0.00079USD\n ");
                    printf("Receive amount: %.2lf USD\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

				
				break;
				case 0:
					 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
					goto southernafrica;
					break;
					default:
						printf("your choice is incorrect");
				}
				break;
				case 5:
										                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
					printf("Madagascar\n");
					printf("1) AirtelMadagascar\n");
					printf("0) Back\n");
					int madagascar;
					printf("Reply\t");
					scanf("%d",&madagascar);
					switch(madagascar){
																		case 1:
				 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code 261)\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "261", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 5000) {
                        fee = 83.63;
                    } else if (amount <= 10000) {
                        fee = 240.0;
                    } else if (amount <= 500000) {
                        fee = 14835.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*3.64;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("exchange 1RWF = 3.64MGA\n");
                    printf("Receive amount: %.2lf MGA\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

				
				break;
				case 0:
					 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
					goto southernafrica;
					break;
					default:
						printf("your choice is incorrect");
					}
					break;
				case 0:
						                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

goto back;
break;
default:
	printf("your choice was incorrect");
}	
break;
case 3:// handel CntralAfrica
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
centralafrica:
printf("CentralAfrica\n");
printf("1) CongoB\n");
printf("2) Congo DRC\n");
printf("3) Chad\n");
printf("0) Back\n");
int central;
printf("Reply\t");
scanf("%d",&central);
switch(central){
	case 1:
			                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
printf("CongoB\n");
printf("1) MTNCongoB\n");
printf("0) back\n");
int congob;
printf("Reply\t");
scanf("%d",congob);
switch(congob){
																						case 1:
				 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '243')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "243", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 5000) {
                        fee = 215;
                    } else if (amount <= 750000) {
                        fee = 950.0;
                    } else if (amount <= 2000000) {
                        fee = 12000.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*0.47;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("exchange 1RWF = 0.47CDF\n");
                    printf("Receive amount: %.2lf CDF\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}		
				break;
				case 0:
							 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
					goto centralafrica;
					break;
					default:
						printf("your choice is incorrect");
		
}
		break;
		case 2:
						                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
printf("Congo DRC\n");
printf("1) lllicocash DRC\n");
printf("0) Back\n");
int congodrc;
printf("Reply\t");
scanf("%d",&congodrc);
switch(congodrc){
																					case 1:
				 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code '243')\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "243", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 5000) {
                        fee = 215;
                    } else if (amount <= 750000) {
                        fee = 950.0;
                    } else if (amount <= 2000000) {
                        fee = 12000.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*0.47;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("exchange 1RWF = 2.12CDF\n");
                    printf("Receive amount: %.2lf CDF\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

				
				break;
				case 0:
					 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
					goto centralafrica;
					break;
					default:
						printf("your choice is incorrect");
	
}
			break;
			case 3:
					                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
	printf("  Chad\n");
	printf("1) AirtelChad\n");
	printf("0) Back\n");
	int chad;
	printf("Reply\t");
	scanf("%d",&chad);
	switch(chad){
																				case 1:
				 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
char recipientNumber[12];
	printf("Enter receiver number(Starting with country Code 235)\n");
	scanf("%s", &recipientNumber);
                if (strncmp(recipientNumber, "235", 3) == 0 && strlen(recipientNumber) == 12) {
                							     // Clear the console screen before displaying transaction is confirmed
#ifdef _WIN32
                    system("cls");
#else
                    system("clear");
#endif
	float amount;
	printf("Enter amount to sent\n");
	scanf("%f",&amount);
	                                      // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Calculate fees based on the specified conditions
                    double fee = 0.0;
                    if (amount <= 5000) {
                        fee = 215;
                    } else if (amount <= 750000) {
                        fee = 950.0;
                    } else if (amount <= 2000000) {
                        fee = 12000.0;
                    }
// Calculate receive amount in KSH
                    double receiveAmount = amount*0.47;
                                    // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif

                    // Display transfer preview
                    printf("Transfer Preview:\n");
                    printf("Recipient: %s\n", recipientNumber);
                    printf("Send amount: %.2lf RWF\n", amount);
                    printf("Fees: %.2lf RWF\n", fee);
                    printf("exchange 1RWF = 0.47 CFA\n");
                    printf("Receive amount: %.2lf MGA\n", receiveAmount);
// Ask for confirmation
                    int confirmation;
                    printf("Confirm the transaction:\n");
                    printf("1. Yes\n");
                    printf("2. No\n");
                    scanf("%d", &confirmation);

                    if (confirmation == 1) {
                    	                // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
//entering the pin 
                        const char fixedPin[6]="13579";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                                                            // Clear the console screen before displaying the prompt
#ifdef _WIN32
                system("cls");
#else
                system("clear");
#endif
                        printf("Transaction successful\n");
                       } else {
                        printf("Wrong PIN\n");
                        printf("Transaction failed\n");
                   } 

}


}
else{
	printf("incorrect details provide");
}

				
				break;
				case 0:
					 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
					goto centralafrica;
					break;
					default:
						printf("your choice is incorrect");
	}
				break;
				case 0:
						                   	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
goto back;
					break;
					default:
						printf("your choice is incorrect");
}

break;
case 0://back to sendmenu
	sendMoney();
	break;
	default:
		printf("incorrect choices");
}
    break;    
        case 8:
            // Handle Exchange Rate
            printf("You selected Exchange Rate\n");
                    	 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
printf("1) Kenya\n");
printf("2) Uganda\n");
printf("3) Tanzania\n");
printf("4) Burundi\n");
printf("5) Ethiopia\n");printf("6) Somalia\n");printf("7) Malawi\n");printf("8) Zambia\n");printf("9) Botswana\n");printf("10) Ghana\n");printf("11) Nigeria\n");printf("0) back\n");
           int choose;
		   printf("Reply\t"); 
		   scanf("%d",&choose);
		   switch(choose){
		   	case 1:
		   				 // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
		   		printf("Unfortunately,this transaction could not be completed.call 100 for assistance");
		   		break;
		   case 0:
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
sendMoney();
break;
default:
		   	printf("Unfortunately,this transaction could not be completed.call 100 for assistance");
}
break;
			break;
        case 9:
        	    // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

            printf("Thank you for using Mobile Money\n");
            break;
        case 0:
                system("cls||clear");
                printf("Going back to the main menu.\n");
                goBackToMenu(displayMenu);
            break;        
       }
   }
    
void buy() {
	   system("cls||clear");
	        printf("1) Buy Airtime, Voice Pack and Data Bundle\n");
	        printf("2) Electricity\n");
	        printf("3) Pay Services\n");
	        printf("4) Solar\n");
	        printf("5) Pay Transport Fare\n");
	        printf("6) Online Shopping Card\n");
	        printf("0) Back\n");
    
        int choice2;
            scanf("%d",&choice2);
                
        switch(choice2) {
            case 1:
            	//########Buy Airtime, Voice Pack and Data Bundle###############
                system("cls||clear");
                printf("1) MTN Airtime(Bonus 20%)\n");
                printf("2) Tubitayeho\n");
                printf("3) Internet Bundles\n");
                printf("4) Voice Packs\n");
                printf("5) Yolo\n");
                printf("6) Prestige\n");
                printf("0) Back\n");
                int subChoice2E1;
                scanf("%d",&subChoice2E1);
                switch(subChoice2E1) {
                	case 1: 
                	        //#########MTN Airtime(Bonus 20%)#######
                	        system("cls||clear");
                	        printf("Normal Airtime\n");
                	        printf("1) Buy for self\n");
                	        printf("2) Buy for others\n");
                	        printf("0) Back\n");
                	        int subChoice2E1P1;
                	        scanf("%d",&subChoice2E1P1);
                	        switch(subChoice2E1P1) {
                	        	case 1:
                	        		    system("cls||clear");
                	        		    printf("Enter Airtime Amount\n");
                	        		    int airtime1;
                	        		    scanf("%d",&airtime1);
                	        		    system("cls||clear");
                	        		    printf("You entered: %dRWF. A Fee of RWF\n", airtime1);
                	        		    printf("0 will be applicable. To confirm to\n");
                	        		    printf("buy MTN Airtime, enter MM PIN.\n");
                	        		    char password1[5];
                	        		    scanf("%s",&password1);
                                        system("cls||clear");
                	        		    printf("the airtime of : %d was sent to you successively Thank you for using Mobile money\n", airtime1);
                	        	break;
								case 2:
								        system("cls||clear");
										printf("Enter Airtime Amount\n");
                	        		    int airtime2;
                	        		    scanf("%d",&airtime2);
                	        		    system("cls||clear");
										printf("Enter Mobile Number\n");
										char mobileNum1[12];
										scanf("%s",&mobileNum1);
                                        if ((strncmp(mobileNum1, "078", 3) == 0 || strncmp(mobileNum1, "079", 3) == 0) && strlen(mobileNum1) == 10) {
                                        system("cls||clear");
										printf("You entered: %dRWF\n", airtime2);
										printf("%s, receiver\n",mobileNum1);
                                        printf("A Fee of 0 will be\napplicable. To confirm to buy MTN\n");
										printf("Airtime, enter MM PIN.\n");
										char password2[5];
										scanf("%s",password2);
                                        //system("cls||clear");
										printf("the airtime of : %d was sent to :%s successively Thank you for using Mobile money\n",airtime2,mobileNum1);
                                        }
                                        else {
                                            // Invalid recipient number
                                        system("cls||clear");
                                        printf("Invalid Mobile number\n");
                                        }		
								break;
								case 0:         
                	            system("cls||clear");
                                printf("Going back to the main menu.\n");
                                goBackToMenu(displayMenu);
                                break;
                                default:
                                system("cls||clear");
                                printf("Your choice was incorrect. Please try again.\n");
                                break;
							}
                	break;
                	case 2: 
                	        //######Tubitayeho#############
                	        system("cls||clear");
                	        printf("1) Buy for self\n");
                	        printf("2) Buy for others\n");
                	        int subChoice2E1P2;
                	        scanf("%d",&subChoice2E1P2);
                	        switch(subChoice2E1P2){
                	        	case 1:
                                        //Buy for self
                	        		    system("cls||clear");
                	        		    printf("1) Voice\n");
                	        		    printf("2) Data\n");
                	        		    printf("0) Back\n");
                	        		    int tubita1;
                	        		    scanf("%d",&tubita1);
                	        		    switch(tubita1){
                	        		    	case 1:{
												
                	        		    		    system("cls||clear");
                	        		    		    printf("1) 5000Frw=Unlimited+200SMS(Ukwezi)\n");
                	        		    		    printf("2) 3000Frw=3500Mins+200SMS(Ukwezi)\n");
                	        		    		    printf("3) 2000Frw=1500Mins+200SMS(Ukwezi)\n");
                                                    int tubita11;
                                                    scanf("%d",&tubita11);
                                                    switch(tubita11){
                                                        case 1:
                                                                system("cls||clear");
                	        		    		                printf("Enter PIN.\n");
										                        char pin11[5];
										                        scanf("%s",&pin11);
                                                                printf("Voice pack of 5000Frw=Unlimited+200SMS(Ukwezi) was bought successively\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                	        		    		                printf("Enter PIN.\n");
										                        char pin12[5];
										                        scanf("%s",&pin12);
                                                                printf("Voice pack of 3000Frw=3500Mins+200SMS(Ukwezi) was bought successively.\n");
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                	        		    		                printf("Enter PIN.\n");
										                        char pin13[5];
										                        scanf("%s",&pin13);
                                                                printf("Voice pack of 2000Frw=1500Mins+200SMS(Ukwezi) was bought successively.\n");
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n"); 
                                                    }
                                                }
                	        		    	break;
                	        		    	case 2:
                	        		    		    system("cls||clear");
                	        		    		    printf("1) 5000Frw=2GB/DAY+200SMS/Ukwezi\n");
                	        		    		    printf("2) 3000Frw=1GB/DAY+200SMS/Ukwezi\n");
                	        		    		    printf("3) 2000Frw=500MB/DAY+200SMS/Ukwezi\n");
                	        		    		    int tubita12;
                                                    scanf("%d",&tubita12);
                                                    switch(tubita12){
                                                        case 1:
                                                                system("cls||clear");
                	        		    		                printf("Enter PIN.\n");
										                        char pin21[5];
										                        scanf("%s",&pin21);
										                        system("cls||clear");
                                                                printf("Data pack of 5000Frw=2GB/DAY+200SMS/Ukwezi was bought successively\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                	        		    		                printf("Enter PIN.\n");
										                        char pin22[5];
										                        scanf("%s",&pin22);
                                                                printf("Data pack of 3000Frw=1GB/DAY+200SMS/Ukwezi was bought successively.\n");
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                	        		    		                printf("Enter PIN.\n");
										                        char pin23[5];
										                        scanf("%s",&pin23);
                                                                printf("Data pack of 2000Frw=500MB/DAY+200SMS/Ukwezi was bought successively.\n");
                                                        break;
                                                        default:
                                                               system("cls||clear");
                                                               printf("Your choice was incorrect. Please try again.\n");
															
                                                    }
                	        		    	break;
                	        		    	case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            break;
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
                                                    
										}
								break;
								case 2:
                                       //buy for others 
									    system("cls||clear");
									    printf("Insert the receiver's number\n");
									    char numb2[12];
									    scanf("%s",&numb2);
                                        if ((strncmp(numb2, "078", 3) == 0 || strncmp(numb2, "079", 3) == 0) && strlen(numb2) == 10){
									    system("cls||clear");
                	        		    printf("1) Voice\n");
                	        		    printf("2) Data\n");
                	        		    printf("0) Back\n");
                	        		    int tubita2;
                	        		    scanf("%d",&tubita2);
                	        		    switch(tubita2){
                	        		    	case 1:
                	        		    		    system("cls||clear");
                	        		    		    printf("1) 5000Frw=Unlimited+200SMS(Ukwezi)\n");
                	        		    		    printf("2) 3000Frw=3500Mins+200SMS(Ukwezi)\n");
                	        		    		    printf("3) 2000Frw=1500Mins+200SMS(Ukwezi)\n");
                	        		    		    int unlimited1;
                	        		    		    scanf("%d",&unlimited1);
                	        		    		    switch(unlimited1){
                	        		    		    	case 1: 
                	        		    		    	        system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin1e2[5];
										                        scanf("%s",&pin1e2);
										                        printf("airtime of 5000Frw=Unlimited+200SMS(Ukwezi) sent to %s\n",numb2);
														break;
                	        		    		    	case 2:
                	        		    		    		    system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin1e3[5];
										                        scanf("%s",&pin1e3);
										                        printf("airtime of 3000Frw=3500Mins+200SMS(Ukwezi) sent to %s\n",numb2);
														break;
                	        		    		    	case 3:
                	        		    		    		    system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin1e4[5];
										                        scanf("%s",&pin1e4);
										                        printf("airtime of 2000Frw=1500Mins+200SMS(Ukwezi) sent to %s\n",numb2);
														break;
														default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
													}
                	        		    		   
                	        		    	break;
                	        		    	case 2:
                	        		    		    system("cls||clear");
                	        		    		    printf("1) 5000Frw=2GB/DAY+200SMS/Ukwezi\n");
                	        		    		    printf("2) 3000Frw=1GB/DAY+200SMS/Ukwezi\n");
                	        		    		    printf("3) 2000Frw=500MB/DAY+200SMS/Ukwezi\n");
                	        		    		    int unlimited2;
                	        		    		    scanf("%d",&unlimited2);
                	        		    		    switch(unlimited2){
                	        		    		    	case 1: 
                	        		    		    	        system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin2e2[5];
										                        scanf("%s",&pin2e2);
										                        printf("Data of 5000Frw=2GB/DAY+200SMS/Ukwezi sent to %s\n",numb2);
														break;
                	        		    		    	case 2:
                	        		    		    		    system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin2e3[5];
										                        scanf("%s",&pin2e3);
										                        printf("Data of 3000Frw=1GB/DAY+200SMS/Ukwezi sent to %s\n",numb2);
														break;
                	        		    		    	case 3:
                	        		    		    		    system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin2e4[5];
										                        scanf("%s",&pin2e4);
										                        printf("Data of 2000Frw=500MB/DAY+200SMS/Ukwezi sent to %s\n",numb2);
														break;
														default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                        
													}
                	        		    	break;
                	        		    	case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            break;
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
										}
                                        }
                                         else {
                                            // Invalid recipient number
                                        system("cls||clear");
                                        printf("Invalid Mobile number\n");
                                        }		
								break;
								default:
                                        system("cls||clear");
                                        printf("Your choice was incorrect. Please try again.\n");
							}
                	break;
					case 3: 
					        //######Internet Bundles#########
                	        system("cls||clear");
                	        printf("1) Buy for self\n");
                	        printf("2) Buy for others\n");
                	        int subChoice2E1P3;
                	        scanf("%d",&subChoice2E1P3);
                	        switch(subChoice2E1P3) {
                	        	case 1:
                	        		    system("cls||clear");
                	        		    printf("1) Tubitayeho\n");
                	        		    printf("2) Internet Irekure(3G&4G)\n");
                	        		    printf("3) Tuuuza Bundles(No Expiry)\n");
                	        		    printf("4) (4G&3G) Bundles\n");
                	        		    printf("5) Other (4G&3G) Bundles\n");
										printf("0) Back\n");
										int intern1;
										scanf("%d",&intern1);
										switch(intern1) {
											case 1:
												    //######Tubitayeho##############################
												    system("cls||clear");
												    printf("1) 5000Frw=60GB/30Days(2GB Daily)\n");
												    printf("2) 3000Frw=30GB/30Days(1GB Daily)\n");
												    printf("3) 2000Frw=15GB/30Days(500MB Daily)\n");
												    int intern1E1;
                	        		    		    scanf("%d",&intern1E1);
                	        		    		    switch(intern1E1){
                	        		    		    	case 1: 
                	        		    		    	        system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin3e2[5];
										                        scanf("%s",&pin3e2);
										                        system("cls||clear");
										                        printf("You Bought Data of 5000Frw=60GB/30Days(2GB Daily)\n");
														break;
                	        		    		    	case 2:
                	        		    		    		    system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin3e3[5];
										                        scanf("%s",&pin3e3);
										                        system("cls||clear");
										                        printf("You Bought Data of 3000Frw=30GB/30Days(1GB Daily)\n");
														break;
                	        		    		    	case 3:
                	        		    		    		    system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin3e4[5];
										                        scanf("%s",&pin3e4);
										                        system("cls||clear");
										                        printf("You Bought Data of 2000Frw=15GB/30Days(500MB Daily)\n");
														break;
														default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
													}
											break;
											case 2: 
											        //#####internet Irekure####################################################
												    system("cls||clear");
												    printf("1) Irekure Daily\n");
												    printf("2) Irekure Weekly\n");
												    printf("3) Irekure Monthly\n");
												    int intern1E2;
                	        		    		    scanf("%d",&intern1E2);
                	        		    		    switch(intern1E2){
                	        		    		    	case 1: 
                	        		    		    	        system("cls||clear");
																printf("1) 110FRW(60MB)-PROMO\n");
																printf("2) 300FRW(280MB)-PROMO\n");
																printf("3) 100FRW(50MB)\n");
																printf("4) 200FRW(150MB)\n");
																printf("5) 500FRW(800MB)\n");
										                        int irekure1;
										                        scanf("%d",&irekure1);
										                        switch(irekure1){
										                        	case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e1[5];
										                                    scanf("%s",&pin4e1);
										                        		    system("cls||clear");
										                                    printf("You Bought Data of 110FRW(60MB)-PROMO\n");
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e2[5];
										                                    scanf("%s",&pin4e2);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 300FRW(280MB)-PROMO\n");
										                            break;
										                            case 3:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e3[5];
										                                    scanf("%s",&pin4e3);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 100FRW(50MB)\n");
										                            break;
										                            case 4:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e4[5];
										                                    scanf("%s",&pin4e4);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 200FRW(150MB)\n");
										                            break;
										                            case 5:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e5[5];
										                                    scanf("%s",&pin4e5);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 500FRW(800MB)\n");
										                            break;
										                            default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
																}
														break;
                	        		    		    	case 2:
                	        		    		    		    system("cls||clear");
																printf("1) 1,100FRW(1.1GB)-PROMO\n");
																printf("2) 2,200FRW(2.8GB)-PROMO\n");
																printf("3) 1,000FRW(1GB)\n");
																printf("4) 2,000FRW(2.5GB)\n");
																printf("5) 3,000FRW(4.2GB)\n");
																printf("6) 5,000FRW(7GB)\n");
																printf("7) 7,000FRW(10.7GB)\n");
										                        int irekure2;
										                        scanf("%d",&irekure2);
										                        switch(irekure2){
										                        	case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e1[5];
										                                    scanf("%s",&pin5e1);
										                        		    system("cls||clear");
										                                    printf("You Bought Data of 1,100FRW(1.1GB)-PROMO\n");
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e2[5];
										                                    scanf("%s",&pin5e2);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 2,200FRW(2.8GB)-PROMO)\n");
										                            break;
										                            case 3:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e3[5];
										                                    scanf("%s",&pin5e3);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 1,000FRW(1GB)\n");
										                            break;
										                            case 4:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e4[5];
										                                    scanf("%s",&pin5e4);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 2,000FRW(2.5GB)\n");
										                            break;
										                            case 5:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e5[5];
										                                    scanf("%s",&pin5e5);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 3,000FRW(4.2GB)\n");
										                            break;
										                            case 6:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e6[5];
										                                    scanf("%s",&pin5e6);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 5,000FRW(7GB)\n");
										                            break;
										                            case 7:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e7[5];
										                                    scanf("%s",&pin5e7);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 7,000FRW(10.7GB)\n");
										                            break;
										                            default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
																}
														break;
                	        		    		    	case 3:
                	        		    		    		    system("cls||clear");
																printf("1) 2,300FRW(2.4GB)-PROMO\n");
																printf("2) 5,500FRW(8GB)-PROMO\n");
																printf("3) 2,000FRW(2GB)\n");
																printf("4) 5,000FRW(7GB)\n");
																printf("5) 7,000FRW(13GB)\n");
																printf("6) 10,000FRW(30GB)\n");
										                        int irekure3;
										                        scanf("%d",&irekure3);
										                        switch(irekure3){
										                        	case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e1[5];
										                                    scanf("%s",&pin6e1);
										                        		    system("cls||clear");
										                                    printf("You Bought Data of 2,300FRW(2.4GB)-PROMO\n");
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e2[5];
										                                    scanf("%s",&pin6e2);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 5,500FRW(8GB)-PROMO\n");
										                            break;
										                            case 3:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e3[5];
										                                    scanf("%s",&pin6e3);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 2,000FRW(2GB)\n");
										                            break;
										                            case 4:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e4[5];
										                                    scanf("%s",&pin6e4);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 5,000FRW(7GB)\n");
										                            break;
										                            case 5:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e5[5];
										                                    scanf("%s",&pin6e5);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 7,000FRW(13GB)\n");
										                            break;
										                            case 6:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e6[5];
										                                    scanf("%s",&pin6e6);
										                            	    system("cls||clear");
										                                    printf("You Bought Data of 10,000FRW(30GB)\n");
										                            break;
										                            default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
																}
														break;
														default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
													}
											break;
											case 3:
												    //####Tuuuza Bundles(No Expiry)##################
												    system("cls||clear");
												    printf("1) 200Rwf(130)\n");
												    printf("2) 1000Rwf(800)\n");
                                                    int tuuza;
                                                    scanf("%d\n",tuuza);
                                                    switch(tuuza){
                                                        case 1:
										                        system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin1t[5];
										                        scanf("%s",&pin1t);
										                        system("cls||clear");
										                        printf("You Bought Tuuuza Bundles of 200Rwf(130)\n");
										                break;
										                case 2:
										                        system("cls||clear");
												                printf("Enter PIN.\n");
						                                        char pin2t[5];
						                                        scanf("%s",&pin2t);
										            	        system("cls||clear");
								                                printf("You Bought Tuuuza Bundles of 1000Rwf(800)\n");
								                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
												    
											break;
											case 4:
												    //####(4G&3G) Bundles############################
												    system("cls||clear");
												    printf("1) (4G&3G) Bundle Daily\n");
												    printf("2) (4G&3G) Bundle Weekly\n");
												    printf("3) (4G&3G) Bundle Monthly\n");
                                                    int bundles1;
                                                    scanf("%d\n",bundles1);
                                                    switch(bundles1){
                                                        case 1:
                                                                // (4G&3G) Bundle Daily
                                                                printf("1) 100Rwf(15MB)\n");
                                                                printf("2) 200Rwf(50MB)\n");
                                                                printf("3) 3500Rwf(100MB)\n");
                                                                printf("4) 1000Rwf(1GB)\n");
                                                                int bundles11;
                                                                scanf("%d\n",bundles11);
                                                                switch(bundles11){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1bd[5];
										                                    scanf("%s",&pin1bd);
										                        		    system("cls||clear");
										                                    printf("You Bought Daily Bundles of  100Rwf(15MB)\n");
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2bd[5];
										                                    scanf("%s",&pin2bd);
										                            	    system("cls||clear");
										                                    printf("You Bought Daily Bundles of  200Rwf(50MB)\n");
										                            break;
                                                                    case 3:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin3bd[5];
										                                    scanf("%s",&pin1bd);
										                        		    system("cls||clear");
										                                    printf("You Bought Daily Bundles of  3500Rwf(100MB)\n");
										                            break;
                                                                    case 4:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4bd[5];
										                                    scanf("%s",&pin4bd);
										                        		    system("cls||clear");
										                                    printf("You Bought Daily Bundles of  1000Rwf(1GB)\n");
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");

                                                                    }
 
                                                        break;
                                                        case 2:
                                                               //(4G&3G) Bundle Weekly
                                                               printf("1) 1000Rwf(500MB)\n");
                                                               printf("2) 2000Rwf(1.5GB)\n");
                                                               printf("3) 5000Rwf(1GB/Umunsi)\n");
                                                               int bundles12;
                                                               scanf("%d\n",bundles12);
                                                               switch(bundles12){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1bw[5];
										                                    scanf("%s",&pin1bw);
										                        		    system("cls||clear");
										                                    printf("You Bought Weekly Bundles of 1000Rwf(500MB)\n");
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2bw[5];
										                                    scanf("%s",&pin2bw);
										                            	    system("cls||clear");
										                                    printf("You Bought Weekly Bundles of 2000Rwf(1.5GB)\n");
										                            break;
                                                                    case 3:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin3bw[5];
										                                    scanf("%s",&pin1bw);
										                        		    system("cls||clear");
										                                    printf("You Bought Weekly Bundles of 5000Rwf(1GB/Umunsi)\n");
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");

                                                               }

                                                        break;
                                                        case 3:
                                                               //(4G&3G) Bundle Monthly
                                                               printf("1) 2000Rwf(1GB)/30days\n");
                                                               printf("2) 5000Rwf(3GB)/30days\n");
                                                               printf("3) 21000Rwf(1GB/Day)/30days\n");
                                                               printf("4) 1000Rwf(300MB)\n");
                                                               printf("5) 25000Rwf(30GB)\n");
                                                               printf("6) 10000Rwf(10GB)\n");
                                                               printf("7) 25000Rwf(2GB/Day)(3G Only)\n");
                                                               printf("8) 30000Rwf(3GB/Day)(3G Only)\n");
                                                               printf("9) 40000Rwf(5GB/Daily)(3G Only)\n");
                                                               int bundles13;
                                                               scanf("%d\n",bundles13);
                                                               switch(bundles13){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1bm[5];
										                                    scanf("%s",&pin1bm);
										                        		    system("cls||clear");
										                                    printf("You Bought Monthly Bundles of 2000Rwf(1GB)/30days\n");
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2bm[5];
										                                    scanf("%s",&pin2bm);
										                            	    system("cls||clear");
										                                    printf("You Bought Monthly Bundles of 5000Rwf(3GB)/30days\n");
										                            break;
                                                                    case 3:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin3bm[5];
										                                    scanf("%s",&pin1bm);
										                        		    system("cls||clear");
										                                    printf("You Bought Monthly Bundles of 21000Rwf(1GB/Day)/30days\n");
										                            break;
                                                                    case 4:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4bm[5];
										                                    scanf("%s",&pin4bm);
										                        		    system("cls||clear");
										                                    printf("You Bought Monthly Bundles of 1000Rwf(300MB)\n");
										                            break;
										                            case 5:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5bm[5];
										                                    scanf("%s",&pin5bm);
										                            	    system("cls||clear");
										                                    printf("You Bought Monthly Bundles of 25000Rwf(30GB)\n");
										                            break;
                                                                    case 6:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6bm[5];
										                                    scanf("%s",&pin6bm);
										                        		    system("cls||clear");
										                                    printf("You Bought Monthly Bundles of 10000Rwf(10GB)\n");
										                            break;
                                                                    case 7:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin7bm[5];
										                                    scanf("%s",&pin7bm);
										                        		    system("cls||clear");
										                                    printf("You Bought Monthly Bundles of 25000Rwf(2GB/Day)(3G Only)\n");
										                            break;
										                            case 8:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin8bm[5];
										                                    scanf("%s",&pin8bm);
										                            	    system("cls||clear");
										                                    printf("You Bought Monthly Bundles of 30000Rwf(3GB/Day)(3G Only)\n");
										                            break;
                                                                    case 9:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin9bm[5];
										                                    scanf("%s",&pin9bm);
										                        		    system("cls||clear");
										                                    printf("You Bought Monthly Bundles of 40000Rwf(5GB/Daily)(3G Only)\n");
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                               }


                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
												    
											break;
											case 5:
												  //  ####Other (4G&3G) Bundles######################
												    system("cls||clear");
												    printf("1) Other Daily (4G&3G) Bundle Daily\n");
												    printf("2) Other (4G&3G) Bundle Weekly\n");
												    printf("3) Other (4G&3G) Bundle Monthly\n");
                                                    int other1;
                                                    scanf("%d\n",other1);
                                                    switch(other1){
                                                        case 1:
                        	                        		    system("cls||clear");
                                                                printf("1) 100Rwf(50MB)/24hrs\n");
                                                                printf("2) 200Rwf(150MB)/24hrs\n");
                                                                printf("3) 350Rwf(350MB)/24hrs\n");
                                                                printf("4) 500Rwf(500MB)/24hrs\n");
                                                                int other1d;
                                                                scanf("%d\n",other1d);
                                                                switch(other1d){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1od[5];
										                                    scanf("%s",&pin1od);
										                        		    system("cls||clear");
										                                    printf("You Bought other daily Bundles of 100Rwf(50MB)/24hrs\n");
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2od[5];
										                                    scanf("%s",&pin2od);
										                            	    system("cls||clear");
										                                    printf("You Bought other daily Bundles of 200Rwf(150MB)/24hrs\n");
										                            break;
                                                                    case 3:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin3od[5];
										                                    scanf("%s",&pin1od);
										                        		    system("cls||clear");
										                                    printf("You Bought other daily Bundles of 350Rwf(350MB)/24hrs\n");
										                            break;
                                                                    case 4:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4od[5];
										                                    scanf("%s",&pin4od);
										                        		    system("cls||clear");
										                                    printf("You Bought other daily Bundles of 500Rwf(500MB)/24hrs\n");
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
										                break;
										                case 2:
                			                            	    system("cls||clear");
                                                                printf("1) 1000(1GB)/7days\n");
                                                                printf("2) 3000(4GB)/7Days\n");
                                                                int other1w;
                                                                scanf("%d\n",other1w);
                                                                switch(other1w){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1ow[5];
										                                    scanf("%s",&pin1ow);
										                        		    system("cls||clear");
										                                    printf("You Bought other Weekly Bundles of 1000(1GB)/7days\n");
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2ow[5];
										                                    scanf("%s",&pin2ow);
										                            	    system("cls||clear");
										                                    printf("You Bought other Weekly Bundles of 3000(4GB)/7Days\n");
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
													            
										                break;
                                                        case 3:
							                        		    system("cls||clear");
                                                                printf("1) 5000Rwf(7GB)/30Days\n");
                                                                printf("2) 10000Rwf(16GB)/30Days\n");
                                                                printf("3) 18000Rwf(30GB)/30Days\n");
                                                                int other1m;
                                                                scanf("%d\n",other1m);
                                                                switch(other1m){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1om[5];
										                                    scanf("%s",&pin1om);
										                        		    system("cls||clear");
										                                    printf("You Bought other Monthly Bundles of 5000Rwf(7GB)/30Days\n");
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2om[5];
										                                    scanf("%s",&pin2om);
										                            	    system("cls||clear");
										                                    printf("You Bought other Monthly Bundles of 10000Rwf(16GB)/30Days\n");
										                            break;
                                                                    case 3:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2om22[5];
										                                    scanf("%s",&pin2om22);
										                            	    system("cls||clear");
										                                    printf("You Bought other Monthly Bundles of 18000Rwf(30GB)/30Days\n");
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
													            
										                break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
												    
											break;
											case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            break;
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
                                        
										}
                	        		    
                	        	break;
                	        	case 2: 
                	        	        system("cls||clear");
                	        	        printf("Insert the receiver's number\n");
									    char numb3[12];
									    scanf("%s",&numb3);
                                        if ((strncmp(numb3, "078", 3) == 0 || strncmp(numb3, "079", 3) == 0) && strlen(numb3) == 10){
                                            system("cls||clear");
                	        		        printf("1) Tubitayeho\n");
                	        		        printf("2) Internet Irekure(3G&4G)\n");
                	        		        printf("3) Tuuuza Bundles(No Expiry)\n");
                	        		        printf("4) (4G&3G) Bundles\n");
                	        		        printf("5) Other (4G&3G) Bundles\n");
										    printf("0) Back\n");
                                            int intern2;
										scanf("%d",&intern2);
										switch(intern2) {
											case 1:
												    //######Tubitayeho##############################
												    system("cls||clear");
												    printf("1) 5000Frw=60GB/30Days(2GB Daily)\n");
												    printf("2) 3000Frw=30GB/30Days(1GB Daily)\n");
												    printf("3) 2000Frw=15GB/30Days(500MB Daily)\n");
												    int intern2E1;
                	        		    		    scanf("%d",&intern2E1);
                	        		    		    switch(intern2E1){
                	        		    		    	case 1: 
                	        		    		    	        system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin3e22[5];
										                        scanf("%s",&pin3e22);
										                        system("cls||clear");
										                        printf("You send Data of 5000Frw=60GB/30Days(2GB Daily) to :%s\n",numb3);
														break;
                	        		    		    	case 2:
                	        		    		    		    system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin3e32[5];
										                        scanf("%s",&pin3e32);
										                        system("cls||clear");
										                        printf("You send Data of 3000Frw=30GB/30Days(1GB Daily) to :%s\n",numb3);
														break;
                	        		    		    	case 3:
                	        		    		    		    system("cls||clear");
																printf("Enter PIN.\n");
										                        char pin3e42[5];
										                        scanf("%s",&pin3e42);
										                        system("cls||clear");
										                        printf("You send Data of 2000Frw=15GB/30Days(500MB Daily) to :%s\n",numb3);
														break;
														default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
													}
											break;
											case 2: 
											        //#####internet Irekure####################################################
												    system("cls||clear");
												    printf("1) Irekure Daily\n");
												    printf("2) Irekure Weekly\n");
												    printf("3) Irekure Monthly\n");
												    int intern2E2;
                	        		    		    scanf("%d",&intern2E2);
                	        		    		    switch(intern2E2){
                	        		    		    	case 1: 
                	        		    		    	        system("cls||clear");
																printf("1) 110FRW(60MB)-PROMO\n");
																printf("2) 300FRW(280MB)-PROMO\n");
																printf("3) 100FRW(50MB)\n");
																printf("4) 200FRW(150MB)\n");
																printf("5) 500FRW(800MB)\n");
										                        int irekure22;
										                        scanf("%d",&irekure22);
										                        switch(irekure22){
										                        	case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e12[5];
										                                    scanf("%s",&pin4e12);
										                        		    system("cls||clear");
										                                    printf("You send Data of 110FRW(60MB)-PROMO to:%s\n",numb3);
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e22[5];
										                                    scanf("%s",&pin4e22);
										                            	    system("cls||clear");
										                                    printf("You send Data of 300FRW(280MB)-PROMO to:%s\n",numb3);
										                            break;
										                            case 3:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e32[5];
										                                    scanf("%s",&pin4e32);
										                            	    system("cls||clear");
										                                    printf("You send Data of 100FRW(50MB)\n");
										                            break;
										                            case 4:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e42[5];
										                                    scanf("%s",&pin4e42);
										                            	    system("cls||clear");
										                                    printf("You send Data of 200FRW(150MB) to:%s\n",numb3);
										                            break;
										                            case 5:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4e52[5];
										                                    scanf("%s",&pin4e52);
										                            	    system("cls||clear");
										                                    printf("You send Data of 500FRW(800MB) to:%s\n",numb3);
										                            break;
										                            default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
																}
														break;
                	        		    		    	case 2:
                	        		    		    		    system("cls||clear");
																printf("1) 1,100FRW(1.1GB)-PROMO\n");
																printf("2) 2,200FRW(2.8GB)-PROMO\n");
																printf("3) 1,000FRW(1GB)\n");
																printf("4) 2,000FRW(2.5GB)\n");
																printf("5) 3,000FRW(4.2GB)\n");
																printf("6) 5,000FRW(7GB)\n");
																printf("7) 7,000FRW(10.7GB)\n");
										                        int irekure23;
										                        scanf("%d",&irekure23);
										                        switch(irekure23){
										                        	case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e12[5];
										                                    scanf("%s",&pin5e12);
										                        		    system("cls||clear");
										                                    printf("You send Data of 1,100FRW(1.1GB)-PROMO to:%s\n",numb3);
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e22[5];
										                                    scanf("%s",&pin5e22);
										                            	    system("cls||clear");
										                                    printf("You send Data of 2,200FRW(2.8GB)-PROMO) to:%s\n",numb3);
										                            break;
										                            case 3:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e32[5];
										                                    scanf("%s",&pin5e32);
										                            	    system("cls||clear");
										                                    printf("You send Data of 1,000FRW(1GB) to:%s\n",numb3);
										                            break;
										                            case 4:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e42[5];
										                                    scanf("%s",&pin5e42);
										                            	    system("cls||clear");
										                                    printf("You send Data of 2,000FRW(2.5GB) to:%s\n",numb3);
										                            break;
										                            case 5:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e52[5];
										                                    scanf("%s",&pin5e52);
										                            	    system("cls||clear");
										                                    printf("You send Data of 3,000FRW(4.2GB) to:%s\n",numb3);
										                            break;
										                            case 6:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e62[5];
										                                    scanf("%s",&pin5e62);
										                            	    system("cls||clear");
										                                    printf("You send Data of 5,000FRW(7GB) to:%s\n",numb3);
										                            break;
										                            case 7:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5e72[5];
										                                    scanf("%s",&pin5e72);
										                            	    system("cls||clear");
										                                    printf("You send Data of 7,000FRW(10.7GB) to:%s\n",numb3);
										                            break;
										                            default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
																}
														break;
                	        		    		    	case 3:
                	        		    		    		    system("cls||clear");
																printf("1) 2,300FRW(2.4GB)-PROMO\n");
																printf("2) 5,500FRW(8GB)-PROMO\n");
																printf("3) 2,000FRW(2GB)\n");
																printf("4) 5,000FRW(7GB)\n");
																printf("5) 7,000FRW(13GB)\n");
																printf("6) 10,000FRW(30GB)\n");
										                        int irekure32;
										                        scanf("%d",&irekure32);
										                        switch(irekure32){
										                        	case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e12[5];
										                                    scanf("%s",&pin6e12);
										                        		    system("cls||clear");
										                                    printf("You send Data of 2,300FRW(2.4GB)-PROMO to:%s\n",numb3);
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e22[5];
										                                    scanf("%s",&pin6e22);
										                            	    system("cls||clear");
										                                    printf("You send Data of 5,500FRW(8GB)-PROMO to:%s\n",numb3);
										                            break;
										                            case 3:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e32[5];
										                                    scanf("%s",&pin6e32);
										                            	    system("cls||clear");
										                                    printf("You send Data of 2,000FRW(2GB) to:%s\n",numb3);
										                            break;
										                            case 4:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e42[5];
										                                    scanf("%s",&pin6e42);
										                            	    system("cls||clear");
										                                    printf("You send Data of 5,000FRW(7GB) to:%s\n",numb3);
										                            break;
										                            case 5:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e52[5];
										                                    scanf("%s",&pin6e52);
										                            	    system("cls||clear");
										                                    printf("You send Data of 7,000FRW(13GB) to:%s\n",numb3);
										                            break;
										                            case 6:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6e62[5];
										                                    scanf("%s",&pin6e62);
										                            	    system("cls||clear");
										                                    printf("You send Data of 10,000FRW(30GB) to:%s\n",numb3);
										                            break;
										                            default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
																}
														break;
														default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
													}
											break;
											case 3:
												    //####Tuuuza Bundles(No Expiry)##################
												    system("cls||clear");
												    printf("1) 200Rwf(130)\n");
												    printf("2) 1000Rwf(800)\n");
                                                    int tuuza12;
                                                    scanf("%d",&tuuza12);
                                                    switch(tuuza12){
                                                                case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1t2[5];
										                                    scanf("%s",&pin1t2);
										                        		    system("cls||clear");
										                                    printf("You send Tuuuza Bundles of 200Rwf(130) to:%s\n",numb3);
										                        break;
										                        case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2t2[5];
										                                    scanf("%s",&pin2t2);
										                            	    system("cls||clear");
										                                    printf("You send Tuuuza Bundles of 1000Rwf(800) to:%s\n",numb3);
										                        break;
                                                                default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                    }
												    
											break;
											case 4:
												    //####(4G&3G) Bundles############################
												    system("cls||clear");
												    printf("1) (4G&3G) Bundle Daily\n");
												    printf("2) (4G&3G) Bundle Weekly\n");
												    printf("3) (4G&3G) Bundle Monthly\n");
                                                    int bundles122;
                                                    scanf("%d",&bundles122);
                                                    switch(bundles122){
                                                        case 1:
                                                                // (4G&3G) Bundle Daily
                                                                printf("1) 100Rwf(15MB)\n");
                                                                printf("2) 200Rwf(50MB)\n");
                                                                printf("3) 3500Rwf(100MB)\n");
                                                                printf("4) 1000Rwf(1GB)\n");
                                                                int bundles112;
                                                                scanf("%d",&bundles112);
                                                                switch(bundles112){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1bd2[5];
										                                    scanf("%s",&pin1bd2);
										                        		    system("cls||clear");
										                                    printf("You send Daily Bundles of  100Rwf(15MB) to:%s\n",numb3);
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2bd2[5];
										                                    scanf("%s",&pin2bd2);
										                            	    system("cls||clear");
										                                    printf("You send Daily Bundles of  200Rwf(50MB) to:%s\n",numb3);
										                            break;
                                                                    case 3:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin3bd2[5];
										                                    scanf("%s",&pin1bd2);
										                        		    system("cls||clear");
										                                    printf("You send Daily Bundles of  3500Rwf(100MB) to:%s\n",numb3);
										                            break;
                                                                    case 4:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4bd2[5];
										                                    scanf("%s",&pin4bd2);
										                        		    system("cls||clear");
										                                    printf("You send Daily Bundles of  1000Rwf(1GB) to:%s\n",numb3);
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");

                                                                    }
 
                                                        break;
                                                        case 2:
                                                               //(4G&3G) Bundle Weekly
                                                               printf("1) 1000Rwf(500MB)\n");
                                                               printf("2) 2000Rwf(1.5GB)\n");
                                                               printf("3) 5000Rwf(1GB/Umunsi)\n");
                                                               int bundles123;
                                                               scanf("%d",&bundles123);
                                                               switch(bundles123){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1bw2[5];
										                                    scanf("%s",&pin1bw2);
										                        		    system("cls||clear");
										                                    printf("You send Weekly Bundles of 1000Rwf(500MB) to:%s\n",numb3);
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2bw2[5];
										                                    scanf("%s",&pin2bw2);
										                            	    system("cls||clear");
										                                    printf("You send Weekly Bundles of 2000Rwf(1.5GB) to:%s\n",numb3);
										                            break;
                                                                    case 3:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin3bw2[5];
										                                    scanf("%s",&pin1bw2);
										                        		    system("cls||clear");
										                                    printf("You send Weekly Bundles of 5000Rwf(1GB/Umunsi) to:%s\n",numb3);
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");

                                                               }

                                                        break;
                                                        case 3:
                                                               //(4G&3G) Bundle Monthly
                                                               printf("1) 2000Rwf(1GB)/30days\n");
                                                               printf("2) 5000Rwf(3GB)/30days\n");
                                                               printf("3) 21000Rwf(1GB/Day)/30days\n");
                                                               printf("4) 1000Rwf(300MB)\n");
                                                               printf("5) 25000Rwf(30GB)\n");
                                                               printf("6) 10000Rwf(10GB)\n");
                                                               printf("7) 25000Rwf(2GB/Day)(3G Only)\n");
                                                               printf("8) 30000Rwf(3GB/Day)(3G Only)\n");
                                                               printf("9) 40000Rwf(5GB/Daily)(3G Only)\n");
                                                               int bundles133;
                                                               scanf("%d",&bundles133);
                                                               switch(bundles133){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1bm2[5];
										                                    scanf("%s",&pin1bm2);
										                        		    system("cls||clear");
										                                    printf("You send Monthly Bundles of 2000Rwf(1GB)/30days to:%s\n",numb3);
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2bm2[5];
										                                    scanf("%s",&pin2bm2);
										                            	    system("cls||clear");
										                                    printf("You send Monthly Bundles of 5000Rwf(3GB)/30days to:%s\n",numb3);
										                            break;
                                                                    case 3:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin3bm2[5];
										                                    scanf("%s",&pin1bm2);
										                        		    system("cls||clear");
										                                    printf("You send Monthly Bundles of 21000Rwf(1GB/Day)/30days to:%s\n",numb3);
										                            break;
                                                                    case 4:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4bm2[5];
										                                    scanf("%s",&pin4bm2);
										                        		    system("cls||clear");
										                                    printf("You send Monthly Bundles of 1000Rwf(300MB) to:%s\n",numb3);
										                            break;
										                            case 5:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin5bm2[5];
										                                    scanf("%s",&pin5bm2);
										                            	    system("cls||clear");
										                                    printf("You send Monthly Bundles of 25000Rwf(30GB) to:%s\n",numb3);
										                            break;
                                                                    case 6:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin6bm2[5];
										                                    scanf("%s",&pin6bm2);
										                        		    system("cls||clear");
										                                    printf("You send Monthly Bundles of 10000Rwf(10GB) to:%s\n",numb3);
										                            break;
                                                                    case 7:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin7bm2[5];
										                                    scanf("%s",&pin7bm2);
										                        		    system("cls||clear");
										                                    printf("You send Monthly Bundles of 25000Rwf(2GB/Day)(3G Only) to:%s\n",numb3);
										                            break;
										                            case 8:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin8bm2[5];
										                                    scanf("%s",&pin8bm2);
										                            	    system("cls||clear");
										                                    printf("You send Monthly Bundles of 30000Rwf(3GB/Day)(3G Only) to:%s\n",numb3);
										                            break;
                                                                    case 9:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin9bm2[5];
										                                    scanf("%s",&pin9bm2);
										                        		    system("cls||clear");
										                                    printf("You send Monthly Bundles of 40000Rwf(5GB/Daily)(3G Only) to:%s\n",numb3);
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                               }


                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
												    
											break;
											case 5:
												  //  ####Other (4G&3G) Bundles######################
												    system("cls||clear");
												    printf("1) Other Daily (4G&3G) Bundle Daily\n");
												    printf("2) Other (4G&3G) Bundle Weekly\n");
												    printf("3) Other (4G&3G) Bundle Monthly\n");
                                                    int other122;
                                                    scanf("%d",&other122);
                                                    switch(other122){
                                                        case 1:
                        	                        		    system("cls||clear");
                                                                printf("1) 100Rwf(50MB)/24hrs\n");
                                                                printf("2) 200Rwf(150MB)/24hrs\n");
                                                                printf("3) 350Rwf(350MB)/24hrs\n");
                                                                printf("4) 500Rwf(500MB)/24hrs\n");
                                                                int other1d2;
                                                                scanf("%d",&other1d2);
                                                                switch(other1d2){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1od2[5];
										                                    scanf("%s",&pin1od2);
										                        		    system("cls||clear");
										                                    printf("You send other daily Bundles of 100Rwf(50MB)/24hrs to:%s\n",numb3);
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2od2[5];
										                                    scanf("%s",&pin2od2);
										                            	    system("cls||clear");
										                                    printf("You send other daily Bundles of 200Rwf(150MB)/24hrs to:%s\n",numb3);
										                            break;
                                                                    case 3:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin3od2[5];
										                                    scanf("%s",&pin1od2);
										                        		    system("cls||clear");
										                                    printf("You send other daily Bundles of 350Rwf(350MB)/24hrs to:%s\n",numb3);
										                            break;
                                                                    case 4:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin4od2[5];
										                                    scanf("%s",&pin4od2);
										                        		    system("cls||clear");
										                                    printf("You send other daily Bundles of 500Rwf(500MB)/24hrs to:%s\n",numb3);
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
										                break;
										                case 2:
                			                            	    system("cls||clear");
                                                                printf("1) 1000(1GB)/7days\n");
                                                                printf("2) 3000(4GB)/7Days\n");
                                                                int other1w2;
                                                                scanf("%d",&other1w2);
                                                                switch(other1w2){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1ow2[5];
										                                    scanf("%s",&pin1ow2);
										                        		    system("cls||clear");
										                                    printf("You send other Weekly Bundles of 1000(1GB)/7days to:%s\n",numb3);
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2ow2[5];
										                                    scanf("%s",&pin2ow2);
										                            	    system("cls||clear");
										                                    printf("You send other Weekly Bundles of 3000(4GB)/7Days to:%s\n",numb3);
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
													            
										                break;
                                                        case 3:
							                        		    system("cls||clear");
                                                                printf("1) 5000Rwf(7GB)/30Days\n");
                                                                printf("2) 10000Rwf(16GB)/30Days\n");
                                                                printf("3) 18000Rwf(30GB)/30Days\n");
                                                                int other1m2;
                                                                scanf("%d",&other1m2);
                                                                switch(other1m2){
                                                                    case 1:
										                        		    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin1om2[5];
										                                    scanf("%s",&pin1om2);
										                        		    system("cls||clear");
										                                    printf("You send other Monthly Bundles of 5000Rwf(7GB)/30Days to:%s\n",numb3);
										                            break;
										                            case 2:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2om2[5];
										                                    scanf("%s",&pin2om2);
										                            	    system("cls||clear");
										                                    printf("You send other Monthly Bundles of 10000Rwf(16GB)/30Days to:%s\n",numb3);
										                            break;
                                                                    case 3:
										                            	    system("cls||clear");
																            printf("Enter PIN.\n");
										                                    char pin2om222[5];
										                                    scanf("%s",&pin2om222);
										                            	    system("cls||clear");
										                                    printf("You send other Monthly Bundles of 18000Rwf(30GB)/30Days to:%s\n",numb3);
										                            break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
													            
										                break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
												    
											break;
											case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            break;
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
                                            
										}


                                        }
                                        else {
                                            // Invalid recipient number
                                        system("cls||clear");
                                        printf("Invalid Mobile number\n");
                                        }
                                        
                	        	break;
                	        	default:
                                        system("cls||clear");
                                        printf("Your choice was incorrect. Please try again.\n");
							}
                	break;
					case 4: 
					        //######Voice Packs###########
                	        system("cls||clear");
                	        printf("1) Buy for self\n");
                	        printf("2) Buy for others\n");
                            int voice1;
                            scanf("%d",&voice1);
                            switch (voice1){
                                case 1:
                                        //voice packs forself
                                        system("cls||clear");
                                        printf("1) Tubitayeho\n");
                                        printf("2) Irekure Daily\n");
                                        printf("3) MTN Uburyohe\n");
                                        printf("4) Supapack All Networks(24hrs)\n");
                                        printf("5) Supapack Weekly All Networks\n");
                                        printf("6) International Packs\n");
                                        printf("0) Back\n");
                                        int voice1p1;
                                        scanf("%d",&voice1p1);
                                        switch(voice1p1){
                                            case 1:
                                                    system("cls||clear");
                                                    printf("1) 5000Frw=Unlimited(30Days)\n");
                                                    printf("2) 3000Frw=3500mins+200SMS(30Days)\n");
                                                    printf("3) 2000Frw=1500Mins+200SMS(30Days)\n");
                                                    int voice1p1e1;
                                                    scanf("%d",&voice1p1e1);
                                                    switch(voice1p1e1){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo1[5];
                                                                scanf("%s",&pinvo1);
                                                                system("cls||clear");
                                                                printf("You Bought 5000Frw=Unlimited(30Days)\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo2[5];
                                                                scanf("%s",&pinvo2);
                                                                system("cls||clear");
                                                                printf("You Bought 3000Frw=3500mins+200SMS(30Days)\n");
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo3[5];
                                                                scanf("%s",&pinvo3);
                                                                system("cls||clear");
                                                                printf("You Bought 2000Frw=1500Mins+200SMS(30Days)\n");
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
                                            break;
                                            case 2:
                                                    system("cls||clear");
                                                    printf("1) 200Rwf=60Mins+20SMS+5MBs\n");
                                                    printf("2) 150Rwf=35Mins+20SMS+5MBs\n");
                                                    printf("3) 120Rwf=25Mins+20SMS\n");
                                                    printf("4) 100Rwf=20Mins+20SMS\n");
                                                    printf("5) 50Rwf=9Mins+10SMS\n");
                                                    int voice1p1e2;
                                                    scanf("%d",&voice1p1e2);
                                                    switch(voice1p1e2){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo11[5];
                                                                scanf("%s",&pinvo11);
                                                                system("cls||clear");
                                                                printf("You Bought 200Rwf=60Mins+20SMS+5MBs\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo21[5];
                                                                scanf("%s",&pinvo21);
                                                                system("cls||clear");
                                                                printf("You Bought 150Rwf=35Mins+20SMS+5MBs\n");
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo31[5];
                                                                scanf("%s",&pinvo31);
                                                                system("cls||clear");
                                                                printf("You Bought 120Rwf=25Mins+20SMS\n");
                                                        break;
                                                        case 4:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo41[5];
                                                                scanf("%s",&pinvo41);
                                                                system("cls||clear");
                                                                printf("You Bought 100Rwf=20Mins+20SMS\n");
                                                        break;
                                                        case 5:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo51[5];
                                                                scanf("%s",&pinvo51);
                                                                system("cls||clear");
                                                                printf("You Bought 50Rwf=9Mins+10SMS\n");
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");

                                                    }

                                            break;
                                            case 3:
                                                    system("cls||clear");
                                                    printf("1) 200Frw=All Day(MTN to MTN)except between 6PM and 9PM\n");
                                                    printf("2) 200Frw=120M+50SMS(MTN to MTN)\n");
                                                    int voice1p1e3;
                                                    scanf("%d",&voice1p1e3);
                                                    switch(voice1p1e3){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo12[5];
                                                                scanf("%s",&pinvo12);
                                                                system("cls||clear");
                                                                printf("You Bought 200Frw=All Day(MTN to MTN)except between 6PM and 9PM\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo22[5];
                                                                scanf("%s",&pinvo22);
                                                                system("cls||clear");
                                                                printf("You Bought 200Frw=120M+50SMS(MTN to MTN)\n");
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
                                            break;
                                            case 4:
                                                    system("cls||clear");
                                                    printf("1) 100Rwf=420S(7M)+5SMS\n");
                                                    printf("2) 150Rwf=720S(12M)+5SMS\n");
                                                    printf("3) 200Rwf=1200S(20M)+5SMS\n");
                                                    printf("4) 350Rwf=1800S(30M)+5SMS\n");
                                                    printf("5) 500Rwf=2400S(40M)+5SMS\n");
                                                    int voice1p1e4;
                                                    scanf("%d",&voice1p1e4);
                                                    switch(voice1p1e4){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo13[5];
                                                                scanf("%s",&pinvo13);
                                                                system("cls||clear");
                                                                printf("You Bought 100Rwf=420S(7M)+5SMS\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo23[5];
                                                                scanf("%s",&pinvo23);
                                                                system("cls||clear");
                                                                printf("You Bought 150Rwf=720S(12M)+5SMS\n");
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo33[5];
                                                                scanf("%s",&pinvo33);
                                                                system("cls||clear");
                                                                printf("You Bought 200Rwf=1200S(20M)+5SMS\n");
                                                        break;
                                                        case 4:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo43[5];
                                                                scanf("%s",&pinvo43);
                                                                system("cls||clear");
                                                                printf("You Bought 350Rwf=1800S(30M)+5SMS\n");
                                                        break;
                                                        case 5:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo53[5];
                                                                scanf("%s",&pinvo53);
                                                                system("cls||clear");
                                                                printf("You Bought 500Rwf=2400S(40M)+5SMS\n");
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }


                                            break;
                                            case 5:
                                                    system("cls||clear");
                                                    printf("1) 1000Rwf(20Mins/Umunsi+50SMS)\n");
                                                    printf("2) 1500Rwf(40Mins/Umunsi+50SMS)\n");
                                                    printf("3) 5000Rwf(1000Mins+100SMS)\n");
                                                    int voice1p1e5;
                                                    scanf("%d",&voice1p1e5);
                                                    switch(voice1p1e5){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo14[5];
                                                                scanf("%s",&pinvo14);
                                                                system("cls||clear");
                                                                printf("You Bought 1000Rwf(20Mins/Umunsi+50SMS)\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo24[5];
                                                                scanf("%s",&pinvo24);
                                                                system("cls||clear");
                                                                printf("You Bought 1500Rwf(40Mins/Umunsi+50SMS)\n");
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo34[5];
                                                                scanf("%s",&pinvo34);
                                                                system("cls||clear");
                                                                printf("You Bought 5000Rwf(1000Mins+100SMS)\n");
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }

                                            break;
                                            case 6:
                                                    system("cls||clear");
                                                    printf("1) International Pack Daily\n");
                                                    printf("2) International Pack Weekly\n");
                                                    printf("3) International Pack Monthly\n");
                                            break;
                                            case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            break;
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
                                        }

                                break;
                                case 2:
                                        //voice packs for others
                                        system("cls||clear");
                	        	        printf("Insert the receiver's number\n");
									    char numb4[12];
									    scanf("%s",&numb4);
                                        if ((strncmp(numb4, "078", 3) == 0 || strncmp(numb4, "079", 3) == 0) && strlen(numb4) == 10){
                                            system("cls||clear");
                                            printf("1) Tubitayeho\n");
                                            printf("2) Irekure Daily\n");
                                            printf("3) MTN Uburyohe\n");
                                            printf("4) Supapack All Networks(24hrs)\n");
                                            printf("5) Supapack Weekly All Networks\n");
                                            printf("6) International Packs\n");
                                            printf("0) Back\n");
                                            int voice1p2;
                                        scanf("%d",&voice1p2);
                                        switch(voice1p2){
                                            case 1:
                                                    system("cls||clear");
                                                    printf("1) 5000Frw=Unlimited(30Days)\n");
                                                    printf("2) 3000Frw=3500mins+200SMS(30Days)\n");
                                                    printf("3) 2000Frw=1500Mins+200SMS(30Days)\n");
                                                    int voice1p1e11;
                                                    scanf("%d",&voice1p1e11);
                                                    switch(voice1p1e11){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo111[5];
                                                                scanf("%s",&pinvo111);
                                                                system("cls||clear");
                                                                printf("You send 5000Frw=Unlimited(30Days) to :%s\n",numb4);
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo211[5];
                                                                scanf("%s",&pinvo211);
                                                                system("cls||clear");
                                                                printf("You send 3000Frw=3500mins+200SMS(30Days) to :%s\n",numb4);
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo311[5];
                                                                scanf("%s",&pinvo311);
                                                                system("cls||clear");
                                                                printf("You send 2000Frw=1500Mins+200SMS(30Days) to :%s\n",numb4);
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
                                            break;
                                            case 2:
                                                    system("cls||clear");
                                                    printf("1) 200Rwf=60Mins+20SMS+5MBs\n");
                                                    printf("2) 150Rwf=35Mins+20SMS+5MBs\n");
                                                    printf("3) 120Rwf=25Mins+20SMS\n");
                                                    printf("4) 100Rwf=20Mins+20SMS\n");
                                                    printf("5) 50Rwf=9Mins+10SMS\n");
                                                    int voice1p1e21;
                                                    scanf("%d",&voice1p1e21);
                                                    switch(voice1p1e21){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo112[5];
                                                                scanf("%s",&pinvo112);
                                                                system("cls||clear");
                                                                printf("You send 200Rwf=60Mins+20SMS+5MBs to :%s\n",numb4);
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo212[5];
                                                                scanf("%s",&pinvo212);
                                                                system("cls||clear");
                                                                printf("You send 150Rwf=35Mins+20SMS+5MBs to :%s\n",numb4);
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo312[5];
                                                                scanf("%s",&pinvo312);
                                                                system("cls||clear");
                                                                printf("You send 120Rwf=25Mins+20SMS to :%s\n",numb4);
                                                        break;
                                                        case 4:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo412[5];
                                                                scanf("%s",&pinvo412);
                                                                system("cls||clear");
                                                                printf("You send 100Rwf=20Mins+20SMS to :%s\n",numb4);
                                                        break;
                                                        case 5:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo512[5];
                                                                scanf("%s",&pinvo512);
                                                                system("cls||clear");
                                                                printf("You send 50Rwf=9Mins+10SMS to :%s\n",numb4);
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");

                                                    }

                                            break;
                                            case 3:
                                                    system("cls||clear");
                                                    printf("1) 200Frw=All Day(MTN to MTN)except between 6PM and 9PM\n");
                                                    printf("2) 200Frw=120M+50SMS(MTN to MTN)\n");
                                                    int voice1p1e31;
                                                    scanf("%d",&voice1p1e31);
                                                    switch(voice1p1e31){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo123[5];
                                                                scanf("%s",&pinvo123);
                                                                system("cls||clear");
                                                                printf("You send 200Frw=All Day(MTN to MTN)except between 6PM and 9PM to :%s\n",numb4);
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo223[5];
                                                                scanf("%s",&pinvo223);
                                                                system("cls||clear");
                                                                printf("You send 200Frw=120M+50SMS(MTN to MTN) to :%s\n",numb4);
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
                                            break;
                                            case 4:
                                                    system("cls||clear");
                                                    printf("1) 100Rwf=420S(7M)+5SMS\n");
                                                    printf("2) 150Rwf=720S(12M)+5SMS\n");
                                                    printf("3) 200Rwf=1200S(20M)+5SMS\n");
                                                    printf("4) 350Rwf=1800S(30M)+5SMS\n");
                                                    printf("5) 500Rwf=2400S(40M)+5SMS\n");
                                                    int voice1p1e41;
                                                    scanf("%d",&voice1p1e41);
                                                    switch(voice1p1e41){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo134[5];
                                                                scanf("%s",&pinvo134);
                                                                system("cls||clear");
                                                                printf("You send 100Rwf=420S(7M)+5SMS to :%s\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo234[5];
                                                                scanf("%s",&pinvo234);
                                                                system("cls||clear");
                                                                printf("You send 150Rwf=720S(12M)+5SMS to :%s\n",numb4);
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo334[5];
                                                                scanf("%s",&pinvo334);
                                                                system("cls||clear");
                                                                printf("You send 200Rwf=1200S(20M)+5SMS to :%s\n",numb4);
                                                        break;
                                                        case 4:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo434[5];
                                                                scanf("%s",&pinvo434);
                                                                system("cls||clear");
                                                                printf("You send 350Rwf=1800S(30M)+5SMS to :%s\n",numb4);
                                                        break;
                                                        case 5:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo534[5];
                                                                scanf("%s",&pinvo534);
                                                                system("cls||clear");
                                                                printf("You send 500Rwf=2400S(40M)+5SMS to :%s\n",numb4);
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }


                                            break;
                                            case 5:
                                                    system("cls||clear");
                                                    printf("1) 1000Rwf(20Mins/Umunsi+50SMS)\n");
                                                    printf("2) 1500Rwf(40Mins/Umunsi+50SMS)\n");
                                                    printf("3) 5000Rwf(1000Mins+100SMS)\n");
                                                    int voice1p1e51;
                                                    scanf("%d",&voice1p1e51);
                                                    switch(voice1p1e51){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo145[5];
                                                                scanf("%s",&pinvo145);
                                                                system("cls||clear");
                                                                printf("You send 1000Rwf(20Mins/Umunsi+50SMS) to :%s\n",numb4);
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo245[5];
                                                                scanf("%s",&pinvo245);
                                                                system("cls||clear");
                                                                printf("You send 1500Rwf(40Mins/Umunsi+50SMS) to :%s\n",numb4);
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN.\n");
                                                                char pinvo345[5];
                                                                scanf("%s",&pinvo345);
                                                                system("cls||clear");
                                                                printf("You send 5000Rwf(1000Mins+100SMS) to :%s\n",numb4);
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }

                                            break;
                                            case 6:
                                                    system("cls||clear");
                                                    printf("1) International Pack Daily\n");
                                                    printf("2) International Pack Weekly\n");
                                                    printf("3) International Pack Monthly\n");
                                            break;
                                            case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            break;
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
                                        }


                                        }
                                        else {
                                            // Invalid recipient number
                                        system("cls||clear");
                                        printf("Invalid Mobile number\n");
                                        }

                                break;
                                default:
                                        system("cls||clear");
                                        printf("Your choice was incorrect. Please try again.\n");
                            }
                            
                	break;
					case 5: 
					        //######Yolo##################
                	        system("cls||clear");
                	        printf("1) Buy for self\n");
                	        printf("2) Buy for others\n");
                            int yolo;
                            scanf("%d",&yolo);
                            switch(yolo){
                                case 1:
                                        //Yolo for self
                                        system("cls||clear");
                                        printf("1) Yolo Voice\n");
                                        printf("2) Yolo Internet\n");
                                        printf("3) Other Yolo(4G&3G)\n");
                                        printf("0) Back\n");
                                        int yolo1;
                                        scanf("%d",&yolo1);
                                        switch(yolo1){
                                            case 1:
                                                    system("cls||clear");
                                                    printf("1) Yolo Daily\n");
                                                    printf("2) Yolo Weekly\n");
                                                    int yolovoi;
                                                    scanf("%d",&yolovoi);
                                                    switch(yolovoi){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("1) EXTRA 100Frw=1800Secs(30M)+30SMS\n");
                                                                printf("2) 200Frw=70Mins+30SMS\n");
                                                                int yolovoi1;
                                                                scanf("%d",&yolovoi1);
                                                                switch(yolovoi1){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinvoi1[5];
                                                                            scanf("%s",&pinvoi1);
                                                                            system("cls||clear");
                                                                            printf("You bought EXTRA 100Frw=1800Secs(30M)+30SMS\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinvoi2[5];
                                                                            scanf("%s",&pinvoi2);
                                                                            system("cls||clear");
                                                                            printf("You bought 200Frw=70Mins+30SMS\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("1) 500Frw=100Mins+30SMS\n");
                                                                printf("2) 2000Frw=700Mins+700SMS+1.5GB(PROMO)\n");
                                                                int yolovoi2;
                                                                scanf("%d",&yolovoi2);
                                                                switch(yolovoi2){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinvoi3[5];
                                                                            scanf("%s",&pinvoi3);
                                                                            system("cls||clear");
                                                                            printf("You bought 500Frw=100Mins+30SMS\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinvoi4[5];
                                                                            scanf("%s",&pinvoi4);
                                                                            system("cls||clear");
                                                                            printf("You bought 2000Frw=700Mins+700SMS+1.5GB(PROMO)\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
                                            break;
                                            case 2:
                                                    system("cls||clear");
                                                    printf("1) Yolo Daily(4G&3G)Bundles\n");
                                                    printf("2) Yolo Weekly(4G&3G)Bundle\n");
                                                    printf("3) Yolo Monthly(4G&3G)Bundle\n");
                                                    int yoloint;
                                                    scanf("%d",&yoloint);
                                                    switch(yoloint){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("1) 100Frw=200MB+30SMS/24hr\n");
                                                                printf("2) 100Frw=230MB(150MB+80MB(WA/FB/IG)+30SMS)\n");
                                                                printf("3) 200Frw=420MB+30SMS/24hrs\n");
                                                                int yoloint1;
                                                                scanf("%d",&yoloint1);
                                                                switch(yoloint1){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint1[5];
                                                                            scanf("%s",&pinint1);
                                                                            system("cls||clear");
                                                                            printf("You bought 100Frw=200MB+30SMS/24hr\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint2[5];
                                                                            scanf("%s",&pinint2);
                                                                            system("cls||clear");
                                                                            printf("You bought 100Frw=230MB(150MB+80MB(WA/FB/IG)+30SMS)\n");
                                                                    break;
                                                                    case 3:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint8[5];
                                                                            scanf("%s",&pinint8);
                                                                            system("cls||clear");
                                                                            printf("You bought 200Frw=420MB+30SMS/24hrs\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("1) 500Frw=1024MB+1Hr Yello TV+30SMS/Weekly\n");
                                                                printf("2) 500Frw=1.2GB(700MB+500MB(WA/FB/IG)+30SMS+Free Yello TV)\n");
                                                                int yoloint2;
                                                                scanf("%d",&yoloint2);
                                                                switch(yoloint2){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint3[5];
                                                                            scanf("%s",&pinint3);
                                                                            system("cls||clear");
                                                                            printf("You bought 500Frw=1024MB+1Hr Yello TV+30SMS/Weekly\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint4[5];
                                                                            scanf("%s",&pinint4);
                                                                            system("cls||clear");
                                                                            printf("You bought 500Frw=1.2GB(700MB+500MB(WA/FB/IG)+30SMS+Free Yello TV)\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("1) 1000Frw=1331MB+30SMS+3Hrs Yello TV/Monthly\n");
                                                                printf("2) 2000Frw=5127MB+3Hrs Yello TV+30SMS/Monthly\n");
                                                                printf("3) 1000Frw=1.6GB(800MB+800MB(WA/FB/IG)+Free Yello TV)\n");
                                                                int yoloint3;
                                                                scanf("%d",&yoloint3);
                                                                switch(yoloint3){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint5[5];
                                                                            scanf("%s",&pinint5);
                                                                            system("cls||clear");
                                                                            printf("You bought 1000Frw=1331MB+30SMS+3Hrs Yello TV/Monthly\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint6[5];
                                                                            scanf("%s",&pinint6);
                                                                            system("cls||clear");
                                                                            printf("You bought 2000Frw=5127MB+3Hrs Yello TV+30SMS/Monthly\n");
                                                                    break;
                                                                    case 3:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint7[5];
                                                                            scanf("%s",&pinint7);
                                                                            system("cls||clear");
                                                                            printf("You bought 1000Frw=1.6GB(800MB+800MB(WA/FB/IG)+Free Yello TV)\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");        
                                                    }
                                            break;
                                            case 3:
                                                    //Other Yolo
                                                    system("cls||clear");
                                                    printf("1) Other Yolo Daily(4G&3G)Bundles\n");
                                                    printf("2) Other Yolo Weekly(4G&3G)Bundles\n");
                                                    printf("3) Other Yolo(4G&3G)Monthly\n");
                                                    int otheryolo;
                                                    scanf("%d",&otheryolo);
                                                    switch(otheryolo){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("1) 100Frw=100MB/24hrs\n");
                                                                int otheryolo1;
                                                                scanf("%d",&otheryolo1);
                                                                switch(otheryolo1){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char otherpin1[5];
                                                                            scanf("%s",&otherpin1);
                                                                            system("cls||clear");
                                                                            printf("You bought 100Frw=100MB/24hrs\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("1) 500Frw=500MB/7Days\n");
                                                                int otheryolo2;
                                                                scanf("%d",&otheryolo2);
                                                                switch(otheryolo2){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char otherpin2[5];
                                                                            scanf("%s",&otherpin2);
                                                                            system("cls||clear");
                                                                            printf("You bought 500Frw=500MB/7Days\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("1) 1000Frw=800MB/Monthly\n");
                                                                int otheryolo3;
                                                                scanf("%d",&otheryolo3);
                                                                switch(otheryolo3){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char otherpin3[5];
                                                                            scanf("%s",&otherpin3);
                                                                            system("cls||clear");
                                                                            printf("You bought 1000Frw=800MB/Monthly\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");   
                                                                }
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }

                                            break;
                                            case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            break;
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
                                        }
                                break;
                                case 2:
                                        //Yolo for others
                                        system("cls||clear");
                                        printf("Insert the receiver's number\n");
									    char numb5[12];
									    scanf("%s",&numb5);
                                        if ((strncmp(numb5, "078", 3) == 0 || strncmp(numb5, "079", 3) == 0) && strlen(numb5) == 10){
                                            system("cls||clear");
                                        printf("1) Yolo Voice\n");
                                        printf("2) Yolo Internet\n");
                                        printf("3) Other Yolo(4G&3G)\n");
                                        printf("0) Back\n");
                                        int yolo2;
                                        scanf("%d",&yolo2);
                                        switch(yolo2){
                                            case 1:
                                                    system("cls||clear");
                                                    printf("1) Yolo Daily\n");
                                                    printf("2) Yolo Weekly\n");
                                                    int yolovoi222;
                                                    scanf("%d",&yolovoi222);
                                                    switch(yolovoi222){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("1) EXTRA 100Frw=1800Secs(30M)+30SMS\n");
                                                                printf("2) 200Frw=70Mins+30SMS\n");
                                                                int yolovoi1222;
                                                                scanf("%d",&yolovoi1222);
                                                                switch(yolovoi1222){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinvoi1222[5];
                                                                            scanf("%s",&pinvoi1222);
                                                                            system("cls||clear");
                                                                            printf("You bought EXTRA 100Frw=1800Secs(30M)+30SMS\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinvoi2222[5];
                                                                            scanf("%s",&pinvoi2222);
                                                                            system("cls||clear");
                                                                            printf("You bought 200Frw=70Mins+30SMS\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("1) 500Frw=100Mins+30SMS\n");
                                                                printf("2) 2000Frw=700Mins+700SMS+1.5GB(PROMO)\n");
                                                                int yolovoi2222;
                                                                scanf("%d",&yolovoi2222);
                                                                switch(yolovoi2222){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinvoi3222[5];
                                                                            scanf("%s",&pinvoi3222);
                                                                            system("cls||clear");
                                                                            printf("You bought 500Frw=100Mins+30SMS\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinvoi4222[5];
                                                                            scanf("%s",&pinvoi4222);
                                                                            system("cls||clear");
                                                                            printf("You bought 2000Frw=700Mins+700SMS+1.5GB(PROMO)\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
                                            break;
                                            case 2:
                                                    system("cls||clear");
                                                    printf("1) Yolo Daily(4G&3G)Bundles\n");
                                                    printf("2) Yolo Weekly(4G&3G)Bundle\n");
                                                    printf("3) Yolo Monthly(4G&3G)Bundle\n");
                                                    int yoloint222;
                                                    scanf("%d",&yoloint222);
                                                    switch(yoloint222){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("1) 100Frw=200MB+30SMS/24hr\n");
                                                                printf("2) 100Frw=230MB(150MB+80MB(WA/FB/IG)+30SMS)\n");
                                                                printf("3) 200Frw=420MB+30SMS/24hrs\n");
                                                                int yoloint1222;
                                                                scanf("%d",&yoloint1222);
                                                                switch(yoloint1222){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint1222[5];
                                                                            scanf("%s",&pinint1222);
                                                                            system("cls||clear");
                                                                            printf("You bought 100Frw=200MB+30SMS/24hr\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint2222[5];
                                                                            scanf("%s",&pinint2222);
                                                                            system("cls||clear");
                                                                            printf("You bought 100Frw=230MB(150MB+80MB(WA/FB/IG)+30SMS)\n");
                                                                    break;
                                                                    case 3:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint8222[5];
                                                                            scanf("%s",&pinint8222);
                                                                            system("cls||clear");
                                                                            printf("You bought 200Frw=420MB+30SMS/24hrs\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("1) 500Frw=1024MB+1Hr Yello TV+30SMS/Weekly\n");
                                                                printf("2) 500Frw=1.2GB(700MB+500MB(WA/FB/IG)+30SMS+Free Yello TV)\n");
                                                                int yoloint2222;
                                                                scanf("%d",&yoloint2222);
                                                                switch(yoloint2222){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint3222[5];
                                                                            scanf("%s",&pinint3222);
                                                                            system("cls||clear");
                                                                            printf("You bought 500Frw=1024MB+1Hr Yello TV+30SMS/Weekly\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint4222[5];
                                                                            scanf("%s",&pinint4222);
                                                                            system("cls||clear");
                                                                            printf("You bought 500Frw=1.2GB(700MB+500MB(WA/FB/IG)+30SMS+Free Yello TV)\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("1) 1000Frw=1331MB+30SMS+3Hrs Yello TV/Monthly\n");
                                                                printf("2) 2000Frw=5127MB+3Hrs Yello TV+30SMS/Monthly\n");
                                                                printf("3) 1000Frw=1.6GB(800MB+800MB(WA/FB/IG)+Free Yello TV)\n");
                                                                int yoloint3222;
                                                                scanf("%d",&yoloint3222);
                                                                switch(yoloint3222){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint5222[5];
                                                                            scanf("%s",&pinint5222);
                                                                            system("cls||clear");
                                                                            printf("You bought 1000Frw=1331MB+30SMS+3Hrs Yello TV/Monthly\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint6222[5];
                                                                            scanf("%s",&pinint6222);
                                                                            system("cls||clear");
                                                                            printf("You bought 2000Frw=5127MB+3Hrs Yello TV+30SMS/Monthly\n");
                                                                    break;
                                                                    case 3:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN.\n");
                                                                            char pinint7222[5];
                                                                            scanf("%s",&pinint7222);
                                                                            system("cls||clear");
                                                                            printf("You bought 1000Frw=1.6GB(800MB+800MB(WA/FB/IG)+Free Yello TV)\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");        
                                                    }
                                            break;
                                            case 3:
                                                    //Other Yolo
                                                    system("cls||clear");
                                                    printf("1) Other Yolo Daily(4G&3G)Bundles\n");
                                                    printf("2) Other Yolo Weekly(4G&3G)Bundles\n");
                                                    printf("3) Other Yolo(4G&3G)Monthly\n");
                                                    int otheryolo222;
                                                    scanf("%d",&otheryolo222);
                                                    switch(otheryolo222){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("1) 100Frw=100MB/24hrs\n");
                                                                int otheryolo1222;
                                                                scanf("%d",&otheryolo1222);
                                                                switch(otheryolo1222){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char otherpin1222[5];
                                                                            scanf("%s",&otherpin1222);
                                                                            system("cls||clear");
                                                                            printf("You bought 100Frw=100MB/24hrs\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("1) 500Frw=500MB/7Days\n");
                                                                int otheryolo2222;
                                                                scanf("%d",&otheryolo2222);
                                                                switch(otheryolo2222){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char otherpin2222[5];
                                                                            scanf("%s",&otherpin2222);
                                                                            system("cls||clear");
                                                                            printf("You bought 500Frw=500MB/7Days\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("1) 1000Frw=800MB/Monthly\n");
                                                                int otheryolo3222;
                                                                scanf("%d",&otheryolo3222);
                                                                switch(otheryolo3222){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char otherpin3222[5];
                                                                            scanf("%s",&otherpin3222);
                                                                            system("cls||clear");
                                                                            printf("You bought 1000Frw=800MB/Monthly\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");   
                                                                }
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }

                                            break;
                                            case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
                                        }

                                        }
                                        else {
                                            // Invalid recipient number
                                        system("cls||clear");
                                        printf("Invalid Mobile number\n");
                                        }

                                break;
                                default:
                                        system("cls||clear");
                                        printf("Your choice was incorrect. Please try again.\n");
                            }

                	break;
					case 6: 
					        //######Prestige##############
                	        system("cls||clear");
                	        printf("1) Buy for self\n");
                	        printf("2) Buy for others\n");
                            int prest;
                            scanf("%d",&prest);
                            switch(prest){
                                case 1:
                                        //prestige for self
                                        system("cls||clear");
                                        printf("1) Prestige Pack Monthly\n");
                                        printf("2) Prestige(4G&3G)\n");
                                        printf("0) Back\n");
                                        int prest1;
                                        scanf("%d",&prest1);
                                        switch(prest1){
                                            case 1:
                                                    system("cls||clear");
                                                    printf("1) 5000Frw(500min+1.5GB+200SMS)\n");
                                                    printf("2) 10000Frw(1100min+5GB+200SMS)\n");
                                                    printf("3) 20000Frw(2500min+15GB+200SMS)\n");
                                                    printf("4) 50000Frw(7500min+40GB+200SMS)\n");
                                                    int prest1e1;
                                                    scanf("%d",&prest1e1);
                                                    switch(prest1e1){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN:\n");
                                                                char prestpin1[5];
                                                                scanf("%s",&prestpin1);
                                                                system("cls||clear");
                                                                printf("You bought 5000Frw(500min+1.5GB+200SMS)\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN:\n");
                                                                char prestpin2[5];
                                                                scanf("%s",&prestpin2);
                                                                system("cls||clear");
                                                                printf("You bought 10000Frw(1100min+5GB+200SMS)\n");
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN:\n");
                                                                char prestpin3[5];
                                                                scanf("%s",&prestpin3);
                                                                system("cls||clear");
                                                                printf("You bought 20000Frw(2500min+15GB+200SMS)\n");
                                                        break;
                                                        case 4:
                                                                system("cls||clear");
                                                                printf("Enter PIN:\n");
                                                                char prestpin4[5];
                                                                scanf("%s",&prestpin4);
                                                                system("cls||clear");
                                                                printf("You bought 50000Frw(7500min+40GB+200SMS)\n");
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
                                            break;
                                            case 2:
                                                    system("cls||clear");
                                                    printf("1) Prestige Daily(4G&3G)\n");
                                                    printf("2) Prestige(4G&3G) Weekly\n");
                                                    printf("3) Prestige(4G&3G) Monthly\n");
                                                    int prest1e2;
                                                    scanf("%d",&prest1e2);
                                                    switch(prest1e2){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("1) 1000Frw(1GB)\n");
                                                                int prest1e21;
                                                                scanf("%d",&prest1e21);
                                                                switch(prest1e21){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin5[5];
                                                                            scanf("%s",&prestpin5);
                                                                            system("cls||clear");
                                                                            printf("You bought 1000Frw(1GB)\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("1) 5000Frw(5GB)/7Days\n");
                                                                int prest1e22;
                                                                scanf("%d",&prest1e22);
                                                                switch(prest1e22){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin6[5];
                                                                            scanf("%s",&prestpin6);
                                                                            system("cls||clear");
                                                                            printf("You bought 5000Frw(5GB)/7Days\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("1) 5000Rwf(7GB)/30Days\n");
                                                                printf("2) 10000Rwf(16GB)/30Days\n");
                                                                printf("3) 18000Rwf(30GB)/30Days\n");
                                                                int prest1e23;
                                                                scanf("%d",&prest1e23);
                                                                switch(prest1e23){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin7[75];
                                                                            scanf("%s",&prestpin7);
                                                                            system("cls||clear");
                                                                            printf("You bought 5000Rwf(7GB)/30Days\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin8[5];
                                                                            scanf("%s",&prestpin8);
                                                                            system("cls||clear");
                                                                            printf("You bought 10000Rwf(16GB)/30Days\n");
                                                                    break;
                                                                    case 3:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin9[5];
                                                                            scanf("%s",&prestpin9);
                                                                            system("cls||clear");
                                                                            printf("You bought 18000Rwf(30GB)/30Days\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                       
                                                    }
                                            break;
                                            case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            break;
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
                                        }
                                break;
                                case 2:
                                       //prestige for others
                                        system("cls||clear");
                                        printf("Insert the receiver's number\n");
									    char numb6[12];
									    scanf("%s",&numb6);
                                        if ((strncmp(numb6, "078", 3) == 0 || strncmp(numb6, "079", 3) == 0) && strlen(numb6) == 10){
                                            system("cls||clear");
                                        printf("1) Prestige Pack Monthly\n");
                                        printf("2) Prestige(4G&3G)\n");
                                        printf("0) Back\n");
                                        int prest2;
                                        scanf("%d",&prest2);
                                        switch(prest2){
                                            case 1:
                                                    system("cls||clear");
                                                    printf("1) 5000Frw(500min+1.5GB+200SMS)\n");
                                                    printf("2) 10000Frw(1100min+5GB+200SMS)\n");
                                                    printf("3) 20000Frw(2500min+15GB+200SMS)\n");
                                                    printf("4) 50000Frw(7500min+40GB+200SMS)\n");
                                                    int prest2e1;
                                                    scanf("%d",&prest2e1);
                                                    switch(prest2e1){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("Enter PIN:\n");
                                                                char prestpin11[5];
                                                                scanf("%s",&prestpin11);
                                                                system("cls||clear");
                                                                printf("You bought 5000Frw(500min+1.5GB+200SMS)\n");
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("Enter PIN:\n");
                                                                char prestpin21[5];
                                                                scanf("%s",&prestpin21);
                                                                system("cls||clear");
                                                                printf("You bought 10000Frw(1100min+5GB+200SMS)\n");
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("Enter PIN:\n");
                                                                char prestpin31[5];
                                                                scanf("%s",&prestpin31);
                                                                system("cls||clear");
                                                                printf("You bought 20000Frw(2500min+15GB+200SMS)\n");
                                                        break;
                                                        case 4:
                                                                system("cls||clear");
                                                                printf("Enter PIN:\n");
                                                                char prestpin41[5];
                                                                scanf("%s",&prestpin41);
                                                                system("cls||clear");
                                                                printf("You bought 50000Frw(7500min+40GB+200SMS)\n");
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                    }
                                            break;
                                            case 2:
                                                    system("cls||clear");
                                                    printf("1) Prestige Daily(4G&3G)\n");
                                                    printf("2) Prestige(4G&3G) Weekly\n");
                                                    printf("3) Prestige(4G&3G) Monthly\n");
                                                    int prest2e2;
                                                    scanf("%d",&prest2e2);
                                                    switch(prest2e2){
                                                        case 1:
                                                                system("cls||clear");
                                                                printf("1) 1000Frw(1GB)\n");
                                                                int prest2e21;
                                                                scanf("%d",&prest2e21);
                                                                switch(prest2e21){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin51[5];
                                                                            scanf("%s",&prestpin51);
                                                                            system("cls||clear");
                                                                            printf("You bought 1000Frw(1GB)\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 2:
                                                                system("cls||clear");
                                                                printf("1) 5000Frw(5GB)/7Days\n");
                                                                int prest2e22;
                                                                scanf("%d",&prest2e22);
                                                                switch(prest2e22){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin61[5];
                                                                            scanf("%s",&prestpin61);
                                                                            system("cls||clear");
                                                                            printf("You bought 5000Frw(5GB)/7Days\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        case 3:
                                                                system("cls||clear");
                                                                printf("1) 5000Rwf(7GB)/30Days\n");
                                                                printf("2) 10000Rwf(16GB)/30Days\n");
                                                                printf("3) 18000Rwf(30GB)/30Days\n");
                                                                int prest2e23;
                                                                scanf("%d",&prest2e23);
                                                                switch(prest2e23){
                                                                    case 1:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin71[75];
                                                                            scanf("%s",&prestpin71);
                                                                            system("cls||clear");
                                                                            printf("You bought 5000Rwf(7GB)/30Days\n");
                                                                    break;
                                                                    case 2:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin81[5];
                                                                            scanf("%s",&prestpin81);
                                                                            system("cls||clear");
                                                                            printf("You bought 10000Rwf(16GB)/30Days\n");
                                                                    break;
                                                                    case 3:
                                                                            system("cls||clear");
                                                                            printf("Enter PIN:\n");
                                                                            char prestpin91[5];
                                                                            scanf("%s",&prestpin91);
                                                                            system("cls||clear");
                                                                            printf("You bought 18000Rwf(30GB)/30Days\n");
                                                                    break;
                                                                    default:
                                                                            system("cls||clear");
                                                                            printf("Your choice was incorrect. Please try again.\n");
                                                                }
                                                        break;
                                                        default:
                                                                system("cls||clear");
                                                                printf("Your choice was incorrect. Please try again.\n");
                                                       
                                                    }
                                            break;
                                            case 0:         
                	                                system("cls||clear");
                                                    printf("Going back to the main menu.\n");
                                                    goBackToMenu(displayMenu);
                                            break;
                                            default:
                                                    system("cls||clear");
                                                    printf("Your choice was incorrect. Please try again.\n");
                                        }
                                        }
                                        else {
                                            // Invalid recipient number
                                        system("cls||clear");
                                        printf("Invalid Mobile number\n");
                                        }
                                        
                                break;
                                default:
                                        system("cls||clear");
                                        printf("Your choice was incorrect. Please try again.\n");

                            }
                	break;        
					case 0:         
                	        system("cls||clear");
                            printf("Going back to the main menu.\n");
                            goBackToMenu(displayMenu);
                    break;
                    default:
                            system("cls||clear");
                            printf("Your choice was incorrect. Please try again.\n");
				}
            break;
            case 2:
            	//############Electricity#################
                system("cls||clear");
                printf("1) Cash power \n");
                printf("0) Back \n");
                int subChoice2E2;
                scanf("%d",&subChoice2E2);
                switch(subChoice2E2){
            	    case 1:
            		        system("cls||clear");
            		        printf("Select Meter\n");
            		        printf("1) type other number\n");
            		        printf("0) Back\n");
            		break;
					case 0:         
                	        system("cls||clear");
                            printf("Going back to the main menu.\n");
                            goBackToMenu(displayMenu);
                    break;
                    default:
                            system("cls||clear");
                            printf("Your choice was incorrect. Please try again.\n");
                         
			    }
            break;
            case 3:
            	//#######Pay Services#############
                system("cls||clear");
                printf("Enter code \n");
                int subChoice2E3;
                scanf("%d",&subChoice2E3);
                system("cls||clear");
                printf("Enter Account Number\n");
            break;
            case 4:
            	//######Solar####################
                system("cls||clear");
                printf("1) MySol\n");
                printf("2) Bboxx\n");
                printf("3) Ignite\n");
                printf("4) Mesh Power\n");
                printf("5) SolarStartimes\n");
                printf("0) Back\n");
                int subChoice2E4;
                scanf("%d",&subChoice2E4);
                switch(subChoice2E4){
            	    case 1:
            		        system("cls||clear");
            		        printf("Enter Account Number\n");
            		break;
            		case 2:
            			    system("cls||clear");
            		        printf("Injiza numero ya konti urugendo.\nXXXXXXXX\n");
            		break;
            		case 3:
            		        system("cls||clear");
            		        printf("Enter Account Number\n");
            		break;
            		case 4:
            		        system("cls||clear");
            		        printf("Enter Account Number\n");
            		break;
            		case 5:
            		        system("cls||clear");
            		        printf("Enter Smart Card Number\n");
            		break;
					case 0:         
                	        system("cls||clear");
                            printf("Going back to the main menu.\n");
                            goBackToMenu(displayMenu);
                    break;
                    default:
                            system("cls||clear");
                            printf("Your choice was incorrect. Please try again.\n");
                             
			    }
            break;
            case 5:
            	//########Pay Transport Fare###########
                system("cls||clear");
                printf("Andika Kode y'urugendo/Enter Route Number\n");
            break;
            case 6:
            	//########Online Shopping Card#########
                system("cls||clear");
                printf("Enter PIN\n");
            break;
            case 0:
                system("cls||clear");
                printf("Going back to the main menu.\n");
                goBackToMenu(displayMenu);
            break;
            default:
                system("cls||clear");
                printf("Your choice was incorrect. Please try again.\n");
                     
        }
    	
    }
	
	// Pay bill 1 ****************************************************************************************************************************************************
void payBill1()
{
    system("cls||clear");
    printf("1) Startimes\n");
    printf("2) DSTV\n");
    printf("3) AZAMTV\n");
    printf("4) Canal+\n");
    printf("5) Exit\n");
    printf("0) Back\n");

    int choice31;
    scanf("%d", &choice31);

    switch (choice31)
    {
    case 1:
        // Startimes
        system("cls||clear");
        printf("Enter smart card number\n");
        char cardNumber[5];
        scanf("%s", cardNumber);

        if (strlen(cardNumber) < 5)
        {
            printf("Could not perform the transaction. Please call customer care for assistance.\n");
        }
        else if (strlen(cardNumber) == 5)
        {
            system("cls||clear");
            int pin;
            printf("Enter PIN: \n");
            scanf("%d", &pin);
            if (pin == 12345)
            {
                system("cls||clear");
                printf("Startimes bill payed successfully!\n");
            }
            else
            {
                printf("Invalid PIN or you are not authorized to perform this action\n");
            }
        }
        break;
    case 2:
        // DSTV
        system("cls||clear");
        printf("Select Bouquet:\n");
        printf("1) Isange (Access) - 5000.00 RWF\n");
        printf("2) Iwacu (Family) - 10000.00 RWF\n");
        printf("3) Inganji (Compact) - 20000 RWF\n");
        printf("4) Ishema (Compact+) - 30000 RWF\n");
        printf("5) Premium EA - 100000 RWF\n");
        printf("6) Addon French Plus - 37000 RWF\n");
        printf("7) Premium EA+Asia - 126000 RWF\n");
        printf("8) Asia - 45900 RWF\n");
        printf("9) Francais Anglais - 139000 RWF\n");
        printf("0) Back\n");

        int choice32;
        scanf("%d", &choice32);

        switch (choice32)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            system("cls||clear");
            printf("Enter Card number\n");
            char cardNumber[5];
            scanf("%s", cardNumber);

            if (strlen(cardNumber) != 5)
            {
                printf("Could not perform the transaction. Please call customer care for assistance.\n");
            }
            else if (strlen(cardNumber) == 5)
            {
                system("cls||clear");

                int pin;
                printf("Enter PIN: \n");
                scanf("%d", &pin);

                if (pin == 12345)
                {
                    system("cls||clear");
                    printf("DSTV bill payed successfully!\n");
                }
                else
                {
                    printf("Invalid PIN or you are not authorized to perform this action\n");
                }
            }
            break;
        case 0:
            system("cls||clear");
            goBackToMenu(payBill1);
            break;
        default:
            printf("An error Occured. Please try again.\n");
            break;
        }
    case 3:
        system("cls||clear");
        printf("Could not perform the transaction. Please call customer care for assistance.\n");
        break;
    case 4:
        system("cls||clear");
        printf("Langue/language/Ururimi\n");
        printf("1.Francais\n");
        printf("2.English\n");
        printf("3.Kinyarwnda\n");

        int choice314;
        scanf("%d", &choice314);
        switch (choice314)
        {
        case 1:
            system("cls||clear");
            printf("1.Reconduire mon abonnement actuel\n");
            printf("2.Changer d'offre\n");
            printf("3.Memoriser la carte\n");

            int choice3141;
            scanf("%d", &choice3141);

            switch (choice3141)
            {
            case 1:
            case 2:
            case 3:
                system("cls||clear");
                printf("Veuillez entrer voret numero d'abonnement\n");

                char resubNumber[10];
                scanf("%s", resubNumber);

                if (strlen(resubNumber) != 10)
                {
                    printf("Unkwown smartcard \n");
                }
                else if (strlen(resubNumber) == 10)
                {
                    system("cls||clear");
                    printf("Abonnement complet sur: %s!\n", resubNumber);
                }
                break;
            }

            break;
        case 2:
            system("cls||clear");
            printf("1.Resubscription\n");
            printf("2.Change offer\n");
            printf("3.Id memorization\n");

            int choice31411;
            scanf("%d", &choice31411);

            switch (choice31411)
            {
            case 1:
            case 2:
            case 3:
                system("cls||clear");
                printf("Enter the resubscription number\n");

                char resubNumber[10];
                scanf("%s", resubNumber);

                if (strlen(resubNumber) != 10)
                {
                    printf("Resubscription failed. Number provided is incorrect. Please check the number and try again.\n");
                }
                else if (strlen(resubNumber) == 10)
                {
                    system("cls||clear");
                    printf("You have an new resubscription number: %s!\n", resubNumber);
                }
                break;
            }

            break;
        case 3:
            system("cls||clear");
            printf("1.Kongera ifatabuguzi\n");
            printf("2.Guhidra ifatabuguzi\n");
            printf("3. Numero ya dekoderi\n");

            int choice31412;
            scanf("%d", &choice31412);

            switch (choice31412)
            {
            case 1:
            case 2:
            case 3:
                system("cls||clear");
                printf("Shyiramo numero y'ifatabuguzi\n");

                char resubNumber[10];
                scanf("%s", resubNumber);

                if (strlen(resubNumber) != 10)
                {
                    printf("Kongera ifatabuguzi ntibyakunze.\n");
                }
                else if (strlen(resubNumber) == 10)
                {
                    system("cls||clear");
                    printf("You have an new resubscription number: %s!\n", resubNumber);
                }
                break;
            }

            break;
        default:
            printf("An error occured. Please try again.\n");
            break;
        }
    case 5:
        system("cls||clear");
        printf("Thank you for using Mobile Money\n");
        break;
    case 0:
        system("cls||clear");
        goBackToMenu(payBill);
    default:
        printf("An error occured. Please try again.\n");
        break;
    }
};  
            
    void payBill()
{
    system("cls||clear");
    printf("1) Pay Tv\n");
    printf("2) Postpaid Bill\n");
    printf("3) Pay Psf\n");
    printf("4) Pay Yego\n");
    printf("5) Water\n");
    printf("6) Rwanda Revenue\n");
    printf("7) Irembo Services\n");
    printf("8) Airport Parking\n");
    printf("9) Business\n");
    printf("10) School\n");
    printf("11) Security n Hygiene\n");
    printf("12) Exit\n");
    printf("0) Back\n");

    int choice3;
    scanf("%d", &choice3);

    switch (choice3)
    {
    case 1:
        payBill1();
    case 2:
        system("cls||clear");
        printf("Enter Account\n");

        char accNumber[10];
        scanf("%s", &accNumber);

        if (strlen(accNumber) > 5)
        {
            system("cls||clear");
            printf("Enter mobile number\n");
            char mobileNumber[10];
            scanf("%s", &mobileNumber);
            if (strlen(mobileNumber) == 10)
            {
                system("cls||clear");
                printf("Enter amount: \n");
                double amount;
                scanf("%lf", &amount);
                system("cls||clear");
                int pin;
                printf("To confirm Bill amount payment. Enter PIN: \n");
                scanf("%d", &pin);
                if (pin == 12345)
                {
                    printf("Successfully postpaid a rwf%.2lf Bill on %s!\n", amount, mobileNumber);
                }
                else
                {
                    printf("Invalid PIN or you are not authorized to perform this action\n");
                }
            }
        }
        else
        {
            printf("Purchase has failed. Number provided is incorrect. Please check the number and try again.\n");
        }
        break;
    case 3:
        printf("External Application down\n");
        break;
    case 4:
        system("cls||clear");
        printf(" Enter trip ID\n");

        char tripId[10];
        scanf("%s", &tripId);

        if (strlen(tripId) > 5)
        {
            system("cls||clear");
            printf("Enter mobile number\n");
            char mobileNumber[10];
            scanf("%s", &mobileNumber);
            if (strlen(mobileNumber) == 10)
            {
                system("cls||clear");
                printf("Enter amount: \n");
                double amount;
                scanf("%lf", &amount);
                system("cls||clear");
                int pin;
                printf("To confirm Bill amount payment. Enter PIN: \n");
                scanf("%d", &pin);
                if (pin == 12345)
                {
                    printf("Successfully postpaid a rwf%.2lf Bill on %s!\n", amount, mobileNumber);
                }
                else
                {
                    printf("Invalid PIN or you are not authorized to perform this action\n");
                }
            }
        }
        else
        {
            printf("Purchase has failed. The provided trip ID is incorrect. Please check the number and try again.\n");
        }

        break;
    case 5:
        system("cls||clear");
        printf("Enter Account number\n");

        char accNumber1[16];
        scanf("%s", &accNumber1);

        if (strlen(accNumber1) > 5)
        {
            system("cls||clear");
            printf("Enter MTN mobile number\n");
            char mobileNumber[10];
            scanf("%s", &mobileNumber);
            if (strlen(mobileNumber) == 10)
            {
                system("cls||clear");
                printf("Enter amount: \n");
                double amount;
                scanf("%lf", &amount);
                system("cls||clear");
                int pin;
                printf("To confirm water Bill amount payment. Enter PIN: \n");
                scanf("%d", &pin);
                if (pin == 12345)
                {
                    printf("Successfully paid water bill rwf%.2lf Bill on %s!\n", amount, mobileNumber);
                }
                else
                {
                    printf("Invalid PIN or you are not authorized to perform this action\n");
                }
            }
        }
        else
        {
            printf("Purchase has failed. Number provided is incorrect. Please check the number and try again.\n");
        }
        break;
    case 6:
        system("cls||clear");
        printf("Enter RRA Reference No:\n");

        char refNo[10];
        scanf("%s", &refNo);

        if (strlen(refNo) > 5)
        {
            system("cls||clear");
            printf("Enter mobile number\n");
            char mobileNumber[10];
            scanf("%s", &mobileNumber);
            if (strlen(mobileNumber) == 10)
            {
                system("cls||clear");
                printf("Enter amount: \n");
                double amount;
                scanf("%lf", &amount);
                system("cls||clear");
                int pin;
                printf("To confirm Bill amount payment. Enter PIN: \n");
                scanf("%d", &pin);
                if (pin == 12345)
                {
                    printf("Successfully paid rwf%.2lf Bill on %s!\n", amount, mobileNumber);
                }
                else
                {
                    printf("Invalid PIN or you are not authorized to perform this action\n");
                }
            }
        }
        else
        {
            printf("Rwanda Revenue bill payment has failed. Number provided is incorrect. Please check the number and try again.\n");
        }

        break;
    case 7:
        system("cls||clear");
        printf("Bill ID\n");

        char billId[10];
        scanf("%s", &billId);

        if (strlen(billId) > 5)
        {
            system("cls||clear");
            int pin;
            printf("Enter PIN: \n");
            scanf("%d", &pin);
            if (pin == 12345)
            {
                printf("Successfully paid irembo services\n");
            }
            else
            {
                printf("Invalid PIN or you are not authorized to perform this action\n");
            }
        }
        else
        {
            printf("Failed to irembo services purchase.\n");
        }
        break;
    case 8:
        system("cls||clear");
        printf("WELCOME TO KIGALI INTERNATIONAL AIRPORT CAR PARKING\n");
        printf("1) English\n");
        printf("1) Kinyarwanda\n");

        int choice38;
        scanf("%d", &choice38);

        switch (choice38)
        {
        case 1:
            system("cls||clear");
            printf("WELCOME TO KIGALI INTERNATIONAL AIRPORT CAR PARKING\n");
            printf("1) Enter Ticket Number\n");

            char ticketNumber[10];
            scanf("%s", &ticketNumber);
            printf("Ticket Number %s You Entered Does Not Exist. Please Contact Kaps On 0709899000 For Assistance.\n");
        case 2:
            system("cls||clear");
            printf("WELCOME TO KIGALI INTERNATIONAL AIRPORT CAR PARKING\n");
            printf("1) Mushyiremo numero y'itike\n");

            char ticketNumber1[10];
            scanf("%s", &ticketNumber1);
            printf("Ticket Number %s You Entered Does Not Exist. Please Contact Kaps On 0709899000 For Assistance.\n");
        }

        break;
    case 9:
        system("cls||clear");
        system("Session Time Out\n");
        break;
    case 10:
        system("cls||clear");
        printf("1) Enter Student Code\n");
        printf("2) Enter School Code\n");
        printf("0) Back\n");

        int choice310;
        scanf("%d", &choice310);

        switch (choice310)
        {
        case 1:
            system("cls||clear");
            printf("Enter Student Code\n");
            char studentCode[10];
            scanf("%s", &studentCode);
            if (strlen(studentCode) > 5)
            {
                system("cls||clear");
                printf("Enter mobile number\n");
                char mobileNumber[10];
                scanf("%s", &mobileNumber);
                if (strlen(mobileNumber) == 10)
                {
                    system("cls||clear");
                    printf("Enter amount: \n");
                    double amount;
                    scanf("%lf", &amount);
                    system("cls||clear");
                    int pin;
                    printf("Enter PIN: \n");
                    scanf("%d", &pin);
                    if (pin == 12345)
                    {
                        system("cls||clear");
                        printf("Successfully paid school fees rwf%.2lf Bill on %s!\n", amount, mobileNumber);
                    }
                    else
                    {
                        system("cls||clear");
                        printf("Invalid PIN or you are not authorized to perform this action\n");
                    }
                }
            }
            else
            {
                system("cls||clear");
                printf("Unfortunately, this transaction could not be completed. We apologise for the inconvinience. Please call 100 for assistance.\n");
            }
            break;
        case 2:
            system("cls||clear");
            printf("Enter School Code\n");
            char schoolCode[10];
            scanf("%s", &schoolCode);
            if (strlen(schoolCode) > 5)
            {
                system("cls||clear");
                printf("Enter mobile number\n");
                char mobileNumber[10];
                scanf("%s", &mobileNumber);
                if (strlen(mobileNumber) == 10)
                {
                    system("cls||clear");
                    printf("Enter amount: \n");
                    double amount;
                    scanf("%lf", &amount);
                    system("cls||clear");
                    int pin;
                    printf("Enter PIN: \n");
                    scanf("%d", &pin);
                    if (pin == 12345)
                    {
                        printf("Successfully paid school fees rwf%.2lf Bill on %s!\n", amount, mobileNumber);
                    }
                    else
                    {
                        printf("Invalid PIN or you are not authorized to perform this action\n");
                    }
                }
            }
            else
            {
                printf("Unfortunately, this transaction could not be completed. We apologise for the inconvinience. Please call 100 for assistance.\n");
            }
            break;
        case 0:
            system("cls||clear");
            goBackToMenu(payBill);
            break;
        }
        break;
    case 11:
        system("cls||clear");
        printf("Mwamaze kwemeza amabwiriza ya MOMO.\n");
        break;
    case 12:
        system("cls||clear");
        break;
    case 0:
        system("cls||clear");
        goBackToMenu(displayMenu);
    }
}

    void bankServices() {
	    system("cls||clear");
            printf("1) ATM\n");
            printf("2) Send MoMo to Bank\n");
            printf("3) Get Money from Bank Account\n");
            printf("4) Check Account Balance\n");
            printf("5) Decline Bank Account\n");
            printf("0) Back\n");
            int choice, pin, account, amount;
                scanf("%d", &choice);
    system("cls||clear");

    switch (choice) {
        case 1:
            printf("TO Generate ATM Passcode, Enter MM PIN:");
            scanf("%d", &pin);
            if (pin == 123) {
                printf("You'll receive a message shortly with a passcode you can use for ATM withdrawal");
            } else {
                printf("Incorrect PIN, Try again");
            }
            break;

        case 2:
            system("cls||clear");
            printf("Kohereza amafaranga kuribank\n");
            printf("1)KCB\n");
            printf("2)IM Bank\n");
            printf("3)Bank of Kigali\n");
            printf("4)GT Bank\n");
            printf("5)Zigama\n");
            printf("6)Equity\n");
            printf("7)VisionFund Rwanda\n");
            printf("8)BPR Bank\n");
            printf("9)Unguka\n");
            printf("10)CogeBank\n");
            printf("11)Other Banks\n");
            printf("12)exit\n");
            printf("Make a choice:");
            scanf("%d", &choice);

            if (choice == 12) {
                exit(0);  
            } else if (choice >= 1 && choice <= 11) {
                printf("Enter your PIN:\n");
                scanf("%d", &pin);

                if (pin == 123) {
                    system("cls||clear");
                    printf("Enter your account:\n");
                    scanf("%d", &account);
                    printf("Enter amount:\n");
                    scanf("%d", &amount);
                    printf("Wohereje amafaranga kuri bank tegereza ubutumwa\n");
                } else {
                    printf("Incorrect PIN, Try again\n");
                }
            }
            system("cls");
            break;

        case 3:
            system("cls||clear");
            printf("kuvana amafaranga kuri bank\n");
             printf("1)KCB\n");
            printf("2)IM Bank\n");
            printf("3)Bank of Kigali\n");
            printf("4)GT Bank\n");
            printf("5)Zigama\n");
            printf("6)Equity\n");
            printf("7)VisionFund Rwanda\n");
            printf("8)BPR Bank\n");
            printf("9)Unguka\n");
            printf("10)CogeBank\n");
            printf("11)Other Banks\n");
            printf("12)exit\n");
            printf("Make a choice:");
            scanf("%d", &choice);

            if (choice == 12) {
                exit(0);  // Exit the program
            } else if (choice >= 1 && choice <= 11) {
                printf("Enter your PIN:\n");
                scanf("%d", &pin);

                if (pin == 123) {
                    system("cls||clear");
                      	system("cls||clear");
                        printf("Enter your account:\n");
                        scanf("%d", &account);
                        printf("Enter amount:\n");
                        scanf("%d", &amount);
                        printf("waiting message after withdraw\n",account,amount);
                } else {
                    printf("Incorrect PIN, Try again\n");
                }
            }
            
            break;

        case 4:
            system("cls||clear");
            printf("kureba amafaranga usigaranye \n");
               
             printf("1)KCB\n");
            printf("2)IM Bank\n");
            printf("3)Bank of Kigali\n");
            printf("4)GT Bank\n");
            printf("5)Zigama\n");
            printf("6)Equity\n");
            printf("7)VisionFund Rwanda\n");
            printf("8)BPR Bank\n");
            printf("9)Unguka\n");
            printf("10)CogeBank\n");
            printf("11)Other Banks\n");
            printf("12)exit\n");
            printf("Make a choice:");
            scanf("%d", &choice);

            if (choice == 12) {
                exit(0);  
            } else if (choice >= 1 && choice <= 11) {
                printf("Enter your PIN:\n");
                scanf("%d", &pin);

                if (pin == 123) {
                    system("cls||clear");
                      	system("cls||clear");
                        printf("Enter your account:\n");
                        scanf("%d", &account);
                        printf("Enter amount:\n");
                        scanf("%d", &amount);
                        printf("looking for balance waiting message\n",account,amount);
                        printf("your balance is 1RWF. Thank you for using mobile money\n");
    
                } else {
                    printf("Incorrect PIN, Try again\n");
            break;

        case 5:
            system("cls||clear");
            printf("DELINK THE BANK\n");
            system("cls||clear");

            printf("1)KCB\n");
            printf("2)IM Bank\n");
            printf("3)Bank of Kigali\n");
            printf("4)GT Bank\n");
            printf("5)Zigama\n");
            printf("6)Equity\n");
            printf("7)VisionFund Rwanda\n");
            printf("8)BPR Bank\n");
            printf("9)Unguka\n");
            printf("10)CogeBank\n");
            printf("11)Other Banks\n");
            printf("12)exit\n");
            printf("Make a choice:");
            scanf("%d", &choice);

            if (choice == 12) {
                exit(0);  // Exit the program
            } else if (choice >= 1 && choice <= 11) {
                printf("Enter your PIN:\n");
                scanf("%d", &pin);

                if (pin == 123) {
                    system("cls||clear");
                    
                    printf("Your phone is delinked from your bank account\n");
                } else {
                    printf("Incorrect PIN, you cannot delink the account\n");
                }
            }
            break;
            case 0:
                system("cls||clear");
			    printf("Going back to the main menu.\n");
            	goBackToMenu(displayMenu);
            	break;
        default:
            printf("invalid choices");
            break;
    }
    break;
    }
    }
    }
    void loansandSavings() {
	    system("cls||clear");
	        printf("1) Mokash\n");
	        printf("2) STAFF\n");
	        printf("3) KCB\n");
	        printf("0) Back\n");
            int choose;
            scanf("%d",&choose);
switch  (choose){
case 1:
  // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
char pin[5];
printf("Enter pin\t");
scanf("%s",&pin);

if(strlen(pin) == 5){
  // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
printf("Your now on Mokash");
}
else{
printf("invalid pin");
}
break;
case 2:
  // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
printf("only Staff allowed ");
break;
case 3:
  // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
printf("Your not authorized to access menu");
break;
case 0:
	  // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
displayMenu();
break;
default:
  // Clear the console screen before displaying the sub-menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
printf("invalid details");
}
    }
    
    
    
void myMomoAccount(){
	    system("cls||clear");
	    menu:
	        printf("1) Check Balance\n");
	        printf("2) Mini Statement\n");
	        printf("3) Get Latest Electricity Token\n");
	        printf("4) Preapprove Transactions\n");
            printf("5) Change language\n");
	        printf("6) My Offers\n");
	        printf("7) Exit\n");
	        printf("0) Back\n");
	        
	        int subOption;
	        printf("enter your choice:");
	        scanf("%d",&subOption);
	        switch(subOption){
	        	case 1:{	
	        	    
	        	       system("cls||clear");
	        		printf("To confirm to get balance, Enter MM Pin");
	        		const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("Your balance is xxxxx RWF and welcome\n account balance is xxxx\n Thank you using mobile money");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
					break;
				}
			}
			case 2:{
				system("cls||clear");
	        		printf("To confirm for Mini-stateement, Enter MM Pin");
	        		const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("MIni-statement\n you have transfered xxxxxRWF\n receiver:078xxxxxxx\nsender:078xxxxxxx\nThank you using mobile money");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
				break;
			}
			}
			case 3:{
				system("cls||clear");
				char electricityMeter[14];
				printf("Electricity mete number");
				scanf("%s",&electricityMeter);
				if (strlen(electricityMeter) == 13) {
                    printf("Electricity meter number: %s\n", electricityMeter);
                    // Perform further actions with the electricity meter number
                } else {
                    printf("Invalid electricity meter number length\n");
                }
				system("cls||clear");
	        		printf("To confirm, Enter MM Pin");
	        		const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("Transaction is being processsed a\nconfirmation will be sent to you\nshortly");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
				break;
			}
		}
		case 4:{
			system("cls||clear");
	        		printf("To confirm for Mini-stateement, Enter MM Pin");
	        		const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("internal Error");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
			break;
		}
	  }
	  case 5:{
	  	system("cls||clear");
	  	int subOption;
	  	printf("1.EN\n");
	  	printf("2.KIN\n");
	  	printf("0.back\n");
	  	scanf("%d",&subOption);
	  	   
	  	    switch(subOption){
			 
	  	    case 1:
	  	   	case 2:{
				 system("cls||clear");	
	  	   		printf("Your language has been\nchanged successfully:)");
					break;
				 }
				 case 0:{
				 	system("cls||clear");
				 	goto menu;
					break;
				 }
		break;
     	}
	  }
	  case 6:{
	  	system("cls||clear");
	  	int subOption;
	  	printf("1.Recharge & Get\n");
	  	printf("2.Voice Bundles\n");
	  	printf("3.Internet Bundles\n");
	  	printf("0.back\n");
	  	scanf("%d",&subOption);
	  	   
	  	    switch(subOption){
			 
	  	    case 1:
	  	   	case 2:
			case 3:	 {
				 system("cls||clear");	
	  	   		printf("no avalaible choice");
					break;
				 }
				 case 0:{
				 	system("cls||clear");
				 		goto menu;
					break;
				 }
		break;
	  }
     }
     case 7:{
     	system("cls||clear");
     	printf("Thank you for using mobile money");
		break;
}
	case 0:{
	
	 	system("cls||clear");
                printf("Going back to the main menu.\n");
                goBackToMenu(displayMenu);
		break;
	}
	}
}
	        
void pendingApprovals() {
  	    system("cls||clear");
  	    menu2:
  	        printf("Pending Approvals\n");
	        printf("1) Cashout Approval\n");
	        printf("2) Allow Cash Out\n");
	        printf("3) Request a Reversal\n");
	        printf("4) Approve or Decline a Reversal\n");
	        printf("0) Back\n");
	        int choice2;
	printf("enter your choice:\n");
    scanf("%d",&choice2);

    switch(choice2)
    {
    case 1:{
		
        system("cls||clear");
        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("you don't have any pending approval");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
        break;
}
break;
}
    case 2:{
        system("cls||clear");
          system("cls||clear");
        const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("you are allowed to cash out in 3 minutes");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
        break;
}
break;  
 }
    case 3:{
	
	
        system("cls||clear");
        printf("Request a reversal\n");
        printf("1) Request a reversal\n");
        printf("2) Cancel a requested reversal\n");
        printf("0) Back\n");
        int subOption;
        printf("enter your choice\n");
        scanf("%d",&subOption);
        switch(subOption){
		
        case 1:
        	{
        		system("cls||clear");
        		  const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("no transaction found");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
        break;
    }
break;  
		}
		case 2:
			{
			system("cls||clear");
			  const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("canccel a requested reversal");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
        break;
}
break;
   }
   case 0:
   	system("cls||clear");
   	goto menu2;
   	break;
    }
    break;
}
    case 4:
    	{
		
        system("cls||clear");
        printf("Approve or decline a reversal request\n");
        printf("1) Approve reversal requests\n");
        printf("2) Decline reversal requests\n");
        printf("0) Back\n");
        int subOption1;
        printf("enter your choice");
        scanf("%d",&subOption1);
        switch(subOption1){
        	case 1:{
        		system("cls||clear");
        		const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("no recent reversible transaction");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
        break;
}
break;
				}
				case 2:{
					const char fixedPin[6]="02468";
                        char enteredPin[6];
                        printf("Enter the pin:\n");
                        scanf("%s",&enteredPin); if (strcmp(enteredPin, fixedPin) == 0) {
                        printf("Correct PIN\n");
                          system("cls||clear");
                        printf("decline reversal request");
                       } else {
                       	                                                         // Clear the console screen before displaying the prompt
                        system("cls||clear");	                                                         
                        printf("invalid Pin or you are not authorized\n to perform this action\n");
        break;
    }
              break;
				}		
				break;
				case 0: {
					system("cls||clear");
					goto menu2;
					break;
				}
			}
		}
		break;
		case 0:{
			system("cls||clear");
                printf("Going back to the main menu.\n");
                goBackToMenu(displayMenu);
			break;
		}
    }
   }
    void momoPay() {
	    system("cls||clear");
	        printf("1) Enter MoMoPay Code\n");
	        printf("2) Pay with a reason\n");
	        printf("3) Register As Merchant\n");
            int subOption;
			printf("enter your choice:\n");
			scanf("%d",&subOption);
			switch(subOption) {
            case 1:{
            system("cls||clear");
            char momopaypin[5];
            printf("Enter PIN:\n");
            scanf("%s", momopaypin);
            if (strcmp(momopaypin, "12345") == 0)
            {
            printf("Complete\n");
            }
            else
           {
            printf("Invalid pin");
            }
            break;
        }
        case 2:{
        	 system("cls||clear");
        	char momopaypin[5];
            printf("Enter PIN:\n");
            scanf("%s", momopaypin);
            if (strcmp(momopaypin, "12345") == 0)
            {
            printf("Complete\n");
            }
            else
           {
            printf("Invalid pin");
            }
			break;
		}
		case 3:{
			 system("cls||clear");
			char momopaypin[5];
            printf("Enter PIN:\n");
            scanf("%s", momopaypin);
            if (strcmp(momopaypin, "12345") == 0)
            {
            printf("Complete\n");
            }
            else
           {
            printf("Invalid pin");
            }
			break;
		}
    }
}
    void myMomosecurity() { 
        system("cls||clear");
	        printf("1) Reset PIN\n");
	        printf("2) Change PIN\n");
	        printf("3) Self PIN Reset\n");
	        printf("4) Exit\n");
	        printf("0) Back\n");
	        
	        
	       int choice9;
        scanf("%d",&choice9);
	
	switch(choice9) {
		case 1:
			 system("cls||clear");
			printf("please call customer care for PIN reset");
			
		break;
		case 2:
			 system("cls||clear");
			printf("enter old PIN:");
			int oldpin;
			scanf("%d",&oldpin);
			if (oldpin==12345){
				int newpin;
				printf("enter in the new PIN:");
				scanf("%d",&newpin);
				printf("PIN changed successfuly!");
				
			}
			else{
				printf("incorrect PIN");
			}
		break;
		case 3:
			 system("cls||clear");
			printf("1)MM PIN reset\n");
			printf("2)Add Recovery Number\n");
			printf("3)View Recovery Number\n");
			printf("0)back\n");
		
		int option1;
		
		 scanf("%d",&option1);
		 system("cls||clear");   
         switch (option1) {
	     
	    case 1:	printf("you don't have registered recovery number.\n");
	    printf("1)Register Recovery Number\n");
	    
	    
		break;
	}
	
	break;
	
	
		case 4:
			 system("cls||clear");
			printf("Thank you for using Mobile Money");
		break;
		case 0:
			 system("cls||clear");
			 printf("Going back to the main menu.\n");
                goBackToMenu(displayMenu);
		 break;
         default:
                system("cls||clear");
                printf("Your choice was incorrect. Please try again.\n");

	}    
	    
    }
	void insurance() {
	    
		system("cls||clear");
	        printf("1) Radiant Yacu\n");
	        	printf("2) Prime Insurance\n");
	        		printf("3) Ineza\n");
	       				 printf("4) UAP\n");
	        				printf("5) SANLAM\n");
	        					printf("0) Back\n");
	        
	        
	      
	    int choice10;
        scanf("%d",&choice10);
	
	switch(choice10) {
		 
	      //START OF CODE FOR RADIANT YACU CASE1
		case 1:
			 system("cls||clear");
				printf("Ikaze muri RADIANT YACU\n");
					printf("1.Kuzigama\n");
					printf("2.Turikumwe yawe\n");
						printf("3.Turikumwe y'umuryago\n");
							printf("4.amategeko namabwiriza yo KUZIGAMA\n");
								printf("5.SANLAM\n");
									printf("6.gusohoka\n");
			
		int option1;
		
		 scanf("%d",&option1);
		 system("cls||clear");   
         switch (option1) {
	     
	    case 1:
		
	    printf("Gutangira gukoresha iyi service urabanza ukiyandikisha.\n");
	    
		printf("andika nimero y'indangamuntu yawe:");
		
	    
		int id;
	    
		scanf("%d",&id);
		
    printf("murakoze kwiyandikisha muri radiant yacu!");
	
	
			
		break;
	    
		case 2:
		
	    printf("Gutangira gukoresha iyi service urabanza ukiyandikisha.\n");
	    
		printf("andika nimero y'indangamuntu yawe:");
		
	    
		int id2;
	    
		scanf("%d",&id2); 
		
    printf("murakoze kwiyandikisha muri radiant yacu!");
    break;
    
    case 3:
    	
    	
	printf("Gutangira gukoresha iyi service urabanza ukiyandikisha.\n");
	    
		printf("andika nimero y'indangamuntu yawe:");
		
	    
		int id3;
	    
		scanf("%d",&id3);
		
    printf("murakoze kwiyandikisha muri radiant yacu!");
	
			
		break;
	
		case 4:
			
		printf("Amategeko n'amabwiriza yo KWIZIGAMA.\n\n");
	    
		printf("https://radiantyacu.rw/saving-terms-conditions\n");
		break;
		}
		
		break;
		 
	      //END OF CODE FOR RADIANT YACU 
	
	
	//START OF CODE FOR INSURANCE CASE 2
		case 2:
	
			 system("cls||clear");
			 printf("PRIME LIFE & PRIME GEN.:\n");
			printf("1)ubuzima no Kwizigamira\n");
			printf("2)Motor(ibinyabiziga)\n");
			printf("3)Medical insurance(kwivuza)\n");
			printf("4)umurage w'amashuri\n");
			
			int option2;
			scanf("%d",&option2);
			switch(option2){
			
			//CODE FOR PRIME LIFE AND INSURANCE
			case 1:
					 system("cls||clear");
				printf("PRIME LIFE INSURANCE\n");
				  printf("1)Ikimina cyacu\n");
				    printf("2)Amashuri y'abana\n");
				      printf("3)Kwizigamira\n");
				      	printf("4)Umuryango\n");
						printf("5)Ubwishingizi bw'umukozi\n");
							printf("6)Nkunganire\n");
								printf("0)Gusubira inyuma\n");
								
			int suboption2_1;	
			scanf("%d",&suboption2_1);
			system("cls||clear");
			switch(suboption2_1){
				 
	      //START OF CODE FOR IKIMINA CYACU
			case 1:
				printf("1)Kwiyandikisha\n");
					printf("2)Kwizigamira\n");
						printf("3)Kubikuza\n");
							printf("4)Kureba ayo ugejejemo\n");
							printf("0)Gusubira inyuma\n");
							break;				
						}
						
			int suboption2_1_1;
			scanf("%d",&suboption2_1_1);
			system("cls||clear");
			switch(suboption2_1_1){
				case 1:
					printf("andika nimero y'indandamuntu yawe:");
					int id;
					scanf("%d",&id);
					printf("Urakoze kwiyandikisha mu kimina cyacu!");
					break;
					
					case2:
						printf("KWIZIGAMIRA");
					
					printf("1)Kwishyura");
					printf("2)Gusesa igice");
					printf("0)gusubira inyuma");
					
					break;
						
			}
						
						
				break;
				
				case 2:
					system("cls||clear");
					int suboption2_2;	
			scanf("%d",&suboption2_2);
				printf("1)AMASHURI Y'ABANA'");
					printf("2)Kwishyura");
						printf("3)Kureba ubwizigame");
							printf("0)Gusubira inyuma");				
								
						 system("cls||clear");
					printf("MOTOR(ibinyabiziga)\n");
						printf("1)Ikinyarwanda\n");
							printf("2)English\n");
								printf("0)back(Gusubira inyuma)\n");	
								int suboption2_2_1;
		
			scanf("%d",&suboption2_2_1);
			system("cls||clear");
			switch(suboption2_2_1){
				case 1:
					
					printf(":");
					int id;
					scanf("%d",&id);
					printf("");
				}
				
				break;
								
				case 3:
						 system("cls||clear");
					printf("Medical(Kwivuza)\n");
						printf("1)ikinyarwanda\n");
							printf("2)English\n");
								printf("0)Back\n");
								
								/*	scanf("%d",&suboption2_1_2);
			system("cls||clear");
			switch(suboption2_1_2){
				case 1:
					printf(":");
					int id;
					scanf("%d",&id);
					printf("");
					break;*/
				
				break;
										
				case 4:
			
						 system("cls||clear");
					printf("UMURAGE W'AMASHURI\n");
						printf("1)Kwiyandikisha\n");
							printf("2)Kwizigamira\n");
								printf("3)Kubikuzaho\n");
									printf("4)Kureba ayo ugejejemo\n");
										printf("Gutanga umusigire\n");
										 printf("0)Gusubira inyuma\n");
										 /*	scanf("%d",&suboption2_1_2);
			system("cls||clear");
			switch(suboption2_1_2){
				case 1:
					printf(":");
					int id;
					scanf("%d",&id);
					printf("");
					break;*/
			
				break;										
			}
	
		
		break;
	
	//START OF CODE FOR	INEZA	
	case 3:
		system("cls||clear");
		printf("enter mobile money PIN to confirm registation for INEZA services.\n");
		int PIN;
		scanf("%d",&PIN);
		if(PIN==12345){
			printf("you have successfully registered for INEZA services!");
		}
		else {
			printf("incorrect PIN try again.");
		}
			
	break;		
	//END OF CODE FOR INEZA
	
	
	
	//START OF UAP CODE
	case 4:
		system("cls||clear");
		printf("not available");	
	break;
	//END OF UAP CODE	
	
	
	
	//START OF CODE FOR SANILAM
	case 5:
		system("cls||clear");
	printf("Murakaza nezaza/Bienvenue/Welcome to the sanlam AG PLC online\n");	
		printf("1)KINYARWANDA\n");	
		 	printf("2)ENGLISH\n");
		 		printf("3)FRENCH\n");
					 printf("4)EXIT\n");
			
					 	
			int suboption1;
			scanf("%d",&option1);
			system("cls||clear");
			
			switch(option1){
				
				//code in kinyarwanda
				case 1:
					printf("1)ibinyabiziga\n");
						printf("2)ingendo\n");	
						
							printf("3)gusubira inyuma\n");	
							
							 printf("4)gusohoka\n");
				
				int suboption1;
				scanf("%d",&suboption1);
				system("cls||clear");
			    switch(suboption1){
			
				case 1:
					printf("1)Kongera/Kugura ubwishingizi\n");
						printf("2)Igihe buzarangirira\n");
							printf("3)Gusubira inyuma\n");
						
								printf("4)Gusohoka\n");
					
					break;
					case 2:
					printf("1)Murakoze guhitamo sanlam AG");
					
						//case3 and 4			 
						}
			
							 	
                break;
				//end of code in kinyarwanda
				
				
				//code in English
				case 2:
				     
					 printf("1)Motor\n");
						printf("2)Travel\n");	
						
							printf("3)backn\n");	
							
							 printf("4)Exit\n");
							
				int suboption2;
				scanf("%d",&suboption2);
				system("cls||clear");
			    switch(suboption1){
			   
			   	case 1:
					
					printf("1)Renew/Buy ");
						printf("2)check Expiry date\n");
							printf("3)Back\n");
						
								printf("4)Exit\n");
					
				case 2:
					printf("1)Thank you for choosing sanlam AG");
						break;
						//case3 
					case 3:
					break;	
						}	
				//end of code in English
					
				// Code in French
				case 3:
					printf("1)	Vehicule \n");
					printf("2)Voyage\n");	
					printf("3)Retour\n");	
	  			    printf("4)Quitter\n");	 						 
					int suboption3;
				scanf("%d",&suboption3);
				system("cls||clear");
		     	switch(suboption1){
				case 1:
					
					printf("1)Acheter/Renevouveler");
						
						printf("2)consulter d'expiration\n");
						
							printf("3)Retour\n");
						
								printf("4)Quitter\n");
					
					break;			 
					
					case 2:
					printf("1)Merci pour choisir sanlam AG\n");
					break;
					//case3 and 4
						
				//code in French
					 }					
				break;
				}
	//END OF CODE FOR SANILAM
	case 0:
			 system("cls||clear");
			 printf("Going back to the main menu.\n");
                goBackToMenu(displayMenu);
		 break;
         default:
                   system("cls||clear");
                   printf("Your choice was incorrect. Please try again.\n");
	
	}	                   
	} 
    
    void momoTermsandconditions() {
	    system("cls||clear");
	    	printf("1.amategeko n'amabwiriza agenga MOMO\n");
	    		printf("https://www.mtn.co.rw/momo/help/\n");
	    			printf("2.guhagarika kwemeza amategeko agenga momo\n  ");
						printf("Urakoze gukoresha ino servisi, Wamaze kwemeza amategeko n'amabwiriza\n");
	        
	    int choice11;   
        scanf("%d",&choice11);
	system("cls||clear");
	switch(choice11) {
		case 1:
			
		printf("1)kwemeza\n");	
			printf("2)Guhagarika\n");
					
			int option1;
			scanf("%d",&option1);
			system("cls||clear");		
			switch(option1) {
				
				case 1:
                  system("cls||clear");
				printf("Murakoze.ibyo mwasabye biri kunozwa. Murabona ubutumwa bugufi mukanya.");
				break;			
				case 2:
                system("cls||clear");
				printf("Murakoze.ibyo mwasabye biri kunozwa. Murabona ubutumwa bugufi mukanya.");
				break;
			
		}
		
			break;	
	}
    }	 
	//################################jus################################macyemacye#############################################
	    void pinmacye() {
            int pin;
		    printf("Enter PIN to confirm\n");
		    scanf("%d",&pin);
        }
        void paymacye() {
        	printf("select payment option\n");
	        printf("1) Pay your outstanding loan\n");
	        printf("0) Back\n");
	        int optionpay;
	        printf("");
	        scanf("%d",&optionpay);
	        system("cls||clear");
	        if(optionpay==1) {   
	        int optionpay1;
		    printf("y`ello,you have loan amount of xxxxxxxxRwf\nplease enter aomunt\n");
		    scanf("%d",&optionpay1);
	        }
	        else if(optionpay==0) {
		    macyeMacye();
	        }
	        else {
            printf("your choice was incorrect.please try again.");
            }
	    }
    void macyeMacye() {
	    system("cls||clear");
	        printf("Get an affordable smartphone with MTN\nmacye macye,select an option to continue\n");
	        printf("1) Check Eligibility\n");
	        printf("2) Pay device loan\n");
	        printf("3) Check balance\n");
	        int choice13;
	        printf("");
	        scanf("%d",&choice13);
	        system("cls||clear");
	        if(choice13==1) {
		    pinmacye();
	        }
	        else if(choice13==2) {
	        paymacye();	
	        }
	        else if(choice13==3) {
		    int pin;
		    printf("enter PIN\n");
		    scanf("%d",&pin);
		    system("cls");
		    if (pin==12345) {
			printf("your outstanding balance is xxxxxxx");
		    }
		    else {
			printf("invalid PIN or you are not authorized to \nperfom this action");
		    }
	        }
	}


    void babylhealth() {
	    system("cls||clear");
	        printf("Welcome To Babyl\n");
	        printf("Please Enter Your ID Number\n");
	        printf("\n");
	        //start#######################################################
	        int IDno;
	        printf("");
	        scanf("%d",&IDno);
	        system("cls");
	        if(IDno==IDno); {
		    char birthdate[5];
		    printf("shyiramo itariki yamavuko nkuko\nyanditse kundangamuntu yawe.urugero\n21*07*1997\n");
		    scanf("%s",&birthdate);
		    system("cls");
		    if(birthdate==birthdate) {
			printf("Murakoze kuduha umwirondoro\nmutegereze gato, turabamenyesha\nnimero yanyu niyemezwa muri babyl.");
		     }
		    else {
			printf("kubera imyirondoro mwatanze\nitahuye niy'ikigo cy'irangamuntu,\nntimwashoboye kwiyandikisha\nmwongwre mugerageze.");
		    }
	        }
    }
    
    void help() {
	    system("cls||clear");
	        printf("1) Dial call center\n");
	        printf("2) What is Mobile Money?\n");
	        printf("3) Getting Mobile Money\n");
	        printf("4) Charges\n");
	        printf("5) Roaming\n");
	        printf("6) Transfer to a non Mobile user\n");
	        printf("7) Buying MobileMoney\n");
	        printf("8) Wrong Transfer\n");
	        printf("0) Back\n");
	        //start#############################################
	        int helpchoice;
	        printf("");
	        scanf("%d",&helpchoice);
	        system("cls||clear");
	
	        if(helpchoice==1) {
	        printf("contact the call center 456\n")	;
	        }
	        else if(helpchoice==2) {
		    printf("Moble money is an MTN service that\nenables you to send and receive money\nanywhere in rwanda using your phone");
	        } 
            else if(helpchoice==3) {
    	    printf("Visit any MTN store or a mobilemoney\nagent to register. you must have an active\nMTN SIMcard or buy a new one ,your ID\nCard or passport.\n");
	        }
	        else if(helpchoice==4) {
		    printf("for every mobilemoney transfer,the system\nwill charge a transaction fee.obtain copy\nof charges from MTN stores or agegent.\n");
	        }
	        else if(helpchoice==5) {
		    printf("when you are roaming, you can send\nmoney to another user mobilemoney user\nbut can not withdraw, because the agent\n network works only within the rwanda border.\n");
	        }
            else if(helpchoice==6) {
    	    printf("yes,you can transfer money to a person\nthat does not have phone.");
	        }
	        else if(helpchoice==7) {
		    printf("you can buy mobilemoney at\nmobilemoney agents with agent signage\ncountrywide or at any MTN service center.\n");
	        }
	        else if(helpchoice==8) {
		    printf("call the MTN call center  by selecting call\ncenter on the MTN Mobilemoney menu.\n");
	        }
	        //going back
	        else if(helpchoice==0) {
		        system("cls||clear");
                    printf("Going back to the main menu.\n");
                    goBackToMenu(displayMenu);
	        }
	        else {
		    printf("your choice  was incorrect.please try again");
	        }
	}
//main function



int main() { 
    char dialPadCode[10];

    // Prompt user to enter a code in the dial pad
    printf("Enter code in the dial pad: ");
    scanf("%9s", dialPadCode);

    // Check if the entered code is *182#

    if (strcmp(dialPadCode, "*182#") == 0) {
        for (int choice; ; ) {
        int choice;
        // Display the mtn momo menu
        displayMenu();
  break;
		}	
    }   else {
        printf("Unknown Application.\n");
        }

    	return 0;
}