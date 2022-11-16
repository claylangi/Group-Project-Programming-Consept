#include <iostream>
using namespace std;

int main()
{
	bool complete = false;
	while(complete!= true){
		string sd,smp,sma;
		cout<< "Are you elementary school?(yes or no)"<< endl;
		cin >> sd ;
		 if (sd != "yes") {
		    cout<< "Are you junior high school student? (yes or no)"<< endl;
		    cin >> smp;
		    if (smp != "yes") {
		        cout<< "Are you senior high school? (yes or no)"<< endl;
			    cin >> sma;
			    if (sma != "yes") {
			        cout << "School level was not found, sorry" <<endl;
					}
				else{ 
					complete = true;
					}}
			else { 
			complete = true;
				}} 
		else { 
		complete = true;
		}
		if (sd=="yes"||smp== "yes"||sma=="yes") {
		cout << "Please choose the subject that you want to practice: \n 1. Science \n 2. Social \n 3. History \n" << endl;
		}
		else { 
		complete = false;
		}
	}
	
	
	complete = false;
	while(!complete) {
	int subject;
	cin >> subject;
	if (subject == 1) {
	cout << "You have choosen science exercise" << endl;
	cout << "Do you want to continue?" << endl;
	} else if (subject == 2) {
	cout << "You have choosen social exercise" << endl;
	cout << "Do you want to continue?" << endl;
	} else if (subject == 3) {
	cout << "You have choosen history exercise" << endl;
	cout << "Do you want to continue?" << endl;
	} else {
	cout<< "Please try again " << endl;
	}
	
	string choose;
	cin >> choose;
	if(choose == "yes" && subject == 1) {
	cout<<" Science Questions" <<endl;}
	if(choose == "yes" && subject == 2) {
	cout<<" Social Questions" <<endl;}
	if(choose == "yes" && subject == 3) {
	cout<<" History Questions" <<endl;}
	complete = true;
	}
	return 0;
}