#include<iostream>
#include<fstream>
using namespace std;


void mainMenu(); //declaring the function for the program

class Management
{
public:

    Management()
    {
        mainMenu();
    }
};
class Details
{
public:

    static string name, gender;
    int age;
    string add,temp;
    static int cId;
    char arr[100];

     information()
    {
        cout << "\nEnter the customer ID:";
        cin >> cId;
		if (cin.fail()) // library funtion that is called when cin is failed
		{
			cin.clear(); //to clear the memory reserved for the cin function
			cin.ignore(); //to ignore the remanings for the cin function
			cout << "Please only enter numeric values for customer ID.\n";
			system("pause");
			information();
		}
        cout << "\nEnter the name :";
        cin >> name;
        cout << "\nEnter the age :";
        cin >> age;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "Please only enter numeric values for age.\n"<<"starting again\n";
			system("pause");
			system("cls");
			information();
		}
        cout << "\n Address : ";
        cin >> add;
        cout << "\n Gender :";
        cin >> gender;
        cout << "\nYour details are saved with us\n" << endl;
		system("pause");
		mainMenu();
    }
	
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightN[] = { "Dubai", "Canada", "UK", "USA", "Australia", "Europe" };

        for (int a = 0; a < 6; a++)
        {
            cout << (a + 1) << ". flight to  " << flightN[a] << endl;

        }

        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press ther number of the country of which you want to book the flight:";
        cin >> choice;
	if(choice >=1 && choice<=6 )
		{
			switch (choice)
			{
				case 1:
				{
					cout << "____Welcome to Dubai Emirates________\n" << endl;
		
					cout << "Your comfort is our priority. Enjoy the journey!" << endl;
		
					cout << "Following are the flights \n" << endl;
		
					cout << "1. DUB - 498" << endl;
					cout << " \t08-01-2022 8:00AM 10hrs Rs. 14000" << endl;
					cout << "2. DUB - 658" << endl;
					cout << "\t09-01-2022 4:00AM 12hrs Rs. 10000" << endl;
					cout << "3. DUB - 498" << endl;
					cout << "\t11-01-2022 11:00AM 11hrs Rs. 9000" << endl;
		
					cout << "InSelect the flight you want to book : ";
					cin >> choice1;
		
					if (choice1 == 1)
					{
						charges = 14000;
						cout << "\n You have successfully booked the flight DUB - 498" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else if (choice1 == 2)
					{
						charges = 10000;
						cout << "\nYou have successfully booked the flight DUB - 658" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else if (choice1 == 3)
					{
						charges = 9000;
						cout << "InYou have successfully booked the flight DUB - 508" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else
					{
						cout << "Invalid input shifting to the previous menu" << endl;
						flights();
					}

					break;
				}

				case 2:
				{
					cout << "____Welcome to Canadain Airlines________\n" << endl;
		
					cout << "Your comfort is our priority. Enjoy the journey!" << endl;
		
					cout << "Following are the flights \n" << endl;
		
					cout << "1. CA - 198" << endl;
					cout << " \t08-01-2022 2:00AM 20hrs Rs. 34000" << endl;
					cout << "2. CA - 158" << endl;
					cout << "\t11-01-2022 6:00AM 23hrs Rs. 29000" << endl;
					cout << "3. CA - 208" << endl;
					cout << "\t14-01-2022 12:00AM 12hrs Rs. 40000" << endl;
		
					cout << "InSelect the flight you want to book : ";
					cin >> choice1;
		
					if (choice1 == 1)
					{
						charges = 34000;
						cout << "\n You have successfully booked the flight CA- 198" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else if (choice1 == 2)
					{
						charges = 29000;
						cout << "\nYou have successfully booked the flight CA - 158" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else if (choice1 == 3)
					{
						charges = 40000;
						cout << "InYou have successfully booked the flight CA- 208" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else
					{
						cout << "Invalid input shifting to the previous menu" << endl;
						flights();
					}
			
					break;
				}

				case 3:
				{
		
					cout << "____Welcome to UK Airways________\n" << endl;
		
					cout << "Your comfort is our priority. Enjoy the journey!" << endl;
		
					cout << "Following are the flights \n" << endl;
		
					cout << "1. UK - 798" << endl;
					cout << " \t12-01-2022 10:00AM 14hrs Rs. 44000" << endl;
		
		
					cout << "InSelect the flight you want to book : ";
					cin >> choice1;
		
					if (choice1 == 1)
					{
						charges = 44000;
						cout << "\n You have successfully booked the flight UK - 789" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
		
		
					else
					{
						cout << "Invalid input shifting to the previous menu" << endl;
						flights();
					}
		
					break;
				}

				case 4:
				{
					cout << "____Welcome to US airways ________\n" << endl;
		
					cout << "Your comfort is our priority. Enjoy the journey!" << endl;
		
					cout << "Following are the flights \n" << endl;
		
					cout << "1. US - 567" << endl;
					cout << " \t10-01-2022 9:00AM 10hrs Rs. 37000" << endl;
					cout << "2. DUB - 658" << endl;
					cout << "\t09-01-2022 6:00AM 12hrs Rs. 39000" << endl;
					cout << "3. DUB - 498" << endl;
					cout << "\t12-01-2022 10:00AM 11hrs Rs. 42000" << endl;
		
					cout << "InSelect the flight you want to book : ";
					cin >> choice1;
		
					if (choice1 == 1)
					{
						charges = 37000;
						cout << "\n You have successfully booked the flight US - 567" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
		
					else if (choice1 == 2)
					{
						charges = 39000;
						cout << "\nYou have successfully booked the flight US - 658" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else if (choice1 == 3)
					{
						charges = 42000;
						cout << "InYou have successfully booked the flight US - 498" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else
					{
						cout << "Invalid input shifting to the previous menu" << endl;
						flights();
					}
		
					break;
				}

				case 5:
				{
					cout << "____Welcome to Australian Airlines ________\n" << endl;
		
					cout << "Your comfort is our priority. Enjoy the journey!" << endl;
		
					cout << "Following are the flights \n" << endl;
		
					cout << "1. AS - 698" << endl;
					cout << "\t18-01-2022 8:00AM 20hrs Rs. 44000" << endl;
					cout << "2. AS - 158" << endl;
					cout << "\t19-01-2022 4:00AM 22hrs Rs. 34000" << endl;
					cout << "3. AS - 708" << endl;
					cout << "\t17-01-2022 10:00AM 21hrs Rs. 42000" << endl;
		
					cout << "InSelect the flight you want to book : ";
					cin >> choice1;
		
					if (choice1 == 1)
					{
						charges = 44000;
						cout << "\n You have successfully booked the flight AS - 698" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
		
					else if (choice1 == 2)
					{
						charges = 34000;
						cout << "\nYou have successfully booked the flight AS- 158 " << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else if (choice1 == 3)
					{
						charges = 42000;
						cout << "InYou have successfully booked the flight AS - 708" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else
					{
						cout << "Invalid input shifting to the previous menu" << endl;
						flights();
					}
		
					break;
				}

				case 6:
				{
					cout << "____Welcome to European Airlines________\n" << endl;
		
					cout << "Your comfort is our priority. Enjoy the journey!" << endl;
		
					cout << "Following are the flights \n" << endl;
		
					cout << "1. EU - 898" << endl;
					cout << " \t02-01-2022 2:00AM 18hrs Rs. 36000" << endl;
					cout << "2. EU - 958" << endl;
					cout << "\t03-01-2022 6:00AM 19hrs Rs. 37000" << endl;
					cout << "3. EU - 608" << endl;
					cout << "\t12-01-2022 10:00AM 20hrs Rs. 31000" << endl;
		
					cout << "InSelect the flight you want to book : ";
					
					cin >> choice1;
		
					if (choice1 == 1)
					{
						charges = 36000;
						cout << "\n You have successfully booked the flight EU - 898" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
		
					else if (choice1 == 2)
					{
						charges = 37000;
						cout << "\nYou have successfully booked the flight EU - 958" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else if (choice1 == 3)
					{
						charges = 31000;
						cout << "InYou have successfully booked the flight EU - 608" << endl;
						cout << "You can go back to menu and take the ticket" << endl;
					}
					else
					{
						cout << "Invalid input shifting to the previous menu" << endl;
						flights();
					}
		
					break;
				}

			
			}
		}
		else{
			cout<<"\nYou have entered wrong value for flight\nReturning to main menu\n";
			system("pause");
			cin.clear();
			cin.ignore();
		}
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
public:

    void Bill()
    {
        string destination = ""; //declaring and initializing the string destination
            ofstream outf("records.txt"); // o for output to file ofstream means writing to file
			// outf is used as a variable to store the adress of the file used for output

        {
            outf << "_______RBQ & NM AIRLINES___" << endl;//outf is used to inform program to write  / print in that specific file
            outf << "______TICKET_______" << endl;
            outf << "_______________" << endl;

            outf << "Customer ID: " << Details:: cId << endl;
            outf << "Customer Name: " << Details:: name << endl;
            outf << "Customer Gender: " << Details:: gender << endl;
            outf << "\tDescription" << endl << endl;

            if (registration::choice == 1) // registration::choice
            {
                destination = "Dubai";
            }

            else if (registration::choice == 2)
            {
                destination = "Canada";
            }
            else if (registration::choice == 3)
            {
                destination = "UK";
            }
            else if (registration::choice == 4)
            {
                destination = "USA";
            }
            else if (registration::choice == 5)
            {
                destination = "Australia";
            }
            else if (registration::choice == 6)
            {
                destination = "Europe";
            }

            outf << "Destination\t\t" << destination << endl;
            outf << "Flight cost : \t\t" << registration:: charges << endl;

        }
        outf.close(); //closing the file

    }
    void dispBill()
    {
        ifstream myFile("records.txt");// i for input ifstream is used to read from a file 
		//ifs is used to store the adress of the file
        {
            if (!myFile)//! is used for not // !myFile if file is not present
            {
                cout << "File not avaliable !" << endl;
            }
            while (!myFile.eof())//.eof() End Of File. is a library function used to read all data till end of file
            {
                myFile.getline(arr, 100);//getline library function used to read data from specified file
                cout << arr << endl;
            }
        }
        myFile.close();
    }
};



string lchoice;
void mainMenu()
{
    
	int lchoice1;
    int schoice;
    int back;

	
		system("CLS");

		cout << endl << endl << endl;
	    cout << "\t               RBQ & NM Airlines   \n" << endl;
	    cout << "\t_______Main Menu ______" << endl;
	
	    cout << "\t_________________________________________________" << endl;
	    cout << "\t|\t\t\t\t\t\t" << endl;
	
	    cout << " \t|\t Press 1 to add the Customer Details       \t|" << endl;
	    cout << " \t|\t Press 2 for Flight Registration           \t|" << endl;
	    cout << " \t|\t Press 3 for Ticket and Charges            \t|" << endl;
	    cout << " \t|\t Press 4 to cancel                         \t|" << endl;
	    cout << " \t|\t Press 5 to exit                           \t|" << endl;
	    cout << "\t___________________________________________________" << endl;
	
	    cout << "Enter the choice : ";
	    cin >> lchoice;
	// making objects for the related classes
	    Details d;
	    registration r;
	    ticket t;
		
		if(lchoice >="1" && lchoice<="5" )
		{
			
			lchoice1 = stoi(lchoice); //stoi library function to convert string to integer type
			switch (lchoice1)
	    {
		    case 1:
		    {
		        cout << " ______Customers_____\n" << endl;
		        d.information();
				system("pause");
				mainMenu();
		        break;
			}
		
		    case 2:
		    {
		        cout << "_____Book a flight using this system_____\n;" << endl;
		        r.flights();
				lchoice="2";
				mainMenu();
		        break;
		    }

		    case 3:
		    {
		        cout << "_____ Get your ticket _____\n" << endl;
		        t.Bill();
		
		        cout << "Your ticket is printed, you can collect it \n" << endl;
		        cout << "Press 1 to display your ticket ";

				t.dispBill();
				system("pause");
		        mainMenu();
				break;
		    }

			case 4:
	        {
	        	int c;
	        	cout<<"to cancel your flight press 1:";
	        	cin>>c;
	  			cout<<"your flight has been cancelled."<<endl;
				cout<<"\nPress any key to return to main Menu";
				system("pause");
		        mainMenu();
		        break;
			}

		    case 5:
		    {
		        cout << "\n\n\t _____THANK YOU___" << endl;
		    	break;    
		    }
		}	
		}
		else{
			cout<<"\nYou have entered wrong value main\nEnter Correct one main\n";
			system("pause"); //for making program stop until user press any key
			mainMenu();
		}
	    
		
}
main()
{
    Management Mobj;  // creating (Mobj) object for managenmet class 
}
