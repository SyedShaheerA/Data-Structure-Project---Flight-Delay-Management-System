#include <fstream> 
#include <istream> 
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include<conio.h>
#include <stdio.h>
#include "conio.h"
#include <iostream>
#include <windows.h>



#include <queue>




using namespace std;

class Node
{
	
	public: //would had made geter seter if there was time
	int date;
	int month;
	int year;
	
	string OP_CARRIER;
	int OP_CARRIER_FL_NUM;
	string ORIGIN;
	string DEST;
	int CRS_DEP;
	int DEP_TIME;
	int DEP_DELAY;
	int TAXI_OUT;
	int WHEELS_OFF;
	int WHEELS_ON;
	int TAXI_IN;
	int CRS_ARR_TIME;
	int ARR_TIME;
	int ARR_DELAY;

	bool CANCELLED;
	string CANCELLATION_CODE;
	
	
	bool DIVERTED;
	
	int CRS_ELAPSED_TIME;
	int ACTUAL_ELAPSED_TIME;
	int AIR_TIME;
	int DISTANCE;
	int CARRIER_DELAY;
	int WEATHER_DELAY;
	int NAS_DELAY;
	int SECURITY_DELAY;
	int LATE_AIRCRAFT_DELAY;
	
	Node *right;
	Node *left;
	
	

		
		
	Node(Node &temp)
	{
	date= temp.date;
	month= temp.month;
	year= temp.year;
	
	OP_CARRIER= temp.OP_CARRIER;
	OP_CARRIER_FL_NUM= temp.OP_CARRIER_FL_NUM;
	//cout <<OP_CARRIER_FL_NUM<<" ";
	ORIGIN= temp.ORIGIN;
	DEST= temp.DEST;
	CRS_DEP= temp.CRS_DEP;
	DEP_TIME= temp.DEP_TIME;
	DEP_DELAY= temp.DEP_DELAY;
	TAXI_OUT= temp.TAXI_OUT;
	WHEELS_OFF= temp.WHEELS_OFF;
	WHEELS_ON= temp.WHEELS_ON;
	TAXI_IN= temp.TAXI_IN;
	CRS_ARR_TIME= temp.CRS_ARR_TIME;
	ARR_TIME= temp.AIR_TIME;
	ARR_DELAY= temp.ARR_DELAY;

	CANCELLED= temp.ARR_DELAY;
	CANCELLATION_CODE= temp.CANCELLATION_CODE;
	
	
	DIVERTED= temp.DIVERTED;
	
	CRS_ELAPSED_TIME= temp.CRS_ELAPSED_TIME;
	ACTUAL_ELAPSED_TIME= temp.ACTUAL_ELAPSED_TIME;
	AIR_TIME= temp.AIR_TIME;
	DISTANCE= temp.DISTANCE;
	CARRIER_DELAY= temp.CARRIER_DELAY;
	WEATHER_DELAY= temp.WEATHER_DELAY;
	NAS_DELAY= temp.NAS_DELAY;
	SECURITY_DELAY= temp.SECURITY_DELAY;
	LATE_AIRCRAFT_DELAY= temp.LATE_AIRCRAFT_DELAY;
	
	right= temp.right;
	left= temp.left;	
	}
	
	Node *get_left()
	{
		return left;
	}
	
	Node *get_right()
	{
		return right;
	}
	
	string get_OP_CARRIER()
	{
		return OP_CARRIER;
	}
	
	int get_OP_CARRIER_FL_NUM()
	{
		return OP_CARRIER_FL_NUM;
	}
	
	int get_CRS_DEP()
	{
		return CRS_DEP;
	}
	
	int get_DEP_DELAY()
	{
		return DEP_DELAY;
	}
	
	
	
	
	
	Node()
	{
		right= NULL;
		left= NULL;
	}
	
	Node(string a)
	{
		right= NULL;
		left= NULL;
		
		
		
		int i=0;
		//cout << a <<"\n";
	//	cout << a.size();
		while(i<a.size())
		{
			date= 0;
			string x = "";
			while(a[i] != '-')
			{
				x+= a[i];
				i++;
			}
			year=stoi(x);
			//cout << year <<"\n";
			
			i++;
			
			x = "";
			while(a[i] != '-')
			{
				x+= a[i];
				i++;
			}
			month= stoi(x);
			i++;
	//		cout << month <<"\n";
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			
			date= stoi(x);
			i++;
	//		cout << date <<"\n";
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			OP_CARRIER=x;
			i++;
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			OP_CARRIER_FL_NUM= stoi(x);
			i++;
			
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			ORIGIN=x;
			i++;
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			DEST=x;
			i++;
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x != "")
			{
			CRS_DEP= stoi(x);
			}
			else
			{
			CRS_DEP =0;	
			}
			i++;
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x != "")
			{
			DEP_TIME= stoi(x);
			}
			else
			{
				DEP_TIME=0;
			}
			i++;
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			if(x != "")
			{
			DEP_DELAY= stoi(x);
				}	
				else
				{
					DEP_DELAY =0;
				}
			i++;
			
		
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x != "")
			{
			TAXI_OUT= stoi(x);
			}
			else
			{
			TAXI_OUT=0;	
			}
			i++;			


			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			if(x != "")
			{
			WHEELS_OFF= stoi(x);
			}	
			else
			{
				WHEELS_OFF =0;
			}
			i++;		


			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if( x != "")
			{
			WHEELS_ON= stoi(x);
			}
			else
			{
				WHEELS_ON =0;
			}
			i++;

			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x !="")
			{
			TAXI_IN= stoi(x);
			}
			else
			{
			TAXI_IN = 0;	
			}
			i++;
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x != "")
			{
			CRS_ARR_TIME= stoi(x);
			}
			else
			{
				CRS_ARR_TIME=0;
			}
			i++;
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x!= "")
			{
			ARR_TIME= stoi(x);
			}
			else
			{
				ARR_TIME =0;
			}
			i++;
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
				if(x != "")
				{
			ARR_DELAY= stoi(x);
				}
				{
					ARR_DELAY= 0;
				}
			i++;
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			if(x != "")
			{
			CANCELLED= stoi(x);
			}
			else
			{
			CANCELLED	=0;
			}
			i++;
			
			
				x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x != "")
			{
			CANCELLATION_CODE= x;
			}	
			else
			{
				CANCELLATION_CODE ="";
			}
			i++;
			
			
				x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			if(x != "")
			{
			DIVERTED= stoi(x);
				}	
				else
				{
				DIVERTED =0;	
				}
			i++;
			
			
				x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			if(x != "")
			{
			CRS_ELAPSED_TIME= stoi(x);
			}
			else
			{
				CRS_ELAPSED_TIME=0;
			}
			i++;
			
			
				x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			if(x != "")
			{
			ACTUAL_ELAPSED_TIME= stoi(x);
			}
			else
			{
				ACTUAL_ELAPSED_TIME =0;
			}
			i++;
			
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			if(x != "")
			{
			AIR_TIME= stoi(x);
				}	
				else
				{
					AIR_TIME= 0;
				}
			i++;	
			
		
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x != "")
			{
			DISTANCE= stoi(x);
			}
			else
			{
				DISTANCE = 0;
			}
			i++;
		
		
		
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x != "")
			{
			CARRIER_DELAY= stoi(x);
			}
			else
			{
				CARRIER_DELAY = 0;
			}
			i++;
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if( x != "")
			{
			WEATHER_DELAY= stoi(x);
				}	
			i++;	
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if(x != "")
			{
			NAS_DELAY= stoi(x);
				}	
			i++;	
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}	
			if( x != "")
			{
			SECURITY_DELAY= stoi(x);
			}
			i++;	
			
			
			x="";
			while(a[i] != ',')
			{
				x+= a[i];
				i++;
			}
			if(x != "")
			{
				
			LATE_AIRCRAFT_DELAY= stoi(x);
				}	
			i++;	
		}
		//	cout << date <<"-" << month <<"-" << year << " "<<  OP_CARRIER;
	}	
	
	
};

class BST
{
	
	public:
		
		Node *root;
		
		BST()
		{
			root= NULL;
		}
		
		void SAVEALLDATA2()
		{
			queue<Node*> a;
			ofstream EditBan("2018.csv", ios::app);
			Node *temp= root;
			
			a.push(temp);
			
			while(!a.empty())
			{
				temp= a.front();
				a.pop();
				EditBan<< temp->date <<"-" <<temp->month <<"-"<<temp->year <<","<<temp->OP_CARRIER <<","<<temp->OP_CARRIER_FL_NUM <<","<<temp->ORIGIN <<","<<temp->DEST <<","<<temp->CRS_DEP <<","<<temp->DEP_TIME <<","<<temp->DEP_DELAY <<","<<temp->TAXI_OUT <<","<<temp->WHEELS_OFF <<  "," << temp->WHEELS_ON << ","<< temp->TAXI_IN<< ","<<temp->CRS_ARR_TIME << ","<<temp->ARR_TIME<< ","<<temp->ARR_DELAY<< ","<<temp->CANCELLED<< ","<<temp->DIVERTED<< ","<<temp->CRS_ELAPSED_TIME<< ","<<temp->ACTUAL_ELAPSED_TIME<< ","<<temp->AIR_TIME<< ","<<temp->DISTANCE<< ","<<temp->CARRIER_DELAY<< ","<<temp->WEATHER_DELAY<< ","<<temp->NAS_DELAY<< ","<<temp->SECURITY_DELAY<<","<< temp->LATE_AIRCRAFT_DELAY<<"\n";
				cout<< temp->date <<"-" <<temp->month <<"-"<<temp->year <<","<<temp->OP_CARRIER <<","<<temp->OP_CARRIER_FL_NUM <<","<<temp->ORIGIN <<","<<temp->DEST <<","<<temp->CRS_DEP <<","<<temp->DEP_TIME <<","<<temp->DEP_DELAY <<","<<temp->TAXI_OUT <<","<<temp->WHEELS_OFF <<  "," << temp->WHEELS_ON << ","<< temp->TAXI_IN<< ","<<temp->CRS_ARR_TIME << ","<<temp->ARR_TIME<< ","<<temp->ARR_DELAY<< ","<<temp->CANCELLED<< ","<<temp->DIVERTED<< ","<<temp->CRS_ELAPSED_TIME<< ","<<temp->ACTUAL_ELAPSED_TIME<< ","<<temp->AIR_TIME<< ","<<temp->DISTANCE<< ","<<temp->CARRIER_DELAY<< ","<<temp->WEATHER_DELAY<< ","<<temp->NAS_DELAY<< ","<<temp->SECURITY_DELAY<<","<< temp->LATE_AIRCRAFT_DELAY<<"\n";

				//cout <<"p: " <<temp->data <<"\n";
				
				if(temp->left)
				{
					///cout <<"    "<<temp->left->data <<" ";
					a.push(temp->left);
				}
				if(temp->right)
				{
				//	cout << temp->right->data <<" ";
					a.push(temp->right);
				}
				cout << "\n";
			}
			
		}
		
		Node *search(int CRS_DEP1, int DEP_DELAY1, int OP_CARRIER_FL_NUM, string OP_CARRIER, Node *temp)
		{int i=0;
			if(temp)
			{
				if(temp->get_CRS_DEP()== CRS_DEP1 && temp->get_DEP_DELAY()== DEP_DELAY1 && temp->get_OP_CARRIER_FL_NUM()== OP_CARRIER_FL_NUM && temp->get_OP_CARRIER()== OP_CARRIER)
				{
					cout << temp->date <<"-" <<temp->month <<"-"<<temp->year <<" "<<temp->OP_CARRIER <<" "<<temp->OP_CARRIER_FL_NUM <<" "<<temp->ORIGIN <<" "<<temp->DEST <<" "<<temp->CRS_DEP <<" "<<temp->DEP_TIME <<" "<<temp->DEP_DELAY <<" "<<temp->TAXI_OUT <<" "<<temp->WHEELS_OFF << "\n";
					cin >> i;
					return temp;
				}
				else
				{
				  return search(CRS_DEP1, DEP_DELAY1, OP_CARRIER_FL_NUM, OP_CARRIER, temp->left);
				 return search(CRS_DEP1, DEP_DELAY1, OP_CARRIER_FL_NUM, OP_CARRIER, temp->get_right());
				}
			}
			else
			{
				cout << "This data/record does not exist\n";
				return NULL;
			}
		}
		
		void search2(int CRS_DEP1, int DEP_DELAY1, int OP_CARRIER_FL_NUM, string OP_CARRIER, Node *&temp)
		{int i=0;
			if(temp)
			{
				if(temp->get_CRS_DEP()== CRS_DEP1 && temp->get_DEP_DELAY()== DEP_DELAY1 && temp->get_OP_CARRIER_FL_NUM()== OP_CARRIER_FL_NUM && temp->get_OP_CARRIER()== OP_CARRIER)
				{
					cout << temp->date <<"-" <<temp->month <<"-"<<temp->year <<" "<<temp->OP_CARRIER <<" "<<temp->OP_CARRIER_FL_NUM <<" "<<temp->ORIGIN <<" "<<temp->DEST <<" "<<temp->CRS_DEP <<" "<<temp->DEP_TIME <<" "<<temp->DEP_DELAY <<" "<<temp->TAXI_OUT <<" "<<temp->WHEELS_OFF << "\n";
					cin >> i;
						Node *prev, *tmp= temp;
						while(temp != NULL)
						{
							if(temp->right == NULL)
							{
								temp= temp->left;
								return;
							}
							else if(temp->left== NULL)
							{
								temp = temp->right;
									return;
							}
							else
							{
								tmp= temp->left;
								prev= temp;
								while(tmp->right != 0)
								{
									prev= tmp;
									tmp= tmp->right;
								}
							
									temp->date= tmp->date;
				
									temp->month= tmp->month;
									temp->year= tmp->year;
				
									temp->OP_CARRIER= tmp->OP_CARRIER;
									temp->OP_CARRIER_FL_NUM= tmp->OP_CARRIER_FL_NUM;
									//cout <<OP_CARRIER_FL_NUM<<" ";
									temp->ORIGIN= tmp->ORIGIN;
									temp->DEST= tmp->DEST;
									temp->CRS_DEP= tmp->CRS_DEP;
									temp->DEP_TIME= tmp->DEP_TIME;
									temp->DEP_DELAY= tmp->DEP_DELAY;
									temp->TAXI_OUT= tmp->TAXI_OUT;
									temp->WHEELS_OFF= tmp->WHEELS_OFF;
										temp->WHEELS_ON= tmp->WHEELS_ON;
									temp->TAXI_IN= tmp->TAXI_IN;
									temp->CRS_ARR_TIME= tmp->CRS_ARR_TIME;
									temp->ARR_TIME= tmp->AIR_TIME;
									temp->ARR_DELAY= tmp->ARR_DELAY;
			
									temp->CANCELLED= tmp->ARR_DELAY;
									temp->CANCELLATION_CODE= tmp->CANCELLATION_CODE;
				
				
									temp->DIVERTED= tmp->DIVERTED;
				
									temp->CRS_ELAPSED_TIME= tmp->CRS_ELAPSED_TIME;
									temp->ACTUAL_ELAPSED_TIME= tmp->ACTUAL_ELAPSED_TIME;
									temp->AIR_TIME= tmp->AIR_TIME;
									temp->DISTANCE= tmp->DISTANCE;
									temp->CARRIER_DELAY= tmp->CARRIER_DELAY;
									temp->WEATHER_DELAY= tmp->WEATHER_DELAY;
									temp->NAS_DELAY= tmp->NAS_DELAY;
									temp->SECURITY_DELAY= tmp->SECURITY_DELAY;
									temp->LATE_AIRCRAFT_DELAY= tmp->LATE_AIRCRAFT_DELAY;
				
									temp->right= tmp->right;
									temp->left= tmp->left;	
								
								if(prev== temp)
								{
									prev->left= tmp->left;
								}
								else
								{
									prev->right= tmp->right;
								}
							
							}
							delete tmp;
					}
						
				;
				}
				else
				{
					 search2(CRS_DEP1, DEP_DELAY1, OP_CARRIER_FL_NUM, OP_CARRIER, temp->left);
					 search2(CRS_DEP1, DEP_DELAY1, OP_CARRIER_FL_NUM, OP_CARRIER, temp->right);
				}
			}
			else
			{
					return ;
			}
		}
		
		
		
		void search3(int CRS_DEP1, int DEP_DELAY1, int OP_CARRIER_FL_NUM, string OP_CARRIER, Node *&temp)
		{int i=0;
			if(temp)
			{
				if(temp->get_CRS_DEP()== CRS_DEP1 && temp->get_DEP_DELAY()== DEP_DELAY1 && temp->get_OP_CARRIER_FL_NUM()== OP_CARRIER_FL_NUM && temp->get_OP_CARRIER()== OP_CARRIER)
				{
					cout << temp->date <<"-" <<temp->month <<"-"<<temp->year <<" "<<temp->OP_CARRIER <<" "<<temp->OP_CARRIER_FL_NUM <<" "<<temp->ORIGIN <<" "<<temp->DEST <<" "<<temp->CRS_DEP <<" "<<temp->DEP_TIME <<" "<<temp->DEP_DELAY <<" "<<temp->TAXI_OUT <<" "<<temp->WHEELS_OFF << "\n";
					cin >> i;
					
					cout <<"\n1.CHANGE ORIGIN: ";
					cout <<"\n2.CHANGE DEST:   ";
					cout <<"\n3.CHANGE DELAY:  ";
					cout <<"\n4.CHANGE WHEELS OF: ";
					cout <<"\n5.CHANGE WHEELS ON: ";
					cin>>i;
					if(i==1)
					{
						cout <<"CHANGE ORIGIN: ";
						cin>> temp->ORIGIN;
					}
					if(i==2)
					{
						cout <<"CHANGE DEST: ";
						cin>> temp->DEST;
					}
					if(i==3)
					{
						cout <<"CHANGE DELAY: ";
						cin>> temp->DEP_DELAY;
					}
					if(i==4)
					{
						cout <<"CHANGE WHEELS OF: ";
						cin >> temp->WHEELS_OFF;
					}
					if(i==5)
					{
						cout <<"CHANGE WHEELS ON: ";
						cin >> temp->WHEELS_ON;
					}
					
					return;
					
						
				
				}
				else
				{
					 search2(CRS_DEP1, DEP_DELAY1, OP_CARRIER_FL_NUM, OP_CARRIER, temp->left);
					 search2(CRS_DEP1, DEP_DELAY1, OP_CARRIER_FL_NUM, OP_CARRIER, temp->right);
				}
			}
			else
			{
					return ;
			}
		}
		
		void searchPerticularNode(int OP_CARRIER_FL_NUM)
		{
			string OP_CA;
			int CRS_DEPP1;
			int DEP_DELAYY;
			
			
			
			cout <<"Enter OP_CARRIER CODE: ";
			cin >>OP_CA;
			cout << "Enter CRS_DEP NUMBER: ";
			cin >> CRS_DEPP1;
			cout << "Enter DEP_DELAY NUMBER:";
			cin >> DEP_DELAYY;
			
			search(CRS_DEPP1, DEP_DELAYY, OP_CARRIER_FL_NUM, OP_CA, root);
		}
		
		
		void searchPerticularNode_DELETE(int OP_CARRIER_FL_NUM, Node *&root)
		{
			string OP_CA;
			int CRS_DEPP1;
			int DEP_DELAYY;
			
			
			
			cout <<"Enter OP_CARRIER CODE: ";
			cin >>OP_CA;
			cout << "Enter CRS_DEP NUMBER: ";
			cin >> CRS_DEPP1;
			cout << "Enter DEP_DELAY NUMBER:";
			cin >> DEP_DELAYY;
			
			search2(CRS_DEPP1, DEP_DELAYY, OP_CARRIER_FL_NUM, OP_CA, root);
	
			int i;
		
			
			
		}
		
		
		void searchPerticularNode_EDIT(int OP_CARRIER_FL_NUM, Node *&root)
		{
			string OP_CA;
			int CRS_DEPP1;
			int DEP_DELAYY;
			
			
			
			cout <<"Enter OP_CARRIER CODE: ";
			cin >>OP_CA;
			cout << "Enter CRS_DEP NUMBER: ";
			cin >> CRS_DEPP1;
			cout << "Enter DEP_DELAY NUMBER:";
			cin >> DEP_DELAYY;
			
			search3(CRS_DEPP1, DEP_DELAYY, OP_CARRIER_FL_NUM, OP_CA, root);
		
			int i;
			
			
			
		}
		
		
		
		void print(Node *temp)
		{
			if(temp)
			{
				print(temp->left);
				cout << temp->date <<"-" <<temp->month <<"-"<<temp->year <<" "<<temp->OP_CARRIER <<" "<<temp->OP_CARRIER_FL_NUM <<" "<<temp->ORIGIN <<" "<<temp->DEST <<" "<<temp->CRS_DEP <<" "<<temp->DEP_TIME <<" "<<temp->DEP_DELAY <<" "<<temp->TAXI_OUT <<" "<<temp->WHEELS_OFF <<  " " << temp->WHEELS_ON << " "<< temp->TAXI_IN<< " "<<temp->CRS_ARR_TIME << " "<<temp->ARR_TIME<< " "<<temp->ARR_DELAY<< " "<<temp->CANCELLED<< " "<<temp->DIVERTED<< " "<<temp->CRS_ELAPSED_TIME<< " "<<temp->ACTUAL_ELAPSED_TIME<< " "<<temp->AIR_TIME<< " "<<temp->DISTANCE<< " "<<temp->CARRIER_DELAY<< " "<<temp->WEATHER_DELAY<< " "<<temp->NAS_DELAY<< " "<<temp->SECURITY_DELAY<<" "<< temp->LATE_AIRCRAFT_DELAY<<"\n";
				print(temp->right);
			}
		}
		
		
		
		void insert(Node a, Node *&temp)
		{
		
			if(temp == NULL)
			{
				temp= new Node(a);
				temp->left=  NULL;
				temp->right= NULL;
				return;
			}
			
			
			if(temp->DEP_DELAY < a.DEP_DELAY)
			{
				insert(a, temp->right);
			}
			else
			{
				insert(a, temp->left);
			}
			
		}
		void minDelay(Node* node) 
		{ 
			Node* temp = node; 
			while (temp->left != NULL) 
			{ 
			    temp = temp->left; 
			} 
			cout << temp->date <<"-" <<temp->month <<"-"<<temp->year <<" "<<temp->OP_CARRIER <<" "<<temp->OP_CARRIER_FL_NUM <<" "<<temp->ORIGIN <<" "<<temp->DEST <<" "<<temp->CRS_DEP <<" "<<temp->DEP_TIME <<" "<<temp->DEP_DELAY <<" "<<temp->TAXI_OUT <<" "<<temp->WHEELS_OFF <<  " " << temp->WHEELS_ON << " "<< temp->TAXI_IN<< " "<<temp->CRS_ARR_TIME << " "<<temp->ARR_TIME<< " "<<temp->ARR_DELAY<< " "<<temp->CANCELLED<< " "<<temp->DIVERTED<< " "<<temp->CRS_ELAPSED_TIME<< " "<<temp->ACTUAL_ELAPSED_TIME<< " "<<temp->AIR_TIME<< " "<<temp->DISTANCE<< " "<<temp->CARRIER_DELAY<< " "<<temp->WEATHER_DELAY<< " "<<temp->NAS_DELAY<< " "<<temp->SECURITY_DELAY<<" "<< temp->LATE_AIRCRAFT_DELAY<<"\n";
		} 
		void maxDelay(Node* node) 
		{ 
			Node* temp = node; 
			while (temp->right != NULL) 
			{ 
			    temp = temp->right; 
			} 
			cout << temp->date <<"-" <<temp->month <<"-"<<temp->year <<" "<<temp->OP_CARRIER <<" "<<temp->OP_CARRIER_FL_NUM <<" "<<temp->ORIGIN <<" "<<temp->DEST <<" "<<temp->CRS_DEP <<" "<<temp->DEP_TIME <<" "<<temp->DEP_DELAY <<" "<<temp->TAXI_OUT <<" "<<temp->WHEELS_OFF <<  " " << temp->WHEELS_ON << " "<< temp->TAXI_IN<< " "<<temp->CRS_ARR_TIME << " "<<temp->ARR_TIME<< " "<<temp->ARR_DELAY<< " "<<temp->CANCELLED<< " "<<temp->DIVERTED<< " "<<temp->CRS_ELAPSED_TIME<< " "<<temp->ACTUAL_ELAPSED_TIME<< " "<<temp->AIR_TIME<< " "<<temp->DISTANCE<< " "<<temp->CARRIER_DELAY<< " "<<temp->WEATHER_DELAY<< " "<<temp->NAS_DELAY<< " "<<temp->SECURITY_DELAY<<" "<< temp->LATE_AIRCRAFT_DELAY<<"\n";
		} 
};

class BNode{
	public:
	int carrNum;
	BST totree;
	BNode *next;
	BNode()
	{
		carrNum=0;
		next=NULL;
	
	}
	BNode(BST n,int a)
	{
		carrNum=a;
		totree=n;
		next=NULL;

	}
};

class List{
	public:
		BNode *head;
	
		void insertAtHead(BST n,Node *record,int carrnum)
		{
			if(head==NULL)
			{
				BNode *newnode=new BNode(n,carrnum);
				newnode->totree.insert(*record,newnode->totree.root);
		
				head=newnode;
			}
			else
			{
				BNode *newnode=new BNode(n,carrnum);
				newnode->totree.insert(*record,newnode->totree.root);
			    newnode->next=head;
		
			    head=newnode;
			}
		}
		void insertAtEnd(BST n,Node record,int carrnum)
		{
			BNode *newnode=new BNode(n,carrnum);
			newnode->totree.insert(record,newnode->totree.root);
			BNode *temp;
			temp=head;
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		
			newnode->next=head;
		
		}
		
		BNode* searchlist(int carr)
		{
			BNode *temp=head;
			while(temp->carrNum!=carr)
			{
				temp=temp->next;
				if(temp==NULL)
				{
					cout << "No such flight number exists\n";
					break;
				}
			}
			return temp;
		}
		
		
		void deleteTreeNode(int crr)
		{
			BNode *temp=searchlist(crr);
			temp->totree.searchPerticularNode_DELETE(crr,temp->totree.root);
		}
		
		List()
		{
			head=NULL;
		}
};

class Carrier{
	public:
		bool free;
		
		List treelist;
		Carrier()
		{
			free=true;
	
		}
};
class HashBST{
	public:
		int size;
		Carrier *arr;
		int hash(int crr)
		{
			return crr%size;
		}
		void addNodeHash(int a,Node *newnode)
		{
			int b=hash(a);
			BNode *temp=arr[b].treelist.searchlist(a);
			arr[b].treelist.insertAtHead(temp->totree,newnode,a);
		
		}
		int insertHash(int a,Node *newnode)
		{
			int b=hash(a),i=0;
			BST t;
		
					BNode *temp=arr[b].treelist.head;
					if(temp!=NULL)
					{
						while( temp->carrNum!=a)
						{
							temp=temp->next;
							
							if(temp==NULL)
							{
								break;
							}
						}
						if(temp!=NULL)
						{
							temp->totree.insert(*newnode,temp->totree.root);
						}
						else
						{
							arr[b].treelist.insertAtHead(t,newnode,a);
						}
					}
					else
					{
						arr[b].treelist.insertAtHead(t,newnode,a);
					}
					return 0;
			
		}
		void findMaxDelay(int crr)
		{
			int b=hash(crr);
			BNode *temp=arr[b].treelist.searchlist(crr);
			temp->totree.maxDelay(temp->totree.root);
		}
		void findMinDelay(int crr)
		{
			int b=hash(crr);
			BNode *temp=arr[b].treelist.searchlist(crr);
			temp->totree.minDelay(temp->totree.root);
		}
		void printspecified(int a)
		{
			int b=hash(a);
			BNode *temp=arr[b].treelist.searchlist(a);
			if(temp!=NULL)
			{
				temp->totree.searchPerticularNode(a);
			}
			else
			{
				cout << "No such flight number exists\n";
			}
		}
		
		
		void printALLData()
		{	
			for(int i=1; i<3250; i++)
			{
				int b= hash(i);
				BNode *temp=arr[b].treelist.head;
				while(temp !=  NULL)
				{
					temp->totree.print(temp->totree.root);
					temp= temp->next;
				}
			}
		}
		
		void saveALLData()
		{
			
				ofstream EditBan("blah.txt", ios::out); 
				EditBan<<"";
		
			for(int i=1; i<3250; i++)
			{
				int b= hash(i);
				BNode *temp=arr[b].treelist.head;
				while(temp !=  NULL)
				{
					temp->totree.SAVEALLDATA2();
				
					temp= temp->next;
				}
			}
		}
	
	
		void print_ALL_Related_DATA(int a)
		{
			int b=hash(a);
			BNode *temp=arr[b].treelist.head;
					if(temp!=NULL)
					{
						while(temp->carrNum!=a)
						{
							temp=temp->next;
							
							if(temp==NULL)
							{
								break;
							}
						}
						if(temp!=NULL)
						{
							temp->totree.print(temp->totree.root);
						}
						else
						{
							cout << "No such flight number exists\n";
						}
					}
					else
					{
						cout << "No such flight number exists\n";
					}
			
		}
		void editSpecificData(int a)
		{
			int b=hash(a);
			BNode *temp=arr[b].treelist.searchlist(a);
			temp->totree.searchPerticularNode_EDIT(a,temp->totree.root);
		}
		void deleteSpecific(int a)
		{
			int b=hash(a);
			arr[b].treelist.deleteTreeNode(a);
		}
		HashBST()
		{
			size=3250;
			arr=new Carrier[size];
		}
		HashBST(int a)
		{
			size=a;
			arr=new Carrier[size];
		}
};
		
		



class Menu
{

public:
	HashBST MENU_OPTION; //FUNCTION IS MENU
	
	void loadFunction()
	{
		string ARR_DELAY,CANCELLED,	CANCELLATION_CODE,	DIVERTED,	CRS_ELAPSED_TIME,	ACTUAL_ELAPSED_TIME	,AIR_TIME,	DISTANCE,	CARRIER_DELAY,	WEATHER_DELAY,	NAS_DELAY,	SECURITY_DELAY,	LATE_AIRCRAFT_DELAY,	Unnamed;
		string comma[13];
		ifstream EditBan("2018.csv", ios::in);
		//ifstream EditBan("blah.txt", ios::in); //back up txt
			int i=0;
			
			
				EditBan>> ARR_DELAY ;
				{
					i=i+1;
			
				}
				
				EditBan>> ARR_DELAY ;
				{
					i=i+1;
				cout<<	ARR_DELAY << "\n"; 			
				}
			
				cout <<"LOADING";
				int j=0;
				
				while( EditBan>>ARR_DELAY)
				{
					
					Node *z= new Node(ARR_DELAY);
					MENU_OPTION.insertHash(z->OP_CARRIER_FL_NUM, z);
					j++;
					if(j==100000)
					{
						cout << "|";
						j=0;
					}
					
					i=i+1;
					
			
				}
				
			
				
				cout<<"\n" <<i <<"\n";	
				return ;
	}

};
int main()
{
	
	Menu options;
	options.loadFunction();
	int i=5;
	int key;
	while(i >0)
	{
		system("cls");
		cout <<"ENTER 1 TO PRINT ALL OF SPECIFIC FLIGHT: \n";
		cout <<"ENTER 2 TO PRINT SPECIFIC DATA OF SPECIFIC FLIGHT: ";
		cout <<"\nEnter 3 TO DELETE SPECIFIC DATA: ";
		cout <<"\nENTER 4 TO EDIT SPECIFIC DATA: ";
		cout <<"\nENTER 5 SAVE ALL DATA: ";
		cout <<"\nENTER 6 TO FIND MINIMUM DELAY";
		cout <<"\nENTER 7 TO FIND MAXIMUM DELAY";
		cout <<"\nEnter 8 TO PRINT ALL DATA";
		cout <<"\n" <<"press 0 to exit: ";
		cin >> i;
		
		if(i == 1)
		{
			string p;
			cout <<"ENTER OP FL NUM: ";
			cin >> key;	
			options.MENU_OPTION.print_ALL_Related_DATA(key);
			cout << "Press any key to proceed\n";
			cin >> p;
		}
		else if(i==2)
		{
			string p;
			cout <<"ENTER OP FL NUM: ";
			cin >> key;	
			options.MENU_OPTION.printspecified(key);
			cin >> p;
		}
		else if(i==3)
		{
			string p;
			cout <<"Enter OP FL NUM: ";
			cin >> key;
			options.MENU_OPTION.deleteSpecific(key);
			cin >> p;
		}
		else if(i==4)
		{
			string p;
			cout <<"Enter OP FL NUM: ";
			cin >> key;
			options.MENU_OPTION.editSpecificData(key);
			cin >> p;
			
		}
		else if(i==5)
		{
			options.MENU_OPTION.saveALLData();
			cin>>key;
		}
		else if(i==6)
		{
			string p;
			cout <<"Enter OP FL NUM: ";
			cin >> key;
			options.MENU_OPTION.findMinDelay(key);
			cin >> p;
		}
		else if(i==7)
		{
			string p;
			cout <<"Enter OP FL NUM: ";
			cin >> key;
			options.MENU_OPTION.findMaxDelay(key);
			cin >> p;
		}
		else if(i==8)
		{
			options.MENU_OPTION.printALLData();
			cin >> key;
		}
		
	}

	return 0;
}
