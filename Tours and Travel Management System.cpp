#include<iostream>// for input output
#include<conio.h>//getch()
#include<windows.h>// for gotoxy
#include<fstream>//for filing
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip>//for seting number after point
#include<conio.h>
#include<string.h>// strcpy,strcmp etc
#include<dos.h>
#include<unistd.h>
#include <time.h> // for time
using namespace std;
long int code;

	void gotoxy(short x, short y) {
		COORD pos = {x, y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
	void get_time() {
		time_t t;
		time(&t);
		printf("\n\t\t\t\t\t\t%s",ctime(&t));
	}
	void get_string(char n[20])	{
		int i;
		int valid = 0;
		int count = 0;
		while(1) {
			while(count!=0)	{
				cout << "Enter name again";
				cin >> n;
				break;
			}	
			for(i=0;i<strlen(n);i++) {
				if(isalpha(n[i])==0) {
					valid = 0;
				}
				else {
					valid = 1;
				}
			}
			if(valid==0) {
				cout << "Your name contains invalid characters" << endl;
				count++;
				continue;
			}
			else {
				n[0] = toupper(n[0]);
				break;
			}
		}
	}
class PersonalDetails { //class for collecting the personal details
  
	int trvlcode;
	int  age[20];
	char name[20][20];
	char add[50];
	char phnum[15];
	char sex[20];
	char passnum[10][10];
	char registeredName[30];
	int num;
	int numppl;
    public:
		int getnoOfMember() {
		  return num;
		}
		void getmemberName() {
		   registeredName;
		}
		int travelCode() {
		  return trvlcode;
		}
		void p_input(int cd) {  //input func() of class1
			trvlcode=cd;
   		    int num=0;
		   	system("CLS");
		  	cout << endl << "            :::::::::::::::::::::: PERSONAL DETAILS ::::::::::::::::::::::" << endl << endl;
		  	cout<< endl << "             Please fill in the details:" << endl;
			cout << endl << "                        1.Register Name: ";
		  	fflush(stdin); 
		    gets(registeredName);
			get_string(registeredName);
			cout << "                        2.Address: ";
			gets(add);
		    cout << "                        3.Contact Number: ";
		    gets(phnum);
		    cout << endl << endl << "Enter The No of People Travelling: ";
		    cin >> numppl;
		    system("CLS");
		    if(numppl>0) {
		    cout<<"\n\t\tPlease Enter The Details of each Member/Members: "<<endl << endl;
		    for(int i=0;i<numppl;i++) {
		      cout<<endl<<"\n\t\tMember "<<i+1;
		      cout<<"\n\t\t~~~~~~~~";
		      fflush(stdin);
		      cout<<"\n\n\t\tName: ";
		      gets(name[i]);
		      get_string(name[i]);
		    while(1) {
		    fflush(stdin);
		    cout<<"\n\t\tAge: ";
		    cin>>age[i];
		    if(age[i]>160 || age[i]<1){
		    	printf("You have entered invalid age,Try again");
		    	continue;
		    }else{
				break;
			}
		} 
    while(1) {
    fflush(stdin);
    cout<<"\n\t\tSex (M/F): ";
    cin>>sex[i];
    sex[i] = toupper(sex[i]);
    if(sex[i] == 'M' || sex[i] == 'F'){
        break;
    }
	else {
    	printf("You have entered invalid character, please select M for male or F for female\n");
    }
}
      fflush(stdin);
      cout<<"\n\t\tPassport Number: ";
      gets(passnum[i]);
      if(age[i]>5)
      {
	num++;    //to calculate no of travellers below 5 yrs
      }
    }
  }
}
void p_output() { //output func() of class1 
  
  system("CLS");
  cout<<"\n\n\t******************** PERSONAL DETAILS ********************"<<endl;
  cout<<"\n\n\t\t\tFamily Name:\t "<<registeredName<<endl;
  cout<<"\t\t\tAddress:\t "<<add<<endl;
  cout<<"\t\t\tPhone Number:\t "<<phnum<<endl;
  cout<<"\n\n\tName\t\tAge\t\tSex\t\tPassport Number\n"<<endl;
  for(int i=0;i<numppl;i++) {
    cout<<"\t"<<name[i]<<"\t\t"<<age[i]<<"\t\t"<<sex[i]<<"\t\t"<<passnum[i]<<endl;
  }
  getch();
}
}pob;
class travdetails { //: public User   //class which holds the travel details
  int trvtcode;
  int day;
  int month;
  int year;
  int num1;
  int bdg_pt;
  int go_pt;
  int cab;
  int pool;
  int gym;
  int sports;
  int salon;
  int spa;
  int theatre;
  public:
  void initial();
  void t_input(int);
  void t_output();
  void compute();
  int gtcode();
  void accept(int);
}tob;
void travdetails::initial() {
  	pool=gym=theatre=sports=salon=0;
}
void travdetails::accept(int c) {
	c=1;
  	num1=c;
}
int travdetails::gtcode() {
  return trvtcode;
}
void travdetails::t_input(int cd) {//input func()-class2 
  tob.initial();
  trvtcode=cd;
  int i=1,opt;
   system("CLS");
  do {
    system("CLS");
    cout<<endl;
    cout<<"\n\n\t\t\t\t_||__TRAVEL DETAILS__";
    cout<<"\n\t\t\t\t\\___________________/";
    cout<<"\n\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~";
    cout<<"\n\n\t\tPlease enter the following details for your journey:";
    cout<<"\n\n\t\t*Note:Options marked with '*' are compulsory.\n\t\t\tPlease do select them.";
    cout<<"\n\n\n\t\t\t\t*1.Boarding Point\n\t\t\t\t*2.Destination\n\t\t\t\t*3.Date of Departure\n\t\t\t\t 4.Cab\n\t\t\t\t 5.Swimming Pool\n\t\t\t\t 6.Gymnasuim\n\t\t\t\t 7.Sports\n\t\t\t\t 8.Salon\n\t\t\t\t 9.Spa\n\t\t\t\t 10.Theatre\n\t\t\t\t 11.Back\n\n\t\t\t\t ";
    cin>>opt;
    switch(opt) {
      case 1: system("CLS");
	     cout<<"\n\n\n\t\t\tSelect Boarding point:\n\n\t\t\t1.Karachi\n\n\t\t\t2.Islamabad\n\n\t\t\t3.Peshawar\n\n\t\t\t ";
	     cin>>bdg_pt;
	     //break;
      case 2: system("CLS");
	     cout<<"\n\n\t\t\t****** Select Destination ******\n\n\n";
	     cout<<"\t 1.New York\t\t6.Dubai\t\t\t11.Antananariv";
	     cout<<"\n\n\t 2.Miami\t\t7.Lisbon\t\t12.Cairo\n\n";
	     cout<<"\t 3.Rio De Janeiro\t8.London\t\t13.Perth";
	     cout<<"\n\n\t 4.Colombo\t\t9.Copenhagen\t\t14.Sydney";
	     cout<<"\n\n\t 5.Hong Kong\t\t10.Cape Town\t\t15.Wellington\n\n\n\n\n\t\t\t\t  ";
	     cin>>go_pt;
      case 3: system("CLS");
	     cout<<"\n\n\t Date of Departure ";
	     cout<<"\n\n   * Note:Format for entering:Day(press enter)Month(press enter)Year *";
	     fflush(stdin);
	
		 cout<<"\n\n\t\tEnter your preferred date of departure: " << endl;
	     cin>>day;
	     gotoxy(2,7);
		 cout << " / ";
		 cin >> month;
		 gotoxy(7,7);
		 cout << " / ";
		 cin >> year;
		 	if ((day > 31) || (month > 12) || (year > 2022)) 
	     	cout << "Enter a valid date";
	     break;
      case 4: system("CLS");
	     cout<<"\n\n\t\t\tEnter The Choice Of Cab\n\n\t\t\t1.AC\n\n\t\t\t2.Non AC\n\n\t\t\t ";
	     cin>>cab;
	     break;
      case 5: system("CLS");
	     cout<<"\n\n\t\tDo You Like To Avail The Facility Of A Swimming Pool\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
	     cin>>pool;
	  //   pool--;
	     break;
      case 6: system("CLS");
	     cout<<"\n\n\t\tDo You Like To Avail The Facility Of A Gymnasium\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
	     cin>>gym;
	   //  gym--;
	     break;
      case 7: system("CLS");
	     cout<<"\n\n\t\tDo You Like To Avail The Sports Facilities Offered\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
	     cin>>sports;
	   //  sports--;
	     break;
      case 8: system("CLS");
	     cout<<"\n\n\t\tDo You Like To Avail The Facility Of Beauty Salon\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
	     cin>>salon;
	//     salon--;
	     break;
     case 9: system("CLS");
	     cout<<"\n\n\tDo You Like To Avail The Facility Of Spa and Ayurvedic Treatment\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
	     cin>>spa;
	 //    spa--;
	     break;
     case 10: system("CLS");
	     cout<<"\n\n\t\tDo You Like To Avail The Facility Of Amphitheatre\n\n\t\t\t1.No\n\n\t\t\t2.Yes\n\n\t\t\t ";
	     cin>>theatre;
	 //    theatre--;
	     break;
     case 11: 
	     i=0;
	     break;
	 default:
	 	 cout<<"Invalid input";
	 	 cout<<"Enter valid input";
	 	 cin>>opt;
	 	 break;
    }
  }while(i==1);
}
void boardpt(int c) { //for easy o/p
  if(c==1)
  cout<<"Karachi\t";
  if(c==2)
  cout<<"Islamabad\t";
  if(c==3)
  cout<<"Peshawar\t";
}
void dest(int d) {  //for easy o/p
  switch(d) {
    case 1:cout<<"New York";
	   break;
    case 2:cout<<"Miami";
	   break;
    case 3:cout<<"Rio De Janero";
	   break;
    case 4:cout<<"Colombo";
	   break;
    case 5:cout<<"Hong Kong";
	   break;
    case 6:cout<<"Dubai";
	   break;
    case 7:cout<<"Lisbon";
	   break;
    case 8:cout<<"London";
	   break;
    case 9:cout<<"Copenhagen";
	   break;
   case 10:cout<<"Cape Town";
	   break;
   case 11:cout<<"Antananriv";
	   break;
   case 12:cout<<"Cairo";
	   break;
   case 13:cout<<"Perth";
	   break;
   case 14:cout<<"Sydney";
	  break;
   case 15:cout<<"Willington";
	 break;
  }
}
void travdetails::t_output() { //output func()-class2
  system("CLS");
  cout<<"\n\n\t******************* TRAVEL DETAILS *********************";
  cout<<"\n\n\t\tBoarding Point: ";
  boardpt(bdg_pt);
  cout<<"\n\n\t\tDestination: ";
  dest(go_pt);
  cout<<"\n\n\t\tDate of departure: ";
  cout<<day<<"/"<<month<<"/"<<year;
  cout<<"\n\n\t\tCab for your travel to visit places/hotel/restaurant: ";
  switch(cab) {
    case 1:cout<<"AC cab";
	   break;
    case 2:cout<<"Non-AC cab";
	   break;
  }
  cout<<"\n\n\n\tFacilities availed for are:";
  if(pool==1)
  cout<<"\n\t\t\t\t    Swimming Pool";
  if(gym==1)
  cout<<"\n\t\t\t\t    Gymnasuim";
  if(sports==1)
  cout<<"\n\t\t\t\t    Sports Facilities";
  if(spa==1)
  cout<<"\n\t\t\t\t    Spa and Ayurvedic Treatment";
  if(salon==1)
  cout<<"\n\t\t\t\t    Beauty Salon";
  if(theatre==1)
  cout<<"\n\t\t\t\t    Theatre";
  char op;
  while(1){
  fflush(stdin);
  cout<<"\n\t\t\t\t    If you want to see your hotel and a place you are wishing to visit /n Press 'Y' for Yes and 'N' for No : ";
  cin>>op;
 // op = toupper(op);
    if(op == 'Y' || op == 'N') {
        break;
    }
	else {
    	printf("You have entered invalid character, please select Y for yes or N for no\n");
    }
}
  switch(op) {
  	case 'Y':{
 		char str2[50];
  		cout << endl << "Enter What Do You Need To Research For Hotels and Places for visit: "; 
        cin.getline(str2, 50);
		char str1[40] = "START https://www.google.com/search?q="; 
    	for(int i = 0; str2[i]; i++){
		if(str2[i] == ' '){ str2[i] = '+'; 
		}
	}
    strcat(str1, str2); system(str1);
}
    break;
    case 'N':
    	{
 	   cout<<"Thanks for register";
 }
    break;
    default:
   	   cout<<"Invalid Input";
    break;
}
 getch();
  }
void family(int c,int&flag) { //to display registeredName+to check for record in file
  flag=0;
  system("CLS");
  ifstream ifl("PersonalDetails.txt",ios::binary);
  if(!ifl)
  cout<<"\nError";
  ifl.read((char*)&pob,sizeof(pob));
  while(!ifl.eof()) {
    if(pob.travelCode()==c) {
      flag=1;
      break;
    }
    ifl.read((char*)&pob,sizeof(pob));
  }
  if(flag==1) {
    cout<<"\n\n\t\t ****** ";
    pob.getmemberName();
    cout<<"'s FAMILY RECORD ******";
  }
  else {
    cout<<"\nError in locating record!!";
  }
  ifl.close();
}
void editp(int c) { //to edit personal details
  ofstream ofl2("temp1.txt",ios::binary);
  if(!ofl2)
  cout<<"Error While Opening File";
  ifstream ifl4("PersonalDetails.txt",ios::binary);
  if(!ifl4)
  cout<<"Error While Opening File";
  ifl4.read((char*)&pob,sizeof(pob));
  while(!ifl4.eof()) {
    if(pob.travelCode()==c) {
       system("CLS");
      cout<<"Please Enter the New details of the record"<<endl;
      pob.p_input(c);
      ofl2.write((char*)&pob,sizeof(pob));
      cout<<"\n\t\t\tModification Succesful!!!";
      ifl4.read((char*)&pob,sizeof(pob));
    }
    else {
      ofl2.write((char*)&pob,sizeof(pob));
      ifl4.read((char*)&pob,sizeof(pob));
    }
  }
  remove("PersonalDetails.txt");
  rename("temp1.txt","PersonalDetails.txt");
  ifl4.close();
  ofl2.close();
  getch();
}
void editt(int c) { //to edit travel details
  ofstream ofl2("temp1.txt",ios::binary);
  if(!ofl2)
  cout<<"Error While Opening File";
  ifstream ifl4("TravelDetails.txt",ios::binary);
  if(!ifl4)
  cout<<"Error While Opening File";
  ifl4.read((char*)&tob,sizeof(tob));
  while(!ifl4.eof()) {
    if(tob.gtcode()==c) {
       system("CLS");
      cout<<"Please Enter the New details of the record"<<endl;
      tob.t_input(c);
      ofl2.write((char*)&tob,sizeof(tob));
      cout<<"\n\t\t\tModification Succesful!!!";
      ifl4.read((char*)&tob,sizeof(tob));
    }
    else {
      ofl2.write((char*)&tob,sizeof(tob));
      ifl4.read((char*)&tob,sizeof(tob));
    }
  }
  remove("TravelDetails.txt");
  rename("temp1.txt","TravelDetails.txt");
  ifl4.close();
  ofl2.close();
  getch();
}
void deletion(int c) {  //common delete func()
  ofstream ofl2("temp1.txt",ios::binary);
  if(!ofl2)
  cout<<"Error While Opening File";
  ifstream ifl4("PersonalDetails.txt",ios::binary);
  if(!ifl4)
  cout<<"Error While Opening File";
  ifl4.read((char*)&pob,sizeof(pob));
  while(!ifl4.eof()) {
    if(pob.travelCode()!=c) {
      ofl2.write((char*)&pob,sizeof(pob));
    }
    ifl4.read((char*)&pob,sizeof(pob));
  }
  remove("PersonalDetails.txt");
  rename("temp1.txt","PersonalDetails.txt");
  ofl2.close();
  ifl4.close();
  ofstream ofl3("temp2.txt",ios::binary);
  if(!ofl3)
  cout<<"\nError While Opening File";
  ifstream ifl5("TravelDetails.txt",ios::binary);
  if(!ifl5)
  cout<<"\nError While Opening File";
  ifl5.read((char*)&tob,sizeof(tob));
  while(!ifl5.eof()) {
    if(tob.gtcode()!=c) {
      ofl3.write((char*)&tob,sizeof(tob));
    }
    ifl5.read((char*)&tob,sizeof(tob));
  }
  ofl3.close();
  ifl5.close();
  remove("TravelDetails.txt");
  rename("temp1.txt","TravelDetails.txt");
  cout<<"\n\n\t\tDeletion Completed!";
  getch();
}
void travdetails::compute() {  //compution and bill generation
  long int gttl=0,hr,dcst,cab,swpool=5000,gm=2000,spfts=7500,slon=6000,sp=20000,ttr=500;//dck,
  switch(go_pt) {
    case 1:;
    case 2:;
    case 3:hr=30*24;
	   dcst=250000;
	   break;
    case 4:;
    case 5:;
    case 6:hr=7*24;
	   dcst=75000;
	   break;
    case 7:;
    case 8:;
    case 9:hr=24*24;
	   dcst=130000;
	   break;
   case 10:;
   case 11:;
   case 12:hr=15*24;
	   dcst=100000;
	   break;
   case 13:;
   case 14:;
   case 15:hr=12*24;
	   dcst=120000;
	   break;
  }
  switch(cab) {
    case 1:cab=10000;
	   break;
    case 2:cab=8000;
	   break;
  }
   system("CLS");
  cout<<"\n\n\t\t:::::::::::::::::::::: BILL ::::::::::::::::::::::::::";
  cout<<"\n\n\t\tBoarding point:\t\t ";
  boardpt(bdg_pt);
  cout<<"\n\n\t\tDestination:\t\t ";
  dest(go_pt);
  cout<<"\n\n\t\tDate of Departure: ";
  cout<<day<<" / "<<month<<" / "<<year;
   hr=hr/24;         //to calculate date of arrival
  day=day+hr;
  if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) {
    if(day>31) {
      month=month+1;
      day=day%31;
    }
  }
  if(month==4||month==6||month==9||month==11) {
    if(day>30) {
      month=month+1;
      day=day%30;
    }
  }
  if(month==2) {
    if(day>28) {
      month=month+1;
      day=day%28;
    }
  }
  if(month==13) {
    month=1;
    year++;
  }
  cout<<"\n\n\t\tDate of Arrival: ";
  cout<<day<<"/"<<month<<"/"<<year;
  cout<<"\n\n\t\tSubject\t\tCost(for 1)\tNo of ppl\tTotal";
  cout<<"\n\n\t\tTravel\t\t"<<dcst<<"\t\t   "<<num1<<"\t\t"<<num1*dcst;
  gttl+=num1*dcst;
  cout<<"\n\t\tCab\t\t"<<cab<<"\t\t   "<<num1<<"\t\t"<<cab*num1;
  gttl+=cab*num1;
  if(pool==1) {
    cout<<"\n\t\tSwimming Pool\t"<<swpool<<"\t\t   "<<num1<<"\t\t"<<swpool*num1;
    gttl+=swpool*num1;
  }
  if(gym==1) {
    cout<<"\n\t\tGym\t\t"<<gm<<"\t\t   "<<num1<<"\t\t"<<gm*num1;
    gttl+=gm*num1;
  }
  if(sports==1) {
    cout<<"\n\t\tSports\t\t"<<spfts<<"\t\t   "<<num1<<"\t\t"<<spfts*num1;
    gttl+=spfts*num1;
  }
  if(salon==1) {
    cout<<"\n\t\tSalon\t\t"<<slon<<"\t\t   "<<num1<<"\t\t"<<slon*num1;
    gttl+=slon*num1;
  }
  if(spa==1) {
    cout<<"\n\t\tSpa\t\t"<<sp<<"\t\t   "<<num1<<"\t\t"<<sp*num1;
    gttl+=dcst*num1;
  }
  if(theatre==1) {
    cout<<"\n\t\tTheatre\t\t"<<ttr<<"\t\t   "<<num1<<"\t\t"<<ttr*num1;
    gttl+=ttr*num1;
  }
  cout<<"\n\n\n\t\t\t Grand Total:Rs ";
  if(gttl>100000) {   //to provide comma's for grandtotal 
    cout<<gttl/100000<<",";
    gttl=gttl%100000;
  }
  if(gttl>1000) {
    cout<<gttl/1000<<",";
    gttl=gttl%1000;
  }
  cout<<gttl;
  if(gttl<10)
  cout<<"00";
  cout<<" ";
  cout<<"\n\n\t! All Travellers below the age of 5 have not been charged !";
  getch();
}
	
class Admin : public travdetails {
	
	string adminame;
	string password;
	public:
		int login_attempt = 0;
 		void admin() {	 
			while (1) {
		        cout << "Please enter your User name: ";   
				cin >> adminame;
		        cout << "Please enter your User password: ";   
				cin >> password;
		        
				if (adminame == "admin" && password == "admin123") {
		            cout << "Welcome!\n";
		            break;
		            cout<<" ============= Admin Menu =============";
				}
		        else 
		            cout << "Invalid Username or password" << endl << '\n';
					  
		    login_attempt++;
    		if (login_attempt == 5) {
            	cout << "Too many login attempts! The program will now terminate.";
            	exit(0);
			}
 		}
 	}
};
int main() {
  Admin ob;
    system("CLS");
    system("color F0");
    get_time();
    
    cout<< endl <<"\t\t                   ....WELCOME TO THE TRAVEL MANAGEMENT SYSTEM....\n";
    cout<<"\t\t                 \n\n";
  	cout<<"      ~     ~             ~      ~                      \n";
  	cout<<"    ~                 ~               ~                 \n";
  	cout<<"     ~          ~         ~        ~      ~             \n";
  	cout<<"	      ~       |--\\                                   \n";
  	cout<<"          |-\\         |---\\                                  \n";
	cout<<"	  |  \\        |----\\                                 \n";       
  	cout<<"	  |   \\_______|_____\\_________________              \n";
  	cout<<"	  |____\\_______________|_________ |__\_)___        \n";
  	cout<<"           \\__|__[o]__[o]__[o]__/[o]__[o]__[o]__|_)          \n";
  	cout<<"            |........oo........./.........o.../              \n";
  	cout<<"                      |-----/                                \n";
  	cout<<"                      |----/                                 \n";
  	cout<<"                      |---/                                  \n";
  	cout<<"                      |--/                                   \n";
  
  	cout<< endl << "    Press any key for Main Menu";
  int opt,opt1,opt2,opt3,opt4;
  int acceptcode,flag;
  getch();
  system("CLS");
  do {
    system("CLS");
    get_time();
    cout<<"\n\n\t\t\n";
    cout<<"\t\t//////// MAIN MENU \\\\\\\\\\n";
    cout<<"\t\t         \n\n";
    cout<<"\n\t\t\tPlease select a kind of user:";
    cout<<"\n\n\t\t\t\t1.Admin\n\n\t\t\t\t2.New User\n\n\t\t\t\t3.Existing User\n\n\t\t\t\t0.Exit";
    cout<<"\n\n\t\t\t\t ";
    cin>>opt;
    switch(opt) {
      case 1:
	  	  ob.admin();
	  	  int x;
	  	  cout << "Please select";
	  	  cout << endl << "1.View customer details" << endl;
	  	  cout << "2.Modify customer details" << endl;
	  	  cin >> x;
	  	  switch(x) {
	  	  	case 1: {
	  			do {
	       system("CLS");
	       cout<<"\n\n\t\t\t@@@@@@@@@ Information Centre @@@@@@@@@";
	       cout<<"\n\t\t\t\t  ~~~~~~~~~~~~~~~~~";
	       cout<<"\n\n\tPlease select the type of operation that you would like to perform:";
	       cout<<"\n\n\t\t\t1.View Personal Details\n\n\t\t\t2.View Travel Details\n\n\t\t\t3.Edit Details\n\n\t\t\t4.Compute Bill\n\n\t\t\t5.Back\n\n\t\t\t ";
	       cin>>opt2;
	       switch(opt2) {
		    case 1: {
			ifstream ifl("PersonalDetails.txt",ios::binary);
			if(!ifl)
			cout<<"\nError";
			ifl.read((char*)&pob,sizeof(pob));
			while(!ifl.eof()) {
			  if(pob.travelCode()==acceptcode){
			    break;
			  }
			  ifl.read((char*)&pob,sizeof(pob));
			}
			pob.p_output();
			ifl.close();
			}
			break;
		    case 2: {
		    ifstream ifl1("TravelDetails.txt",ios::binary);
			if(!ifl1)
			cout<<"\nError";
			ifl1.read((char*)&tob,sizeof(tob));
			while(!ifl1.eof()) {
			  if(tob.gtcode()==acceptcode) {
			    break;
			  }
			  ifl1.read((char*)&tob,sizeof(tob));
			}
			tob.t_output();
			ifl1.close();
	        }
			break;
	  	  		break;}
	  	  	case 2: {
					system("CLS");
				     cout<<"\n\n\t\t Modificaton \n";
				     cout<<"\t\t               ~~~~~~~~~~~";
				     cout<<"\n\n\tChoose The Type Of Details You Want To Modify:\n\n\t\t\t1.Personal Details\n\n\t\t\t2.Travel Details\n\n\t\t\t3.Back\n\n\t\t\t ";
				     cin>>opt4;
				     switch(opt4) {
				       case 1:editp(acceptcode);
					      break;
				       case 2:editt(acceptcode);
					      break;
				       default:break;
				     }
				    }while(opt4!=3);
				    break;
				}while(1);
	  	  	break;}
	  	  }break;

      case 2:
	  do {
	       system("CLS");
	       cout<<"\n\n\n\t\t\t\t    NEW USER\n";
	       cout<<"\t\t\t\t    ********\n\n";
	       cout<<"\n\n\t\t\tChoose the type of details you want to enter:";
	       cout<<"\n\n\t\t\t\t1.Personal Details\n\n\t\t\t\t2.Travel Details\n\n\t\t\t\t3.Back\n\n\t\t\t\t ";
	       cin>>opt1;
	       switch(opt1){
		    case 1: {
		    code++;
			pob.p_input(code);
			ofstream ofl("PersonalDetails.txt",ios::binary|ios::app);
			if(!ofl)
			cout<<"\n\n\t\tSorry.The File Cannot Be Opened For Writing"<<endl;
			ofl.write((char*)&pob,sizeof(pob));
			ofl.close();
	        }
			break;
		    case 2: {
		    tob.t_input(code);
			ofstream ofl1("TravelDetails.txt",ios::binary|ios::app);
			if(!ofl1)
			cout<<"\n\n\t\tSorry.The File Cannot Be Opened For Writing"<<endl;
			ofl1.write((char*)&tob,sizeof(tob));
			ofl1.close();
			system("CLS");
			cout<<"\n\n\n\n!!!!!Your Details Have Been Registered.Please Make A Note Of This Code: "<<code;
			cout<<"\n\n* For modifications,Please visit 'existing user' section in the main screen";
			getch();
			break;
	    	}
			default:
				cout<<"Invalid input";
				break;
	        }
	        } while(opt1!=3);
	        break;
      case 3:
	  	 system("CLS");
	     cout<<"\n\n\t\t\t***** EXISTING USER *****\n\n\t\tPlease Enter The Travel Code That Was Given To You\n\n\t\t\t ";
	     cin>>acceptcode;
	     if(acceptcode!=code) {
	       cout<<"\nNo such record has been created!";
	       sleep(3);
	     }
	     family(acceptcode,flag);
	     cout<<endl<<endl<<"\t\t\t\tCode no:"<<acceptcode;
	     getch();
	     if(flag==1) {
	     do {
	       system("CLS");
	       cout<<"\n\n\t\t\t@@@@@@@@@ Information Centre @@@@@@@@@";
	       cout<<"\n\t\t\t\t  ~~~~~~~~~~~~~~~~~";
	       cout<<"\n\n\tPlease select the type of operation that you would like to perform:";
	       cout<<"\n\n\t\t\t1.View Personal Details\n\n\t\t\t2.View Travel Details\n\n\t\t\t3.Edit Details\n\n\t\t\t4.Compute Bill\n\n\t\t\t5.Back\n\n\t\t\t ";
	       cin>>opt2;
	       switch(opt2) {
		    case 1: {
			ifstream ifl("PersonalDetails.txt",ios::binary);
			if(!ifl)
			cout<<"\nError";
			ifl.read((char*)&pob,sizeof(pob));
			while(!ifl.eof()) {
			  if(pob.travelCode()==acceptcode){
			    break;
			  }
			  ifl.read((char*)&pob,sizeof(pob));
			}
			pob.p_output();
			ifl.close();
			}
			break;
		    case 2: {
		    ifstream ifl1("TravelDetails.txt",ios::binary);
			if(!ifl1)
			cout<<"\nError";
			ifl1.read((char*)&tob,sizeof(tob));
			while(!ifl1.eof()) {
			  if(tob.gtcode()==acceptcode) {
			    break;
			  }
			  ifl1.read((char*)&tob,sizeof(tob));
			}
			tob.t_output();
			ifl1.close();
	        }
			break;
		    case 3: {
		    do {
			 system("CLS");
			  cout<<"\n\n\n\t Edit Details ";
			  cout<<"\n\n\t\tPlease select from among the editing options:\n\n";
			  cout<<"\t\t\t\t1.Modify\n\n\t\t\t\t2.Delete\n\n\t\t\t\t3.Back\n\n\t\t\t\t ";
			  cin>>opt3;
			  switch(opt3) {
			    case 1:do {
				     system("CLS");
				     cout<<"\n\n\t\t Modificaton \n";
				     cout<<"\t\t               ~~~~~~~~~~~";
				     cout<<"\n\n\tChoose The Type Of Details You Want To Modify:\n\n\t\t\t1.Personal Details\n\n\t\t\t2.Travel Details\n\n\t\t\t3.Back\n\n\t\t\t ";
				     cin>>opt4;
				     switch(opt4) {
				       case 1:editp(acceptcode);
					      break;
				       case 2:editt(acceptcode);
					      break;
				       default:break;
				     }
				    }while(opt4!=3);
				    break;
			    case 2: {
				   deletion(acceptcode);
				   opt3=3;
				   opt2=5;
			    }
				   break;
			    default:
				break;
			    }
			    }while(opt3!=3);
            	}
		    	break;
	        case 4: {
		    ifstream ifl3("PersonalDetails.txt",ios::binary);
			if(!ifl3)
			cout<<"\nError";
			ifl3.read((char*)&pob,sizeof(pob));
			while(!ifl3.eof()) {
			  if(pob.travelCode()==acceptcode) {
			    break;
			  } 
			  ifl3.read((char*)&pob,sizeof(pob));
			}
			ifstream ifl2("TravelDetails.txt",ios::binary);
			if(!ifl2)
			cout<<"\nError";
			ifl2.read((char*)&tob,sizeof(tob));
			while(!ifl2.eof()) {
			  if(tob.gtcode()==acceptcode){
			    break;
			  }
			  ifl2.read((char*)&tob,sizeof(tob));
			}
			tob.accept(pob.travelCode());
			tob.compute();
			ifl2.close();
	        }
			break;
	        default:{
		    break;
	        }while(opt2!=5);
	        }break;
      case 0: {
	     ofstream fil("INITIALL.txt",ios::binary); //storing code value
	     if(!fil)
	     cout<<"\nError";
	     fil.write((char*)&code,sizeof(code));
	     fil.close();
	     system("CLS");
		 cout << endl << endl << endl << endl;
       	 cout<<"\t      |===|						~~\n";
    	 cout<<"   	   _|   |____________________________________________|| ||___	" << endl;
	     cout<<"\t\t    |_|_|_|_\__()____()____()______()______()_____()__||_||__/"<<endl;
	     cout<<"\t    `.==---------|_|----|_|-----|_|----|_|-----------------/"<<endl;
	     cout<<"\t      `.__________________________________________________/"<<endl;
	     cout << "            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;
	     cout << "                  THANKYOU FOR VISITING TOURS AND TRAVEL AGENCY";
	     getch();
	     exit(0);
    } break;
    getch();
  } while(1);
  }
  } 
} while(1);//infinite loop till exit selected
}


