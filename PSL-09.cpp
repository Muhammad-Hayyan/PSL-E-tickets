/* MUHAMMAD HAYYAN
23I - 2041___CY-A
Assignment#04___Q9 */

#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
		//Program to book E-Tickets for PSL-09
		
		//Ouputting Schedule
	int choice, enclosure, family, adult, children, amount, cnic, ik, jm, ja, am, st, sa, ib, ya;
	float rebate, t_rebate;
	cout<< "\n\t---------------------- E-TICKETS FOR PSL-09 ----------------------\n";
	cout<< "\n\t Schedule For Matches :";
	cout<< "\n\n\t 1. 27 Feb 2020 – Islamabad United v Quetta Gladiators, Pindi Cricket Stadium";
	cout<< "\n\t (7pm-10.15pm)";
	cout<< "\n\n\t 2. 28 Feb 2020 – Peshawar Zalmi v Lahore Qalandars, Pindi Cricket Stadium";
	cout<< "\n\t (8pm-11.15pm)";
	cout<< "\n\n\t 3. 29 Feb 2020 – Islamabad United v Peshawar Zalmi, Pindi Cricket Stadium";
	cout<< "\n\t (7pm-10.15pm)";
	cout<< "\n\n\t 4.  1 Mar 2020 – Islamabad United v Karachi Kings, Pindi Cricket Stadium";
	cout<< "\n\t (7pm-10.15pm)";
	cout<< "\n\n\t 5.  2 Mar 2020 – Peshawar Zalmi v Karachi Kings, Pindi Cricket Stadium";
	cout<< "\n\t (7pm-10.15pm)";
	cout<< "\n\n\t 6.  5 Mar 2020 – Peshawar Zalmi v Quetta Gladiators, Pindi Cricket Stadium";
	cout<< "\n\t (7pm-10.15pm)";
	cout<< "\n\n\t 7.  7 Mar 2020 – Peshawar Zalmi v Islamabad United, Pindi Cricket Stadium";
	cout<< "\n\t (2pm-5.15pm)";
	cout<< "\n\n\t 8.  8 Mar 2020 – Multan Sultans v Islamabad United, Pindi Cricket Stadium";
	cout<< "\n\t (2pm-5.15pm)";
	cout<< "\n\n  Enter your choices (1 - 8): ";
	cin>> choice;
	cout<< endl;
		
		//Enclosure for first 3 matches
	if (choice == 1 || choice == 2 || choice == 3)
	{
		cout<<"\n\n\t List of Available Encloures: \n";
		srand(time(NULL));
		
		ik = (rand() % 1000) + 1;
		cout<< "\n\n\t 1. -------- Imran Khan Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<ik;
		cout<< "\n\t\t Ticket Price: Rs. 3000";
		
		jm = (rand() % 1000) + 1;
		cout<< "\n\n\t 2. -------- Javed Miandad Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<jm;
		cout<< "\n\t\t Ticket Price: Rs. 3000";
		
		ja = (rand() % 1000) + 1;
		cout<< "\n\n\t 3. -------- Javed Akhtar Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<ja;
		cout<< "\n\t\t Ticket Price: Rs. 3000";
		
		am = (rand() % 1000) + 1;
		cout<< "\n\n\t 4. -------- Azhar Mehmood Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<am;
		cout<< "\n\t\t Ticket Price: Rs. 3000";
		
		sa = (rand() % 3000) + 1;
		cout<< "\n\n\t 5. -------- Shoaib Akhter Enclosure -------- \n";
		cout<< "\n\t - Class: Premium \t - Available Seats: "<<sa;
		cout<< "\n\t\t Ticket Price: Rs. 1500";
		
		st = (rand() % 3000) + 1;
		cout<< "\n\n\t 6. -------- Sohail Tanveer Enclosure -------- \n";
		cout<< "\n\t - Class: First Class \t - Available Seats: "<<st;
		cout<< "\n\t\t Ticket Price: Rs. 1000";
		
		ib = (rand() % 2500) + 1;
		cout<< "\n\n\t 7. -------- Imran Buksh Enclosure -------- \n";
		cout<< "\n\t - Class: General \t - Available Seats: "<<ib;
		cout<< "\n\t\t Ticket Price: Rs. 500";
		
		ya = (rand() % 2500) + 1;
		cout<< "\n\n\t 8. -------- Yasir Arafat Enclosure -------- \n";
		cout<< "\n\t - Class: General \t - Available Seats: "<<ya;
		cout<< "\n\t\t Ticket Price: Rs. 500";	
		
			//Selecting enclosure
		cout<< "\n\nSelect Your Enclosure: ";
		cin>> enclosure;
		
			//calculating amount according to enclosure
		if (enclosure == 1)
		{	
			amount = 3000;
			
			// checking for family tickets
			cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
			cin>> family;
			
			if (family == 1)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 4 adults and 5 children are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
				cin>> children;
				
				//Printing errors
				if (adult > 4)
				cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if (children > 5)
				cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
				if (children < 2)
				cout<< "\n\n children should be greater than 1"<<endl;
				if ( (children + adult) > ik)
				cout<< "\n\n Sorry! Only" <<ik<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
				rebate = amount * (0.2);
				rebate = rebate * children;
				amount = amount * (children + adult);
				amount = amount - rebate;
				
				cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
				cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
				cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					
				}
			}	
			else if (family == 0)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 8 adults are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				
				//Printing errors
				if (adult > 8)
				cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if ( adult > ik)
				cout<< "\n\n Sorry! Only" <<ik<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if (adult > 0 && adult < 9) 
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
					if (adult > 4)
					{
						rebate = 3000 * (0.1);
						rebate = rebate * adult;
						amount = amount * (adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					else 
					{
						cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					
				}
			}
			else 
				cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
		}	
		else if (enclosure == 2)
		{
			amount = 3000;
			
			// checking for family tickets
			cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
			cin>> family;
			
			if (family == 1)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 4 adults and 5 children are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
				cin>> children;
				
				//Printing errors
				if (adult > 4)
				cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if (children > 5)
				cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
				if (children < 2)
				cout<< "\n\n children should be greater than 1"<<endl;
				if ( (children + adult) > jm)
				cout<< "\n\n Sorry! Only" <<jm<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
				rebate = amount * (0.2);
				rebate = rebate * children;
				amount = amount * (children + adult);
				amount = amount - rebate;
				
				cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
				cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
				cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					
				}
			}	
			else if (family == 0)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 8 adults are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				
				//Printing errors
				if (adult > 8)
				cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if ( adult > jm)
				cout<< "\n\n Sorry! Only" <<jm<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if  (adult > 0 && adult < 9) 
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
					if (adult > 4)
					{
						rebate = amount * (0.1);
						rebate = rebate * adult;
						amount = amount * (adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					else 
					{
						cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					
				}
			}
			else 
				cout<< "\nInvalid Input! Please enter input 1 or 0"; 
				
		     }	
		     else if (enclosure == 3)
			{
				amount = 3000;
			
			// checking for family tickets
			cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
			cin>> family;
			
				if (family == 1)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 4 adults and 5 children are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
					cin>> children;
					
					//Printing errors
					if (adult > 4)
					cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if (children > 5)
					cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
					if (children < 2)
					cout<< "\n\n children should be greater than 1"<<endl;
					if ( (children + adult) > ja)
					cout<< "\n\n Sorry! Only" <<ja<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
					rebate = amount * (0.2);
					rebate = rebate * children;
					amount = amount * (children + adult);
					amount = amount - rebate;
					
					cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
					cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
					cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						
					}
				}	
				else if (family == 0)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 8 adults are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					
					//Printing errors
					if (adult > 8)
					cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if ( adult > ja)
					cout<< "\n\n Sorry! Only" <<ja<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if (adult > 0 && adult < 9) 
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
						if (adult > 4)
						{
							rebate = amount * (0.1);
							rebate = rebate * adult;
							amount = amount * (adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						}
					else 
					{
						cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					
				}
			}
			else 
				cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
				
			}	
			  else if (enclosure == 4)
			  {	
				amount = 3000;
				
				// checking for family tickets
				cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
				cin>> family;
			
				if (family == 1)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 4 adults and 5 children are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
					cin>> children;
					
					//Printing errors
					if (adult > 4)
					cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if (children > 5)
					cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
					if (children < 2)
					cout<< "\n\n children should be greater than 1"<<endl;
					if ( (children + adult) > am)
					cout<< "\n\n Sorry! Only" <<am<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
					rebate = amount * (0.2);
					rebate = rebate * children;
					amount = amount * (children + adult);
					amount = amount - rebate;
					
					cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
					cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
					cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						
					}
				}	
				else if (family == 0)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 8 adults are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					
					//Printing errors
					if (adult > 8)
					cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if ( adult > am)
					cout<< "\n\n Sorry! Only" <<am<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if  (adult > 0 && adult < 9) 
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
						if (adult > 4)
						{
							rebate = amount * (0.1);
							rebate = rebate * adult;
							amount = amount * (adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						}
						else 
						{
							cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						}
						
					}
				}
				else 
					cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
			}	
					
					else if (enclosure == 5)
					{		
					amount = 1500;
					
					// checking for family tickets
					cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
					cin>> family;
					
					if (family == 1)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 4 adults and 5 children are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
						cin>> children;
						
						//Printing errors
						if (adult > 4)
						cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if (children > 5)
						cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
						if (children < 2)
						cout<< "\n\n children should be greater than 1"<<endl;
						if ( (children + adult) > sa)
						cout<< "\n\n Sorry! Only" <<sa<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
						rebate = amount * (0.2);
						rebate = rebate * children;
						amount = amount * (children + adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							
						}
					}	
					else if (family == 0)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 8 adults are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						
						//Printing errors
						if (adult > 8)
						cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if ( adult > sa)
						cout<< "\n\n Sorry! Only" <<sa<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if (adult > 0 && adult < 9) 
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
							if (adult > 4)
							{
								rebate = amount * (0.1);
								rebate = rebate * adult;
								amount = amount * (adult);
								amount = amount - rebate;
								
								cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
								cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							else 
							{
								cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							
						}
					}
			
					else 
						cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
					}	
					
					else if (enclosure == 6)
					{	
					amount = 1000;
					
					// checking for family tickets
					cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
					cin>> family;
					
					if (family == 1)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 4 adults and 5 children are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
						cin>> children;
						
						//Printing errors
						if (adult > 4)
						cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if (children > 5)
						cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
						if (children < 1)
						cout<< "\n\n children should be greater than 1"<<endl;
						if ( (children + adult) > st)
						cout<< "\n\n Sorry! Only" <<st<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
						rebate = amount * (0.2);
						rebate = rebate * children;
						amount = amount * (children + adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							
						}
					}	
					else if (family == 0)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 8 adults are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						
						//Printing errors
						if (adult > 8)
						cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if ( adult > st)
						cout<< "\n\n Sorry! Only" <<st<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if (adult > 0 && adult < 9) 
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
							if (adult > 4)
							{
								rebate = 3000 * (0.1);
								rebate = rebate * adult;
								amount = amount * (adult);
								amount = amount - rebate;
								
								cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
								cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							else 
							{
								cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							
						}
					}
					else 
						cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
					}
					
						else if (enclosure == 7)
					{	
						amount = 500;
						
						// checking for family tickets
						cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
						cin>> family;
						
						if (family == 1)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 4 adults and 5 children are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
							cin>> children;
							
							//Printing errors
							if (adult > 4)
							cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if (children > 5)
							cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
							if (children < 2)
							cout<< "\n\n children should be greater than 1"<<endl;
							if ( (children + adult) > ib)
							cout<< "\n\n Sorry! Only" <<ib<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
							rebate = amount * (0.2);
							rebate = rebate * children;
							amount = amount * (children + adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								
							}
						}	
						else if (family == 0)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 8 adults are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							
							//Printing errors
							if (adult > 8)
							cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if ( adult > ib)
							cout<< "\n\n Sorry! Only" <<ib<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if (adult > 0 && adult < 9) 
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
								if (adult > 4)
								{
									rebate = 3000 * (0.1);
									rebate = rebate * adult;
									amount = amount * (adult);
									amount = amount - rebate;
									
									cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
									cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								else 
								{
									cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								
							}
						}
						else 
							cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
						}	
						
							else if (enclosure == 8)
					{	
						amount = 500;
						
						// checking for family tickets
						cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
						cin>> family;
						
						if (family == 1)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 4 adults and 5 children are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
							cin>> children;
							
							//Printing errors
							if (adult > 4)
							cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if (children > 5)
							cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
							if (children < 2)
							cout<< "\n\n children should be greater than 1"<<endl;
							if ( (children + adult) > ya)
							cout<< "\n\n Sorry! Only" <<ya<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
							rebate = amount * (0.2);
							rebate = rebate * children;
							amount = amount * (children + adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								
							}
						}	
						else if (family == 0)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 8 adults are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							
							//Printing errors
							if (adult > 8)
							cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if ( adult > ya)
							cout<< "\n\n Sorry! Only" <<ya<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if (adult > 0 && adult < 9) 
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
								if (adult > 4)
								{
									rebate = 3000 * (0.1);
									rebate = rebate * adult;
									amount = amount * (adult);
									amount = amount - rebate;
									
									cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
									cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								else 
								{
									cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								
							}
						}
						else 
							cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
					}		
				
				
				else 
					cout<< "\nInvalid Input! Please enter input 1 - 8"; 	
					
	}
	else if (choice == 5 || choice == 6 || choice == 8)
	{
		cout<<"\n\n\t List of Available Encloures: \n";
		srand(time(NULL));
		
		ik = (rand() % 1000) + 1;
		cout<< "\n\n\t 1. -------- Imran Khan Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<ik;
		cout<< "\n\t\t Ticket Price: Rs. 1500";
		
		jm = (rand() % 1000) + 1;
		cout<< "\n\n\t 2. -------- Javed Miandad Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<jm;
		cout<< "\n\t\t Ticket Price: Rs. 1500";
		
		ja = (rand() % 1000) + 1;
		cout<< "\n\n\t 3. -------- Javed Akhtar Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<ja;
		cout<< "\n\t\t Ticket Price: Rs. 1500";
		
		am = (rand() % 1000) + 1;
		cout<< "\n\n\t 4. -------- Azhar Mehmood Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<am;
		cout<< "\n\t\t Ticket Price: Rs. 1500";
		
		sa = (rand() % 3000) + 1;
		cout<< "\n\n\t 5. -------- Shoaib Akhter Enclosure -------- \n";
		cout<< "\n\t - Class: Premium \t - Available Seats: "<<sa;
		cout<< "\n\t\t Ticket Price: Rs. 1000";
		
		st = (rand() % 3000) + 1;
		cout<< "\n\n\t 6. -------- Sohail Tanveer Enclosure -------- \n";
		cout<< "\n\t - Class: First Class \t - Available Seats: "<<st;
		cout<< "\n\t\t Ticket Price: Rs. 500";
		
		ib = (rand() % 2500) + 1;
		cout<< "\n\n\t 7. -------- Imran Buksh Enclosure -------- \n";
		cout<< "\n\t - Class: General \t - Available Seats: "<<ib;
		cout<< "\n\t\t Ticket Price: Rs. 250";
		
		ya = (rand() % 2500) + 1;
		cout<< "\n\n\t 8. -------- Yasir Arafat Enclosure -------- \n";
		cout<< "\n\t - Class: General \t - Available Seats: "<<ya;
		cout<< "\n\t\t Ticket Price: Rs. 250";	
		
		//Selecting enclosure
		cout<< "\n\nSelect Your Enclosure: ";
		cin>> enclosure;
		
			//calculating amount according to enclosure
		if (enclosure == 1)
		{	
			amount = 3000;
			
			// checking for family tickets
			cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
			cin>> family;
			
			if (family == 1)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 4 adults and 5 children are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
				cin>> children;
				
				//Printing errors
				if (adult > 4)
				cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if (children > 5)
				cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
				if (children < 2)
				cout<< "\n\n children should be greater than 1"<<endl;
				if ( (children + adult) > ik)
				cout<< "\n\n Sorry! Only" <<ik<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
				rebate = amount * (0.2);
				rebate = rebate * children;
				amount = amount * (children + adult);
				amount = amount - rebate;
				
				cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
				cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
				cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					
				}
			}	
			else if (family == 0)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 8 adults are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				
				//Printing errors
				if (adult > 8)
				cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if ( adult > ik)
				cout<< "\n\n Sorry! Only" <<ik<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if (adult > 0 && adult < 9) 
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
					if (adult > 4)
					{
						rebate = 3000 * (0.1);
						rebate = rebate * adult;
						amount = amount * (adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					else 
					{
						cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					
				}
			}
			else 
				cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
		}	
		else if (enclosure == 2)
		{
			amount = 3000;
			
			// checking for family tickets
			cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
			cin>> family;
			
			if (family == 1)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 4 adults and 5 children are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
				cin>> children;
				
				//Printing errors
				if (adult > 4)
				cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if (children > 5)
				cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
				if (children < 2)
				cout<< "\n\n children should be greater than 1"<<endl;
				if ( (children + adult) > jm)
				cout<< "\n\n Sorry! Only" <<jm<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
				rebate = amount * (0.2);
				rebate = rebate * children;
				amount = amount * (children + adult);
				amount = amount - rebate;
				
				cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
				cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
				cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					
				}
			}	
			else if (family == 0)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 8 adults are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				
				//Printing errors
				if (adult > 8)
				cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if ( adult > jm)
				cout<< "\n\n Sorry! Only" <<jm<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if  (adult > 0 && adult < 9) 
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
					if (adult > 4)
					{
						rebate = amount * (0.1);
						rebate = rebate * adult;
						amount = amount * (adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					else 
					{
						cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					
				}
			}
			else 
				cout<< "\nInvalid Input! Please enter input 1 or 0"; 
				
		     }	
		     else if (enclosure == 3)
			{
				amount = 3000;
			
			// checking for family tickets
			cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
			cin>> family;
			
				if (family == 1)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 4 adults and 5 children are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
					cin>> children;
					
					//Printing errors
					if (adult > 4)
					cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if (children > 5)
					cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
					if (children < 2)
					cout<< "\n\n children should be greater than 1"<<endl;
					if ( (children + adult) > ja)
					cout<< "\n\n Sorry! Only" <<ja<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
					rebate = amount * (0.2);
					rebate = rebate * children;
					amount = amount * (children + adult);
					amount = amount - rebate;
					
					cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
					cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
					cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						
					}
				}	
				else if (family == 0)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 8 adults are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					
					//Printing errors
					if (adult > 8)
					cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if ( adult > ja)
					cout<< "\n\n Sorry! Only" <<ja<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if (adult > 0 && adult < 9) 
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
						if (adult > 4)
						{
							rebate = amount * (0.1);
							rebate = rebate * adult;
							amount = amount * (adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						}
					else 
					{
						cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					
				}
			}
			else 
				cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
				
			}	
			  else if (enclosure == 4)
			  {	
				amount = 3000;
				
				// checking for family tickets
				cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
				cin>> family;
			
				if (family == 1)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 4 adults and 5 children are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
					cin>> children;
					
					//Printing errors
					if (adult > 4)
					cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if (children > 5)
					cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
					if (children < 2)
					cout<< "\n\n children should be greater than 1"<<endl;
					if ( (children + adult) > am)
					cout<< "\n\n Sorry! Only" <<am<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
					rebate = amount * (0.2);
					rebate = rebate * children;
					amount = amount * (children + adult);
					amount = amount - rebate;
					
					cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
					cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
					cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						
					}
				}	
				else if (family == 0)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 8 adults are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					
					//Printing errors
					if (adult > 8)
					cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if ( adult > am)
					cout<< "\n\n Sorry! Only" <<am<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if  (adult > 0 && adult < 9) 
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
						if (adult > 4)
						{
							rebate = amount * (0.1);
							rebate = rebate * adult;
							amount = amount * (adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						}
						else 
						{
							cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						}
						
					}
				}
				else 
					cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
			}	
					
					else if (enclosure == 5)
					{		
					amount = 1500;
					
					// checking for family tickets
					cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
					cin>> family;
					
					if (family == 1)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 4 adults and 5 children are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
						cin>> children;
						
						//Printing errors
						if (adult > 4)
						cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if (children > 5)
						cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
						if (children < 2)
						cout<< "\n\n children should be greater than 1"<<endl;
						if ( (children + adult) > sa)
						cout<< "\n\n Sorry! Only" <<sa<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
						rebate = amount * (0.2);
						rebate = rebate * children;
						amount = amount * (children + adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							
						}
					}	
					else if (family == 0)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 8 adults are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						
						//Printing errors
						if (adult > 8)
						cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if ( adult > sa)
						cout<< "\n\n Sorry! Only" <<sa<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if (adult > 0 && adult < 9) 
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
							if (adult > 4)
							{
								rebate = amount * (0.1);
								rebate = rebate * adult;
								amount = amount * (adult);
								amount = amount - rebate;
								
								cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
								cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							else 
							{
								cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							
						}
					}
			
					else 
						cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
					}	
					
					else if (enclosure == 6)
					{	
					amount = 1000;
					
					// checking for family tickets
					cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
					cin>> family;
					
					if (family == 1)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 4 adults and 5 children are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
						cin>> children;
						
						//Printing errors
						if (adult > 4)
						cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if (children > 5)
						cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
						if (children < 2)
						cout<< "\n\n children should be greater than 1"<<endl;
						if ( (children + adult) > st)
						cout<< "\n\n Sorry! Only" <<st<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
						rebate = amount * (0.2);
						rebate = rebate * children;
						amount = amount * (children + adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							
						}
					}	
					else if (family == 0)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 8 adults are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						
						//Printing errors
						if (adult > 8)
						cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if ( adult > st)
						cout<< "\n\n Sorry! Only" <<st<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if (adult > 0 && adult < 9) 
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
							if (adult > 4)
							{
								rebate = 3000 * (0.1);
								rebate = rebate * adult;
								amount = amount * (adult);
								amount = amount - rebate;
								
								cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
								cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							else 
							{
								cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							
						}
					}
					else 
						cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
					}
					
						else if (enclosure == 7)
					{	
						amount = 500;
						
						// checking for family tickets
						cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
						cin>> family;
						
						if (family == 1)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 4 adults and 5 children are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
							cin>> children;
							
							//Printing errors
							if (adult > 4)
							cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if (children > 5)
							cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
							if (children < 2)
							cout<< "\n\n children should be greater than 1"<<endl;
							if ( (children + adult) > ib)
							cout<< "\n\n Sorry! Only" <<ib<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
							rebate = amount * (0.2);
							rebate = rebate * children;
							amount = amount * (children + adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								
							}
						}	
						else if (family == 0)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 8 adults are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							
							//Printing errors
							if (adult > 8)
							cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if ( adult > ib)
							cout<< "\n\n Sorry! Only" <<ib<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if (adult > 0 && adult < 9) 
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
								if (adult > 4)
								{
									rebate = 3000 * (0.1);
									rebate = rebate * adult;
									amount = amount * (adult);
									amount = amount - rebate;
									
									cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
									cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								else 
								{
									cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								
							}
						}
						else 
							cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
						}	
						
							else if (enclosure == 8)
					{	
						amount = 500;
						
						// checking for family tickets
						cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
						cin>> family;
						
						if (family == 1)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 4 adults and 5 children are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
							cin>> children;
							
							//Printing errors
							if (adult > 4)
							cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if (children > 5)
							cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
							if (children < 2)
							cout<< "\n\n children should be greater than 1"<<endl;
							if ( (children + adult) > ya)
							cout<< "\n\n Sorry! Only" <<ya<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
							rebate = amount * (0.2);
							rebate = rebate * children;
							amount = amount * (children + adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								
							}
						}	
						else if (family == 0)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 8 adults are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							
							//Printing errors
							if (adult > 8)
							cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if ( adult > ya)
							cout<< "\n\n Sorry! Only" <<ya<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if (adult > 0 && adult < 9) 
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
								if (adult > 4)
								{
									rebate = 3000 * (0.1);
									rebate = rebate * adult;
									amount = amount * (adult);
									amount = amount - rebate;
									
									cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
									cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								else 
								{
									cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								
							}
						}
						else 
							cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
					}		
				
				
				else 
					cout<< "\nInvalid Input! Please enter input 1 - 8"; 
	}
		else if (choice == 4 || choice == 7)
	       {
		cout<<"\n\n\t List of Available Encloures: \n";
		srand(time(NULL));
		
		ik = (rand() % 1000) + 1;
		cout<< "\n\n\t 1. -------- Imran Khan Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<ik;
		cout<< "\n\t\t Ticket Price: Rs. 2000";
		
		jm = (rand() % 1000) + 1;
		cout<< "\n\n\t 2. -------- Javed Miandad Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<jm;
		cout<< "\n\t\t Ticket Price: Rs. 2000";
		
		ja = (rand() % 1000) + 1;
		cout<< "\n\n\t 3. -------- Javed Akhtar Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<ja;
		cout<< "\n\t\t Ticket Price: Rs. 2000";
		
		am = (rand() % 1000) + 1;
		cout<< "\n\n\t 4. -------- Azhar Mehmood Enclosure -------- \n";
		cout<< "\n\t - Class: VIP \t - Available Seats: "<<am;
		cout<< "\n\t\t Ticket Price: Rs. 2000";
		
		sa = (rand() % 3000) + 1;
		cout<< "\n\n\t 5. -------- Shoaib Akhter Enclosure -------- \n";
		cout<< "\n\t - Class: Premium \t - Available Seats: "<<sa;
		cout<< "\n\t\t Ticket Price: Rs. 1000";
		
		st = (rand() % 3000) + 1;
		cout<< "\n\n\t 6. -------- Sohail Tanveer Enclosure -------- \n";
		cout<< "\n\t - Class: First Class \t - Available Seats: "<<st;
		cout<< "\n\t\t Ticket Price: Rs. 500";
		
		ib = (rand() % 2500) + 1;
		cout<< "\n\n\t 7. -------- Imran Buksh Enclosure -------- \n";
		cout<< "\n\t - Class: General \t - Available Seats: "<<ib;
		cout<< "\n\t\t Ticket Price: Rs. 250";
		
		ya = (rand() % 2500) + 1;
		cout<< "\n\n\t 8. -------- Yasir Arafat Enclosure -------- \n";
		cout<< "\n\t - Class: General \t - Available Seats: "<<ya;
		cout<< "\n\t\t Ticket Price: Rs. 250";	
		
		//Selecting enclosure
		cout<< "\n\nSelect Your Enclosure: ";
		cin>> enclosure;
		
			//calculating amount according to enclosure
		if (enclosure == 1)
		{	
			amount = 3000;
			
			// checking for family tickets
			cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
			cin>> family;
			
			if (family == 1)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 4 adults and 5 children are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
				cin>> children;
				
				//Printing errors
				if (adult > 4)
				cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if (children > 5)
				cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
				if (children < 2)
				cout<< "\n\n children should be greater than 1"<<endl;
				if ( (children + adult) > ik)
				cout<< "\n\n Sorry! Only" <<ik<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
				rebate = amount * (0.2);
				rebate = rebate * children;
				amount = amount * (children + adult);
				amount = amount - rebate;
				
				cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
				cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
				cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					
				}
			}	
			else if (family == 0)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 8 adults are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				
				//Printing errors
				if (adult > 8)
				cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if ( adult > ik)
				cout<< "\n\n Sorry! Only" <<ik<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if (adult > 0 && adult < 9) 
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
					if (adult > 4)
					{
						rebate = 3000 * (0.1);
						rebate = rebate * adult;
						amount = amount * (adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					else 
					{
						cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					
				}
			}
			else 
				cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
		}	
		else if (enclosure == 2)
		{
			amount = 3000;
			
			// checking for family tickets
			cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
			cin>> family;
			
			if (family == 1)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 4 adults and 5 children are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
				cin>> children;
				
				//Printing errors
				if (adult > 4)
				cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if (children > 5)
				cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
				if (children < 2)
				cout<< "\n\n children should be greater than 1"<<endl;
				if ( (children + adult) > jm)
				cout<< "\n\n Sorry! Only" <<jm<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
				rebate = amount * (0.2);
				rebate = rebate * children;
				amount = amount * (children + adult);
				amount = amount - rebate;
				
				cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
				cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
				cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					
				}
			}	
			else if (family == 0)
			{	
				//taking no of tickets inputs
				cout<<"\n\n Maximum 8 adults are allowed";
				cout<< "\n Enter the number of Adult tickets you want to purchase: ";
				cin>> adult;
				
				//Printing errors
				if (adult > 8)
				cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
				if (adult < 1)
				cout<< "\n\n Adults should be greater than 0"<<endl;
				if ( adult > jm)
				cout<< "\n\n Sorry! Only" <<jm<< " tickets are available"<<endl;
				
				//checking validity and proceeding
				if  (adult > 0 && adult < 9) 
				{
				cout<< "\n\n Please Enter Your CNIC: ";
				cin>> cnic;
				
					if (adult > 4)
					{
						rebate = amount * (0.1);
						rebate = rebate * adult;
						amount = amount * (adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					else 
					{
						cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					
				}
			}
			else 
				cout<< "\nInvalid Input! Please enter input 1 or 0"; 
				
		     }	
		     else if (enclosure == 3)
			{
				amount = 3000;
			
			// checking for family tickets
			cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
			cin>> family;
			
				if (family == 1)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 4 adults and 5 children are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
					cin>> children;
					
					//Printing errors
					if (adult > 4)
					cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if (children > 5)
					cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
					if (children < 2)
					cout<< "\n\n children should be greater than 1"<<endl;
					if ( (children + adult) > ja)
					cout<< "\n\n Sorry! Only" <<ja<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
					rebate = amount * (0.2);
					rebate = rebate * children;
					amount = amount * (children + adult);
					amount = amount - rebate;
					
					cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
					cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
					cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						
					}
				}	
				else if (family == 0)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 8 adults are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					
					//Printing errors
					if (adult > 8)
					cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if ( adult > ja)
					cout<< "\n\n Sorry! Only" <<ja<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if (adult > 0 && adult < 9) 
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
						if (adult > 4)
						{
							rebate = amount * (0.1);
							rebate = rebate * adult;
							amount = amount * (adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						}
					else 
					{
						cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
					}
					
				}
			}
			else 
				cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
				
			}	
			  else if (enclosure == 4)
			  {	
				amount = 3000;
				
				// checking for family tickets
				cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
				cin>> family;
			
				if (family == 1)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 4 adults and 5 children are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
					cin>> children;
					
					//Printing errors
					if (adult > 4)
					cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if (children > 5)
					cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
					if (children < 2)
					cout<< "\n\n children should be greater than 1"<<endl;
					if ( (children + adult) > am)
					cout<< "\n\n Sorry! Only" <<am<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
					rebate = amount * (0.2);
					rebate = rebate * children;
					amount = amount * (children + adult);
					amount = amount - rebate;
					
					cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
					cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
					cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						
					}
				}	
				else if (family == 0)
				{	
					//taking no of tickets inputs
					cout<<"\n\n Maximum 8 adults are allowed";
					cout<< "\n Enter the number of Adult tickets you want to purchase: ";
					cin>> adult;
					
					//Printing errors
					if (adult > 8)
					cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
					if (adult < 1)
					cout<< "\n\n Adults should be greater than 0"<<endl;
					if ( adult > am)
					cout<< "\n\n Sorry! Only" <<am<< " tickets are available"<<endl;
					
					//checking validity and proceeding
					if  (adult > 0 && adult < 9) 
					{
					cout<< "\n\n Please Enter Your CNIC: ";
					cin>> cnic;
					
						if (adult > 4)
						{
							rebate = amount * (0.1);
							rebate = rebate * adult;
							amount = amount * (adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						}
						else 
						{
							cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
						}
						
					}
				}
				else 
					cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
			}	
					
					else if (enclosure == 5)
					{		
					amount = 1500;
					
					// checking for family tickets
					cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
					cin>> family;
					
					if (family == 1)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 4 adults and 5 children are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
						cin>> children;
						
						//Printing errors
						if (adult > 4)
						cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if (children > 5)
						cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
						if (children < 2)
						cout<< "\n\n children should be greater than 1"<<endl;
						if ( (children + adult) > sa)
						cout<< "\n\n Sorry! Only" <<sa<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
						rebate = amount * (0.2);
						rebate = rebate * children;
						amount = amount * (children + adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							
						}
					}	
					else if (family == 0)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 8 adults are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						
						//Printing errors
						if (adult > 8)
						cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if ( adult > sa)
						cout<< "\n\n Sorry! Only" <<sa<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if (adult > 0 && adult < 9) 
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
							if (adult > 4)
							{
								rebate = amount * (0.1);
								rebate = rebate * adult;
								amount = amount * (adult);
								amount = amount - rebate;
								
								cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
								cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							else 
							{
								cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							
						}
					}
			
					else 
						cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
					}	
					
					else if (enclosure == 6)
					{	
					amount = 1000;
					
					// checking for family tickets
					cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
					cin>> family;
					
					if (family == 1)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 4 adults and 5 children are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
						cin>> children;
						
						//Printing errors
						if (adult > 4)
						cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if (children > 5)
						cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
						if (children < 2)
						cout<< "\n\n children should be greater than 1"<<endl;
						if ( (children + adult) > st)
						cout<< "\n\n Sorry! Only" <<st<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
						rebate = amount * (0.2);
						rebate = rebate * children;
						amount = amount * (children + adult);
						amount = amount - rebate;
						
						cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
						cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
						cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							
						}
					}	
					else if (family == 0)
					{	
						//taking no of tickets inputs
						cout<<"\n\n Maximum 8 adults are allowed";
						cout<< "\n Enter the number of Adult tickets you want to purchase: ";
						cin>> adult;
						
						//Printing errors
						if (adult > 8)
						cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
						if (adult < 1)
						cout<< "\n\n Adults should be greater than 0"<<endl;
						if ( adult > st)
						cout<< "\n\n Sorry! Only" <<st<< " tickets are available"<<endl;
						
						//checking validity and proceeding
						if (adult > 0 && adult < 9) 
						{
						cout<< "\n\n Please Enter Your CNIC: ";
						cin>> cnic;
						
							if (adult > 4)
							{
								rebate = 3000 * (0.1);
								rebate = rebate * adult;
								amount = amount * (adult);
								amount = amount - rebate;
								
								cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
								cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							else 
							{
								cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
								cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
							}
							
						}
					}
					else 
						cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
					}
					
						else if (enclosure == 7)
					{	
						amount = 500;
						
						// checking for family tickets
						cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
						cin>> family;
						
						if (family == 1)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 4 adults and 5 children are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
							cin>> children;
							
							//Printing errors
							if (adult > 4)
							cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if (children > 5)
							cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
							if (children < 2)
							cout<< "\n\n children should be greater than 1"<<endl;
							if ( (children + adult) > ib)
							cout<< "\n\n Sorry! Only" <<ib<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
							rebate = amount * (0.2);
							rebate = rebate * children;
							amount = amount * (children + adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								
							}
						}	
						else if (family == 0)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 8 adults are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							
							//Printing errors
							if (adult > 8)
							cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if ( adult > ib)
							cout<< "\n\n Sorry! Only" <<ib<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if (adult > 0 && adult < 9) 
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
								if (adult > 4)
								{
									rebate = 3000 * (0.1);
									rebate = rebate * adult;
									amount = amount * (adult);
									amount = amount - rebate;
									
									cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
									cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								else 
								{
									cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								
							}
						}
						else 
							cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
						}	
						
							else if (enclosure == 8)
					{	
						amount = 500;
						
						// checking for family tickets
						cout<< "\n\nDo you want to buy tickets for a family?(Enter 1 for yes, 0 for no)";
						cin>> family;
						
						if (family == 1)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 4 adults and 5 children are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							cout<< "\n\n Enter the number of Children tickets you want to purchase: ";
							cin>> children;
							
							//Printing errors
							if (adult > 4)
							cout<< "\n\n Sorry! Maximum 4 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if (children > 5)
							cout<< "\n\n Sorry! Maximum 5 children are allowed"<<endl;
							if (children < 2)
							cout<< "\n\n children should be greater than 1"<<endl;
							if ( (children + adult) > ya)
							cout<< "\n\n Sorry! Only" <<ya<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if ( (adult > 0 && adult < 5) && (children > 1 && children < 6))
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
							rebate = amount * (0.2);
							rebate = rebate * children;
							amount = amount * (children + adult);
							amount = amount - rebate;
							
							cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
							cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
							cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								
							}
						}	
						else if (family == 0)
						{	
							//taking no of tickets inputs
							cout<<"\n\n Maximum 8 adults are allowed";
							cout<< "\n Enter the number of Adult tickets you want to purchase: ";
							cin>> adult;
							
							//Printing errors
							if (adult > 8)
							cout<< "\n\n Sorry! Maximum 8 adults are allowed"<<endl;
							if (adult < 1)
							cout<< "\n\n Adults should be greater than 0"<<endl;
							if ( adult > ya)
							cout<< "\n\n Sorry! Only" <<ya<< " tickets are available"<<endl;
							
							//checking validity and proceeding
							if (adult > 0 && adult < 9) 
							{
							cout<< "\n\n Please Enter Your CNIC: ";
							cin>> cnic;
							
								if (adult > 4)
								{
									rebate = 3000 * (0.1);
									rebate = rebate * adult;
									amount = amount * (adult);
									amount = amount - rebate;
									
									cout<< "\n\n\t Rebate Given: Rs. "<<rebate<<endl;
									cout<< "\n Your total due amount is: Rs. "<<amount<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								else 
								{
									cout<< "\n Your total due amount is: Rs. "<<amount*adult<<endl;
									cout<< "\n\t Your Ticket Is Confirmed ! "<<endl; 
								}
								
							}
						}
						else 
							cout<< "\nInvalid Input! Please enter input 1 or 0"; 	
					}		
				
				
				else 
					cout<< "\nInvalid Input! Please enter input 1 - 8"; 
		}
		
		else 
		{
		cout<< "\n\n Invalid Input! Please enter input 1 - 8"<<endl;
		}
	
	

return 0;	
}
